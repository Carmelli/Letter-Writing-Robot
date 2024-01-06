#include "PC FileIO.c"
const float RADIUS = 3;
const int CONVERSION = 180/(PI*RADIUS);
const int REG POWER = 20;
const bool up = false;
const bool down = true;

void initialize() {
    SensorType[S1] = sensorEV3_Touch;
    wait1Msec(50;
    SensorType[S2] = sensorEV3_Ultrasonic;
    wait1Msec(50);
    SensorType[S3] = sensorEV3 Color;
    wait1Msec(50);
    SensorMode[S3] = modeEV3Color Color;
    wait1Msec(50);
    SensorType[S4] = sensorEV3 Gyro;
    wait1Msec(50);
    SensorMode[S4] = modeEV3Gyro_Angle;
    wait1Msec(50)
}

void resetMotorEncoders()
{
    nMotorEncoder[motorA] = 0;
    nMotorEncoder[motorB] = 0;
    nMotorEncoder[motorC] = 0;
}

void moveXAxis(int distance, int motorPower)
{
    motor[motorA] = motorPower;
    while(abs(nMotorEncoder[motorA]) < (distance * CONVERSION))
    {}
    motor[motorA] = 0;
}

void moveYAxis(float distance, float motorPower)
{
    const float ENC_LIMIT = (distance * CONVERSION)
    nMotorEncoder[motorB] = 0;
    wait1Msec(2000);
    motor[motorB] = motorPower;
    while(abs(nMotorEncoder[motorB]) < ENC LIMIT)
    {}
    motor[motorB] = 0;
}

void moveZAxis(bool direction, float angle)
{
    if(direction == 0)
    {
        motor[motorC] = 100;
        while(abs(nMotorEncoder[motorC]) < angle)
        {}
        motor[motorC] = 0;
    }

    else
    {
        motor[motorC] = -100;
        while(abs(nMotorEncoder[motorC]) < angle)
        {}
        motor[motorC] = 0;
    }
}

void moveDiagonal(int distance, int motorPowerA, int motorPowerB)
{
    wait1Msec(3000);
    motor[motorA] = motorPowerA;
    motor[motorB] = motorPowerB;
    while(abs(nMotorEncoder[motorB]) < distance * CONVERSION)
    {}
    motor[motorA] = motor[motorB] = 0;
}

bool isButtonPressed()
{
    bool buttonPressed = false;
    while(SensorValue[S1] == 0)
    {}
    while(SensorValue[S1] == 1)
    {}
    buttonPressed = true;
    return ButtonPressed;
}

void writeH()
{
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(-3, REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(1, REG_POWER);
	resetMotorEncoders();
}


void writeT()
{
	resetMotorEncoders();
	moveXAxis(2, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, -REG_POWER);
	resetMotorEncoders();
}

void writeJ()
{
	resetMotorEncoders();
	moveXAxis(4, REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, REG_POWER);
	resetMotorEncoders();
}


void writeI()
{
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, REG_POWER);
}

void writeF()
{
	resetMotorEncoders();
	moveXAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
}

void writeB()
{
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(3, REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(3, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
	resetMotorEncoders();
}

void writeE()
{
	resetMotorEncoders();
	moveXAxis(3, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(3, REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(3, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(3, REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(4, -REG_POWER);
	resetMotorEncoders();
}

void writeP()
{
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, -REG_POWER);
	resetMotorEncoders();
	moveXAxis(2, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(2, REG_POWER);
	resetMotorEncoders();
	moveXAxis(4, REG_POWER);
}

void writeSpace()
{
	resetMotorEncoders();
	moveXAxis(4,REG_POWER);
}



void writeN()
{
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, REG_POWER);
	resetMotorEncoders();
	moveDiagonal(4, -12, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, REG_POWER);
	resetMotorEncoders();
}

void writeM()
{
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, REG_POWER);
	resetMotorEncoders();
	moveDiagonal(2, -12, -REG_POWER);
	resetMotorEncoders();
	moveDiagonal(2, -12, REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, -REG_POWER);
	resetMotorEncoders();
	moveYAxis(4, REG_POWER);
	resetMotorEncoders();
}

task main()
{
	initialize();
	TFileHandle fin;
	bool fileOkay = openReadPC(fin, "Group18TextFile.txt");

	if(!fileOkay)
	{
		displayString(5, "Error!");
		wait1Msec(5000);
	}
	else
	{
		displayString(5, "File Read Success!");
		wait1Msec(3000);
	}



	const int MAX_ARRAY_SIZE = 50;
	char fileChar[MAX_ARRAY_SIZE] = ' ';

	int index = 0;
	while (readCharPC(fin, fileChar[index]))
	{
		index++;
	}

	displayString(5, "Data Imported Success!");
	displayString(6, "Press button to initialize writing.");
	displayString(7, "%d", index);
	closeFilePC(fin);

	while (isButtonPressed() == 0)
	{}


	motor[motorA] = -10;
	while (SensorValue[S3] != (int)colorWhite)
	{}
	motor[motorA] = 0;



	int charInLine = 0;
	for(int count = 0; count < index && SensorValue[S2] > 12; count++)
	{
	
		if (fileChar[count] == 'h')
			writeH();
		else if (fileChar[count] == 't')
			writeT();
		else if (fileChar[count] == 'j')
			writeJ();
		else if (fileChar[count] == 'i')
			writeI();
		else if (fileChar[count] == 'f')
			writeF();
		else if (fileChar[count] == 'b')
			writeB();
		else if (fileChar[count] == 'e')
			writeE();
		else if (fileChar[count] == 'p')
			writeP();
		else if (fileChar[count] == 'n')
			writeN();
		else if (fileChar[count] == 'm')
			writeM();
		else
			writeSpace();

	
		wait1Msec(3000);

		charInLine++;

		if(charInLine == 3 && count != index && SensorValue[S2] > 12)
		{
			const int NEW_LINE_Y = 10;
			const int NEW_LINE_X = 15; 

			moveZAxis(up, 40);
			moveYAxis(NEW_LINE_Y, -REG_POWER);
			wait1Msec(1000);
			moveXAxis(NEW_LINE_X, REG_POWER);
			resetMotorEncoders();
			moveZAxis(down, 35);

			charInLine = 0;
		}



		else
		{
			moveXAxis(1, -REG_POWER);

		}

	}
}

