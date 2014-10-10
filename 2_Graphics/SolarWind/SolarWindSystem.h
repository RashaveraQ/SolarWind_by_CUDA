#ifndef __SOLARWINDSYSTEM_H__
#define __SOLARWINDSYSTEM_H__

class SolarWindSystem
{
public:
    
	enum ParticleArray
    {
        POSITION,
        VELOCITY,
    };

//	float4 *getArray(ParticleArray array);
//  void setArray(ParticleArray array, const float4 *data, int start, int count);
	void reset();

protected:
	
	// CPU data
//	float4 *m_hPos;		// particle positions
//	float4 *m_hVel;		// particle velocities

	// GPU data
//	float4 *m_dPos;
//	float4 *m_dVel;
};

#endif // __SOLARWINDSYSTEM_H__
