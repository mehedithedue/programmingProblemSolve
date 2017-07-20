#include <stdio.h>
#include <math.h>
//http://cpbook.subeen.com/2013/06/run-rate-1.html


int main(){

    int term, i;


    double opositTotalRun, teamTotalRun, restBallNum ;

    double totalBall = 300.00;


    scanf("%d",&term);

    for(i = 0; i < term; i++){


        scanf("%lf %lf %lf", &opositTotalRun, &teamTotalRun, &restBallNum);

        double currentRunRate = (teamTotalRun / (totalBall - restBallNum)) * 6;

        double requiredRunRate = ((opositTotalRun - teamTotalRun + 1) / restBallNum) * 6;



        printf("%0.2lf %0.2lf\n", currentRunRate, requiredRunRate);



    }

    return 0;
}
