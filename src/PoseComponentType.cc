/*
 * Copyright (C) 2018 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#include <ignition/math/Pose3.hh>
#include "ignition/gazebo/PoseComponentType.hh"
#include "ignition/gazebo/ComponentType.hh"

using namespace ignition;
using namespace gazebo;

//////////////////////////////////////////////////
PoseComponentType::PoseComponentType(ComponentManager &_compMgr)
  : ComponentType()
{
  this->Init<ignition::math::Pose3d>("ignition::math::Pose3d", _compMgr);
}

//////////////////////////////////////////////////
PoseComponentType::~PoseComponentType()
{
}
