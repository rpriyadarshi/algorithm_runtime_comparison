
import pandas as pd
import matplotlib.pyplot as plt
from flask import Flask, send_file

app = Flask(__name__)

@app.route('/')
def display_results():
    try:
        data_path = '../performance_logs/results.csv'
        chart_path = '../performance_logs/runtime_comparison.png'

        # Check if the results file exists
        try:
            data = pd.read_csv(data_path)
        except FileNotFoundError:
            return "Error: results.csv file not found.", 404

        if data.empty:
            # Placeholder graph if no data exists
            plt.figure(figsize=(10, 6))
            plt.title("No Data Available")
            plt.text(0.5, 0.5, "Run the program to generate data", ha='center', va='center', fontsize=14)
            plt.savefig(chart_path)
        else:
            plt.figure(figsize=(10, 6))
            for algorithm in data['Algorithm'].unique():
                subset = data[data['Algorithm'] == algorithm]
                plt.plot(subset.index + 1, subset['Runtime (us)'], marker='o', label=algorithm)

            plt.xlabel('Run Index')
            plt.ylabel('Runtime (us)')
            plt.title('Algorithm Runtime Comparison')
            plt.legend()
            plt.grid(True)
            plt.tight_layout()
            plt.savefig(chart_path)

        return send_file(chart_path, mimetype='image/png')
    except Exception as e:
        return f"Error generating visualization: {e}", 500


if __name__ == '__main__':
    app.run(debug=True)
