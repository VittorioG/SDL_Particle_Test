/*
 * Swarm.h
 *
 *  Created on: Apr. 16, 2019
 *      Author: Vittorio
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace sdltest {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle * m_pParticles;

public:
	Swarm();
	virtual ~Swarm();

	const Particle * const getParticles() {
		return m_pParticles;
	}
	;
};

} /* namespace sdltest */

#endif /* SWARM_H_ */
