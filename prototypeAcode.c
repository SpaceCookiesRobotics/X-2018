#pragma config(Motor,  port2,           leftFront,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           rightFront,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           leftTower,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           leftWristangle, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rightWristangle, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           rightTower,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           rightRear,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           leftRear,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	while(true){
		//chassis drive
		motor[rightFront] = vexRT[Ch2];
		motor[rightRear] = vexRT[Ch2];
		motor[leftFront] = vexRT[Ch3];
		motor[leftRear] = vexRT[Ch3];

		//tower arc drive
		motor[leftTower] = vexRT[Ch2Xmtr2];
		motor[rightTower] = vexRT[Ch2Xmtr2];

		//claw wrist drive
		motor[leftWristangle] = vexRT[Ch3Xmtr2];
		motor[rightWristangle] = vexRT[Ch3Xmtr2];

	}//while
}//task main
