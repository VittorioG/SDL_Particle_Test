/*
 * Swarm.cpp
 *
 *  Created on: Apr. 16, 2019
 *      Author: Vittorio
 */

#include "Swarm.h"

namespace sdltest {

Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

} /* namespace sdltest */
