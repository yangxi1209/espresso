/*
  Copyright (C) 2010,2011,2012,2013,2014 The ESPResSo project
  Copyright (C) 2002,2003,2004,2005,2006,2007,2008,2009,2010 
    Max-Planck-Institute for Polymer Research, Theory Group
  
  This file is part of ESPResSo.
  
  ESPResSo is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  
  ESPResSo is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>. 
*/

#ifndef CG_DNA_HPP
#define CG_DNA_HPP

#include "utils.hpp"
#include "interaction_data.hpp"
#include "particle_data.hpp"
#include "grid.hpp"

#ifdef HYRDOGEN_BOND

int hydrogen_bond_set_params(int bond_type, DoubleList *params);

int calc_hydrogen_bond_force(Particle *s1, Particle *b1, Particle *b2, Particle *s2, Bonded_ia_parameters *iaparams, double f_s1[3], double f_b1[3], double f_b2[3], double f_s2[3]);

int calc_hydrogen_bond_energy(Particle *s1, Particle *b1, Particle *b2, Particle *s2, Bonded_ia_parameters *iaparams, double *_energy);

#endif /* HYDROGEN_BOND */

#endif /* CG_DNA_HPP */
