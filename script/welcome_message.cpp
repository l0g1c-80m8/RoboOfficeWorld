
#include <gazebo/gazebo.hh>

namespace gazebo
{
  class RoboOfficeWorldPlugin : public WorldPlugin
  {
    public: RoboOfficeWorldPlugin() : WorldPlugin()
            {
              printf("Welcome to Rutvik's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(RoboOfficeWorldPlugin)
}
