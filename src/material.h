#ifndef MATERIAL_H
#define MATERIAL_H
/// \file material.h 
/// \brief Material 

/// Material 
class Material {

	///total number of materials
	static int number_of_materials;
	static double smoothinglength;///<smoothinglenth
	static double delta;

public:
	
	///material name string
	char material_name[25];
	int number; ///<the material NO.

	///\brief material type
	///
	///- 0: solid;
	///-  1: liquid;
	///-  2: gas
	int material_type;

	double cv;///<heat capacity
	double eta;///<viscosity
	double zeta;///<heat conduction rate
	double kappa;///<???
	double gamma; ///<???

	double nu; ///<kinetice viscosity
	double b0;///<reference pressure
	double rho0;///<reference density
	double a0; ///<reference <b>sound speed??? was not commented</b>

	///constructor
	Material();
	///constructor
	Material(Initiation &ini);
	///constructor
	Material(char *material_name, Initiation &ini);
	
	///non-dimensionalize
	void non_dimensionalize(Initiation &ini);
	///show properties
	void show_properties();

	///obtain parameter b0
	void Get_b0(double sound);
	
	//equation of states

	///get pressure
	double get_p(double rho);
	///get rho from pressure
	double get_rho(double p);
	///get interal energy
	double get_e(double T);
	///get temperature (function is defined nowhere)
	double get_T(double e);
	///get sound speed
	double get_Cs(double p, double rho);

};

#endif //MATERIAL_H
