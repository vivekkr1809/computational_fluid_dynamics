/*
 * This is a compressible solver for fluid flow.
 * 
 * The model uses MacCormack algorithm to solve for the flow.
 *
 * Last Updated : 04/04/2018
 *
 * Author(s) : Vivek Kumar
 */

// Add C++ includes

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cmath>

// Add the predictor-corrector files
#include <predictor_step.hpp>
#include <corrector_step.hpp>

void save_results(double solution, std::string &filename){
	/*
	The function takes an array and saves it to a csv file.
	Each variable is saved along with the coordinates of the mesh.
	For any variable say velocity in x-direction (u)
	The data that gets saved is x_coordinate, y_coordinates, u
	*/


}


void create_mesh()

int main(){


	return 0;
}