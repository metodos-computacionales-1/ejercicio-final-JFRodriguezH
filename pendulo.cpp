#include <iostream>
#include <fstream>
#include <cmath>
#include <stdlib.h>
#include<fstream>

//Global variables declaring
const double G=9.8;
const double dt=0.01; //Step for th method //M_PI/300.0;
const double eps=0.001;
//theta''+g/l theta + q theta' = F_d sin(Omega t)

class Pendulum
{
public:
	double L; //Lenght
	double q; //Friction coeficient
	double Fd; //External Force
	double Omega; //External force frequency
	double W; //Angular velocity 
	double Theta; //Angle
	Pendulum();// Initial values for the class
	~Pendulum();//Anihilator
};
Pendulum::Pendulum()
{
	L=0.0;
	q=0.0;
	Fd=0.0;
	Omega=0.0;
	W=0.0;
	Theta=0.0;
}
Pendulum::~Pendulum()
{
}

//------------------------------Function declaring----------------------------
void initial_conditions(Pendulum & p, float F);
void euler_cromer(Pendulum & p,double dt,double t);
std::ofstream outfile;


int main(int argc, char** argv)
{
	Pendulum p;
    double t=0.0;//Time 
    int N = atoi(argv[1]);//steps of evolution
	float F = atof(argv[2]);//Magnitud de la fuerza
    // intialization
    initial_conditions(p, F);
	std::string filename = "pendulo.dat";
	if(atoi(argv[3])==2){
		filename = "pendulo_";
		filename.append(argv[2]);
		filename.append(".dat");
	}
	outfile.open(filename);
	outfile << p.Fd << "\t" << p.Omega << "\t" << dt  << std::endl;
	for (int ii=1; ii<=N; ii++)
	{
		euler_cromer(p,dt,t);
		outfile << t << "\t" << p.Theta << "\t" << p.W  << std::endl;
		t+=dt;
	}
	outfile.close();
	return 0;
}


// ------------------- Functions ------------------------------------
void euler_cromer(Pendulum & p,double dt,double t)
{
	// Euler- Cromer
	p.W=p.W+(-(G/p.L)*sin(p.Theta) - p.q*p.W + p.Fd*sin(p.Omega*t))*dt;
	p.Theta=p.Theta + p.W*dt;
	if(p.Theta < - M_PI)
    {
		p.Theta += 2*M_PI;
    }
	else if(p.Theta > M_PI)
    {
		p.Theta += -2*M_PI;
    }
} 
 
void initial_conditions(Pendulum & p, float F)
{
	p.q=0.5;
	p.Fd=F;
	p.Omega=0.666;
	p.L=G;
	p.W=0.0;
	p.Theta=0.2;  
}