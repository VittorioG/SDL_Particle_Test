/*
 * Particle.h
 *
 *  Created on: Apr. 16, 2019
 *      Author: Vittorio
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace sdltest {

struct Particle {
	double m_x;
	double m_y;

public:
	Particle();
	virtual ~Particle();
};

} /* namespace sdltest */

#endif /* PARTICLE_H_ */
