// Copyright 2020, Apex.AI Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCLCPP__CREATE_GENERIC_PUBLISHER_HPP_
#define RCLCPP__CREATE_GENERIC_PUBLISHER_HPP_

#include <memory>
#include <string>

#include "rclcpp/callback_group.hpp"
#include "rclcpp/generic_publisher.hpp"
#include "rclcpp/node_interfaces/node_topics_interface.hpp"
#include "rclcpp/qos.hpp"

namespace rclcpp
{

/// Create and return a GenericPublisher.
/**
 * The returned pointer will never be empty, but this function can throw various exceptions, for
 * instance when the message's package can not be found on the AMENT_PREFIX_PATH.
 *
 * \param topics_interface NodeTopicsInterface pointer used in parts of the setup
 * \param topic_name Topic name
 * \param topic_type Topic type
 * \param qos QoS settings
 * \param group Callback group
 */
std::shared_ptr<GenericPublisher> create_generic_publisher(
  rclcpp::node_interfaces::NodeTopicsInterface::SharedPtr topics_interface,
  const std::string & topic_name,
  const std::string & topic_type,
  const rclcpp::QoS & qos,
  rclcpp::CallbackGroup::SharedPtr group = nullptr);

}  // namespace rclcpp

#endif  // RCLCPP__CREATE_GENERIC_PUBLISHER_HPP_
