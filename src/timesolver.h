//-----------------------------------------------------------------------
//					Time solver class
//-----------------------------------------------------------------------
class TimeSolver{

	//parameters copied from initiation
	double cell_size;
	Vec2d box_size;
	double smoothinglength;

	int ite; //number of itenary
	double dt; //time step

public:
	
	//constructor
	TimeSolver(Initiation &ini);
	
	//advance time interval D_time
	void TimeIntegral(Hydrodynamics &hydro, ParticleManager &particles, Boundary &boundary,
				   double &Time, double D_time, Diagnose &diagnose,
				   Initiation &ini, QuinticSpline &weight_function, MLS &mls);
	//advance time interval D_time with summation for density
	void TimeIntegral_summation(Hydrodynamics &hydro, ParticleManager &particles, Boundary &boundary,
				   double &Time, double D_time, Diagnose &diagnose,
				   Initiation &ini, QuinticSpline &weight_function, MLS &mls);

};