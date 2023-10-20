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

#include <alibabacloud/eflo/model/UnAssignPrivateIpAddressRequest.h>

using AlibabaCloud::Eflo::Model::UnAssignPrivateIpAddressRequest;

UnAssignPrivateIpAddressRequest::UnAssignPrivateIpAddressRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "UnAssignPrivateIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

UnAssignPrivateIpAddressRequest::~UnAssignPrivateIpAddressRequest() {}

std::string UnAssignPrivateIpAddressRequest::getSubnetId() const {
  return subnetId_;
}

void UnAssignPrivateIpAddressRequest::setSubnetId(const std::string &subnetId) {
  subnetId_ = subnetId;
  setBodyParameter(std::string("SubnetId"), subnetId);
}

std::string UnAssignPrivateIpAddressRequest::getClientToken() const {
  return clientToken_;
}

void UnAssignPrivateIpAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UnAssignPrivateIpAddressRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void UnAssignPrivateIpAddressRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setBodyParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string UnAssignPrivateIpAddressRequest::getRegionId() const {
  return regionId_;
}

void UnAssignPrivateIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string UnAssignPrivateIpAddressRequest::getIpName() const {
  return ipName_;
}

void UnAssignPrivateIpAddressRequest::setIpName(const std::string &ipName) {
  ipName_ = ipName;
  setBodyParameter(std::string("IpName"), ipName);
}

std::string UnAssignPrivateIpAddressRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void UnAssignPrivateIpAddressRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setBodyParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

