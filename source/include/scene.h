//Visualization Parameters

namespace scene {
using namespace glm;

vec3 lightcolor = vec3(1);
float lightstrength = 1.0f;
vec3 lightpos = vec3(1.25f,1.5f,2.5f);
vec3 skycolor = vec3(0.80,0.90,0.89);

bool distancefog = true;

mat4 dp = glm::ortho<float>(-1200, 1200, -1200, 1200, -800, 800);
mat4 dv = glm::lookAt(lightpos, cam::look, glm::vec3(0,1,0));
mat4 bias = glm::mat4(
    0.5, 0.0, 0.0, 0.0,
    0.0, 0.5, 0.0, 0.0,
    0.0, 0.0, 0.5, 0.0,
    0.5, 0.5, 0.5, 1.0
);

vec3 watercolor = vec3(0.27, 0.5, 0.7);
bool wateroverlay = true;

}
