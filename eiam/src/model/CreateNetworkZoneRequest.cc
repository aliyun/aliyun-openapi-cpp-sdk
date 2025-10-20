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

#include <alibabacloud/eiam/model/CreateNetworkZoneRequest.h>

using AlibabaCloud::Eiam::Model::CreateNetworkZoneRequest;

CreateNetworkZoneRequest::CreateNetworkZoneRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateNetworkZone") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkZoneRequest::~CreateNetworkZoneRequest() {}

std::string CreateNetworkZoneRequest::getNetworkZoneType() const {
  return networkZoneType_;
}

void CreateNetworkZoneRequest::setNetworkZoneType(const std::string &networkZoneType) {
  networkZoneType_ = networkZoneType;
  setParameter(std::string("NetworkZoneType"), networkZoneType);
}

std::string CreateNetworkZoneRequest::getClientToken() const {
  return clientToken_;
}

void CreateNetworkZoneRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateNetworkZoneRequest::std::string> CreateNetworkZoneRequest::getIpv6Cidrs() const {
  return ipv6Cidrs_;
}

void CreateNetworkZoneRequest::setIpv6Cidrs(const std::vector<CreateNetworkZoneRequest::std::string> &ipv6Cidrs) {
  ipv6Cidrs_ = ipv6Cidrs;
  for(int dep1 = 0; dep1 != ipv6Cidrs.size(); dep1++) {
    setParameter(std::string("Ipv6Cidrs") + "." + std::to_string(dep1 + 1), ipv6Cidrs[dep1]);
  }
}

std::string CreateNetworkZoneRequest::getDescription() const {
  return description_;
}

void CreateNetworkZoneRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNetworkZoneRequest::getNetworkZoneName() const {
  return networkZoneName_;
}

void CreateNetworkZoneRequest::setNetworkZoneName(const std::string &networkZoneName) {
  networkZoneName_ = networkZoneName;
  setParameter(std::string("NetworkZoneName"), networkZoneName);
}

std::vector<CreateNetworkZoneRequest::std::string> CreateNetworkZoneRequest::getIpv4Cidrs() const {
  return ipv4Cidrs_;
}

void CreateNetworkZoneRequest::setIpv4Cidrs(const std::vector<CreateNetworkZoneRequest::std::string> &ipv4Cidrs) {
  ipv4Cidrs_ = ipv4Cidrs;
  for(int dep1 = 0; dep1 != ipv4Cidrs.size(); dep1++) {
    setParameter(std::string("Ipv4Cidrs") + "." + std::to_string(dep1 + 1), ipv4Cidrs[dep1]);
  }
}

std::string CreateNetworkZoneRequest::getInstanceId() const {
  return instanceId_;
}

void CreateNetworkZoneRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateNetworkZoneRequest::getVpcId() const {
  return vpcId_;
}

void CreateNetworkZoneRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

