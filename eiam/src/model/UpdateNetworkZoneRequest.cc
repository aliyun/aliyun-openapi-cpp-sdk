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

#include <alibabacloud/eiam/model/UpdateNetworkZoneRequest.h>

using AlibabaCloud::Eiam::Model::UpdateNetworkZoneRequest;

UpdateNetworkZoneRequest::UpdateNetworkZoneRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateNetworkZone") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNetworkZoneRequest::~UpdateNetworkZoneRequest() {}

std::string UpdateNetworkZoneRequest::getClientToken() const {
  return clientToken_;
}

void UpdateNetworkZoneRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateNetworkZoneRequest::std::string> UpdateNetworkZoneRequest::getIpv6Cidrs() const {
  return ipv6Cidrs_;
}

void UpdateNetworkZoneRequest::setIpv6Cidrs(const std::vector<UpdateNetworkZoneRequest::std::string> &ipv6Cidrs) {
  ipv6Cidrs_ = ipv6Cidrs;
  for(int dep1 = 0; dep1 != ipv6Cidrs.size(); dep1++) {
    setParameter(std::string("Ipv6Cidrs") + "." + std::to_string(dep1 + 1), ipv6Cidrs[dep1]);
  }
}

std::string UpdateNetworkZoneRequest::getNetworkZoneId() const {
  return networkZoneId_;
}

void UpdateNetworkZoneRequest::setNetworkZoneId(const std::string &networkZoneId) {
  networkZoneId_ = networkZoneId;
  setParameter(std::string("NetworkZoneId"), networkZoneId);
}

std::string UpdateNetworkZoneRequest::getNetworkZoneName() const {
  return networkZoneName_;
}

void UpdateNetworkZoneRequest::setNetworkZoneName(const std::string &networkZoneName) {
  networkZoneName_ = networkZoneName;
  setParameter(std::string("NetworkZoneName"), networkZoneName);
}

std::vector<UpdateNetworkZoneRequest::std::string> UpdateNetworkZoneRequest::getIpv4Cidrs() const {
  return ipv4Cidrs_;
}

void UpdateNetworkZoneRequest::setIpv4Cidrs(const std::vector<UpdateNetworkZoneRequest::std::string> &ipv4Cidrs) {
  ipv4Cidrs_ = ipv4Cidrs;
  for(int dep1 = 0; dep1 != ipv4Cidrs.size(); dep1++) {
    setParameter(std::string("Ipv4Cidrs") + "." + std::to_string(dep1 + 1), ipv4Cidrs[dep1]);
  }
}

std::string UpdateNetworkZoneRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateNetworkZoneRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateNetworkZoneRequest::getVpcId() const {
  return vpcId_;
}

void UpdateNetworkZoneRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

