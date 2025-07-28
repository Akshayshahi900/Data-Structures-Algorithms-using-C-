#include <stdio.h>

struct Process {
    int pid;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int waitingTime;
    int turnAroundTime;
    int responseTime;
};

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    // Input
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter arrival time of process %d: ", i + 1);
        scanf("%d", &p[i].arrivalTime);
        printf("Enter burst time of process %d: ", i + 1);
        scanf("%d", &p[i].burstTime);
    }

    int currentTime = 0;

    for (int i = 0; i < n; i++) {
        // CPU idle time
        if (currentTime < p[i].arrivalTime)
            currentTime = p[i].arrivalTime;

        // Completion time
        p[i].completionTime = currentTime + p[i].burstTime;

        // Turnaround time = CT - AT
        p[i].turnAroundTime = p[i].completionTime - p[i].arrivalTime;

        // Waiting time = TAT - BT
        p[i].waitingTime = p[i].turnAroundTime - p[i].burstTime;

        // Response time = WT in FCFS
        p[i].responseTime = p[i].waitingTime;

        // Move current time forward
        currentTime = p[i].completionTime;
    }

    // Output
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
            p[i].pid,
            p[i].arrivalTime,
            p[i].burstTime,
            p[i].completionTime,
            p[i].turnAroundTime,
            p[i].waitingTime,
            p[i].responseTime);
    }

    return 0;
}
