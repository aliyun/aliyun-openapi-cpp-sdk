/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/eflo/model/AssignPrivateIpAddressRequest.h>

using AlibabaCloud::Eflo::Model::AssignPrivateIpAddressRequest;

AssignPrivateIpAddressRequest::AssignPrivateIpAddressRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "AssignPrivateIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

AssignPrivateIpAddressRequest::~AssignPrivateIpAddressRequest() {}

std::string AssignPrivateIpAddressRequest::getClientToken() const {
  return clientToken_;
}

void AssignPrivateIpAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string AssignPrivateIpAddressRequest::getDescription() const {
  return description_;
}

void AssignPrivateIpAddressRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

bool AssignPrivateIpAddressRequest::getAssignMac() const {
  return assignMac_;
}

void AssignPrivateIpAddressRequest::setAssignMac(bool assignMac) {
  assignMac_ = assignMac;
  setBodyParameter(std::string("AssignMac"), assignMac ? "true" : "false");
}

std::string AssignPrivateIpAddressRequest::getRegionId() const {
  return regionId_;
}

void AssignPrivateIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string AssignPrivateIpAddressRequest::getSubnetId() const {
  return subnetId_;
}

void AssignPrivateIpAddressRequest::setSubnetId(const std::string &subnetId) {
  subnetId_ = subnetId;
  setBodyParameter(std::string("SubnetId"), subnetId);
}

bool AssignPrivateIpAddressRequest::getSkipConfig() const {
  return skipConfig_;
}

void AssignPrivateIpAddressRequest::setSkipConfig(bool skipConfig) {
  skipConfig_ = skipConfig;
  setBodyParameter(std::string("SkipConfig"), skipConfig ? "true" : "false");
}

std::string AssignPrivateIpAddressRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void AssignPrivateIpAddressRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setBodyParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string AssignPrivateIpAddressRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void AssignPrivateIpAddressRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setBodyParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

