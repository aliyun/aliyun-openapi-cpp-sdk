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

#include <alibabacloud/privatelink/model/CreateVpcEndpointRequest.h>

using AlibabaCloud::Privatelink::Model::CreateVpcEndpointRequest;

CreateVpcEndpointRequest::CreateVpcEndpointRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "CreateVpcEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpcEndpointRequest::~CreateVpcEndpointRequest() {}

std::string CreateVpcEndpointRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpcEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateVpcEndpointRequest::SystemTag> CreateVpcEndpointRequest::getSystemTag() const {
  return systemTag_;
}

void CreateVpcEndpointRequest::setSystemTag(const std::vector<CreateVpcEndpointRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

std::vector<std::string> CreateVpcEndpointRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateVpcEndpointRequest::setSecurityGroupId(const std::vector<std::string> &securityGroupId) {
  securityGroupId_ = securityGroupId;
}

std::string CreateVpcEndpointRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVpcEndpointRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateVpcEndpointRequest::getRegionId() const {
  return regionId_;
}

void CreateVpcEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateVpcEndpointRequest::getEndpointType() const {
  return endpointType_;
}

void CreateVpcEndpointRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("EndpointType"), endpointType);
}

std::vector<CreateVpcEndpointRequest::Zone> CreateVpcEndpointRequest::getZone() const {
  return zone_;
}

void CreateVpcEndpointRequest::setZone(const std::vector<CreateVpcEndpointRequest::Zone> &zone) {
  zone_ = zone;
  for(int dep1 = 0; dep1 != zone.size(); dep1++) {
  auto zoneObj = zone.at(dep1);
  std::string zoneObjStr = std::string("Zone") + "." + std::to_string(dep1 + 1);
    setParameter(zoneObjStr + ".VSwitchId", zoneObj.vSwitchId);
    setParameter(zoneObjStr + ".ZoneId", zoneObj.zoneId);
    setParameter(zoneObjStr + ".ip", zoneObj.ip);
  }
}

std::string CreateVpcEndpointRequest::getServiceName() const {
  return serviceName_;
}

void CreateVpcEndpointRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::vector<CreateVpcEndpointRequest::Tag> CreateVpcEndpointRequest::getTag() const {
  return tag_;
}

void CreateVpcEndpointRequest::setTag(const std::vector<CreateVpcEndpointRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateVpcEndpointRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpcEndpointRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVpcEndpointRequest::getEndpointDescription() const {
  return endpointDescription_;
}

void CreateVpcEndpointRequest::setEndpointDescription(const std::string &endpointDescription) {
  endpointDescription_ = endpointDescription;
  setParameter(std::string("EndpointDescription"), endpointDescription);
}

long CreateVpcEndpointRequest::getZonePrivateIpAddressCount() const {
  return zonePrivateIpAddressCount_;
}

void CreateVpcEndpointRequest::setZonePrivateIpAddressCount(long zonePrivateIpAddressCount) {
  zonePrivateIpAddressCount_ = zonePrivateIpAddressCount;
  setParameter(std::string("ZonePrivateIpAddressCount"), std::to_string(zonePrivateIpAddressCount));
}

bool CreateVpcEndpointRequest::getProtectedEnabled() const {
  return protectedEnabled_;
}

void CreateVpcEndpointRequest::setProtectedEnabled(bool protectedEnabled) {
  protectedEnabled_ = protectedEnabled;
  setParameter(std::string("ProtectedEnabled"), protectedEnabled ? "true" : "false");
}

std::string CreateVpcEndpointRequest::getEndpointName() const {
  return endpointName_;
}

void CreateVpcEndpointRequest::setEndpointName(const std::string &endpointName) {
  endpointName_ = endpointName;
  setParameter(std::string("EndpointName"), endpointName);
}

std::string CreateVpcEndpointRequest::getVpcId() const {
  return vpcId_;
}

void CreateVpcEndpointRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateVpcEndpointRequest::getServiceId() const {
  return serviceId_;
}

void CreateVpcEndpointRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

