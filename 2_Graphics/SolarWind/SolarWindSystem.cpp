#include "SolarWindSystem.h"

#if 0
float4 *
SolarWindSystem::getArray(ParticleArray array)
{
	/*
    assert(m_bInitialized);

    float *hdata = 0;
    float *ddata = 0;
    struct cudaGraphicsResource *cuda_vbo_resource = 0;

    switch (array)
    {
        default:
        case POSITION:
            hdata = m_hPos;
            ddata = m_dPos;
            cuda_vbo_resource = m_cuda_posvbo_resource;
            break;

        case VELOCITY:
            hdata = m_hVel;
            ddata = m_dVel;
            break;
    }

    copyArrayFromDevice(hdata, ddata, &cuda_vbo_resource, m_numParticles * sizeof(float4));
	*/
    return 0;//hdata;
}

void
SolarWindSystem::setArray(ParticleArray array, const float4 *data, int start, int count)
{
	/*
    assert(m_bInitialized);

    switch (array)
    {
        default:
        case POSITION:
            {
                if (m_bUseOpenGL)
                {
                    unregisterGLBufferObject(m_cuda_posvbo_resource);
                    glBindBuffer(GL_ARRAY_BUFFER, m_posVbo);
                    glBufferSubData(GL_ARRAY_BUFFER, start * sizeof(float4), count * sizeof(float4), data);
                    glBindBuffer(GL_ARRAY_BUFFER, 0);
                    registerGLBufferObject(m_posVbo, &m_cuda_posvbo_resource);
                }
            }
            break;

        case VELOCITY:
            copyArrayToDevice(m_dVel, data, start * sizeof(float4), count * sizeof(float4));
            break;
    }
	*/
}
#endif 

void SolarWindSystem::reset()
{
/*
	uint i = 0;
	for (float u = -1.0f; u < 1.0f; u += 2.0f / WIDTH * DEPTH) {
		for (float v = -1.0f; v < 1.0f; v += 2.0f / HEIGHT * DEPTH) {
			for (float w = 0.0f; w < 1.0f; w += 1.0f / (DEPTH * DEPTH)) {
				m_hPos[i] = make_float4(-2.0f + w, u, v, 1.0f);
				m_hVel[i] = make_float4(0.01f, 0.0f, 0.0f, 0.0f);
				i++
			}
		}
	}
*/

//	for (i = 0; i < m_numParticles; i++) {
//		m_hVel[i] = make_float4(0.0f, 0.0f, 0.0f, 200.0f);
//	}

    //setArray(POSITION, m_hPos, 0, m_numParticles);
//    setArray(VELOCITY, m_hVel, 0, m_numParticles);
}