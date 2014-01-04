#pragma once
#ifndef RF_SCORE_LIGAND_HPP
#define RF_SCORE_LIGAND_HPP

#include <vector>
#include <fstream>
#include "atom.hpp"

class ligand : public vector<atom>
{
public:
	/// Load current ligand from a file
	void load(const string path);

	/// Load current ligand from an ifstream
	void load(ifstream& ifs);

	/// Variables to calculate Nrot.
	size_t num_active_torsions;
	size_t num_inactive_torsions;
};

#endif
