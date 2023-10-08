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

#include <alibabacloud/nlb/model/CreateServerGroupRequest.h>

using AlibabaCloud::Nlb::Model::CreateServerGroupRequest;

CreateServerGroupRequest::CreateServerGroupRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "CreateServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateServerGroupRequest::~CreateServerGroupRequest() {}

std::string CreateServerGroupRequest::getQuicVersion() const {
  return quicVersion_;
}

void CreateServerGroupRequest::setQuicVersion(const std::string &quicVersion) {
  quicVersion_ = quicVersion;
  setBodyParameter(std::string("QuicVersion"), quicVersion);
}

std::string CreateServerGroupRequest::getServerGroupName() const {
  return serverGroupName_;
}

void CreateServerGroupRequest::setServerGroupName(const std::string &serverGroupName) {
  serverGroupName_ = serverGroupName;
  setBodyParameter(std::string("ServerGroupName"), serverGroupName);
}

std::string CreateServerGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateServerGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

bool CreateServerGroupRequest::getPreserveClientIpEnabled() const {
  return preserveClientIpEnabled_;
}

void CreateServerGroupRequest::setPreserveClientIpEnabled(bool preserveClientIpEnabled) {
  preserveClientIpEnabled_ = preserveClientIpEnabled;
  setBodyParameter(std::string("PreserveClientIpEnabled"), preserveClientIpEnabled ? "true" : "false");
}

CreateServerGroupRequest::HealthCheckConfig CreateServerGroupRequest::getHealthCheckConfig() const {
  return healthCheckConfig_;
}

void CreateServerGroupRequest::setHealthCheckConfig(const CreateServerGroupRequest::HealthCheckConfig &healthCheckConfig) {
  healthCheckConfig_ = healthCheckConfig;
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckEnabled", healthCheckConfig.healthCheckEnabled ? "true" : "false");
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckType", healthCheckConfig.healthCheckType);
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckConnectPort", std::to_string(healthCheckConfig.healthCheckConnectPort));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthyThreshold", std::to_string(healthCheckConfig.healthyThreshold));
  setBodyParameter(std::string("HealthCheckConfig") + ".UnhealthyThreshold", std::to_string(healthCheckConfig.unhealthyThreshold));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckConnectTimeout", std::to_string(healthCheckConfig.healthCheckConnectTimeout));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckInterval", std::to_string(healthCheckConfig.healthCheckInterval));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckDomain", healthCheckConfig.healthCheckDomain);
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckUrl", healthCheckConfig.healthCheckUrl);
  for(int dep1 = 0; dep1 != healthCheckConfig.healthCheckHttpCode.size(); dep1++) {
    setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckHttpCode." + std::to_string(dep1 + 1), healthCheckConfig.healthCheckHttpCode[dep1]);
  }
  setBodyParameter(std::string("HealthCheckConfig") + ".HttpCheckMethod", healthCheckConfig.httpCheckMethod);
}

std::string CreateServerGroupRequest::getAddressIPVersion() const {
  return addressIPVersion_;
}

void CreateServerGroupRequest::setAddressIPVersion(const std::string &addressIPVersion) {
  addressIPVersion_ = addressIPVersion;
  setBodyParameter(std::string("AddressIPVersion"), addressIPVersion);
}

std::string CreateServerGroupRequest::getScheduler() const {
  return scheduler_;
}

void CreateServerGroupRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setBodyParameter(std::string("Scheduler"), scheduler);
}

std::string CreateServerGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateServerGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateServerGroupRequest::getProtocol() const {
  return protocol_;
}

void CreateServerGroupRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setBodyParameter(std::string("Protocol"), protocol);
}

std::string CreateServerGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateServerGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool CreateServerGroupRequest::getPersistenceEnabled() const {
  return persistenceEnabled_;
}

void CreateServerGroupRequest::setPersistenceEnabled(bool persistenceEnabled) {
  persistenceEnabled_ = persistenceEnabled;
  setBodyParameter(std::string("PersistenceEnabled"), persistenceEnabled ? "true" : "false");
}

int CreateServerGroupRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void CreateServerGroupRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setBodyParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

std::vector<CreateServerGroupRequest::Tag> CreateServerGroupRequest::getTag() const {
  return tag_;
}

void CreateServerGroupRequest::setTag(const std::vector<CreateServerGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tagObjStr + ".Key", tagObj.key);
    setBodyParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateServerGroupRequest::getDryRun() const {
  return dryRun_;
}

void CreateServerGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool CreateServerGroupRequest::getConnectionDrainEnabled() const {
  return connectionDrainEnabled_;
}

void CreateServerGroupRequest::setConnectionDrainEnabled(bool connectionDrainEnabled) {
  connectionDrainEnabled_ = connectionDrainEnabled;
  setBodyParameter(std::string("ConnectionDrainEnabled"), connectionDrainEnabled ? "true" : "false");
}

int CreateServerGroupRequest::getConnectionDrainTimeout() const {
  return connectionDrainTimeout_;
}

void CreateServerGroupRequest::setConnectionDrainTimeout(int connectionDrainTimeout) {
  connectionDrainTimeout_ = connectionDrainTimeout;
  setBodyParameter(std::string("ConnectionDrainTimeout"), std::to_string(connectionDrainTimeout));
}

bool CreateServerGroupRequest::getAnyPortEnabled() const {
  return anyPortEnabled_;
}

void CreateServerGroupRequest::setAnyPortEnabled(bool anyPortEnabled) {
  anyPortEnabled_ = anyPortEnabled;
  setBodyParameter(std::string("AnyPortEnabled"), anyPortEnabled ? "true" : "false");
}

std::string CreateServerGroupRequest::getServerGroupType() const {
  return serverGroupType_;
}

void CreateServerGroupRequest::setServerGroupType(const std::string &serverGroupType) {
  serverGroupType_ = serverGroupType;
  setBodyParameter(std::string("ServerGroupType"), serverGroupType);
}

std::string CreateServerGroupRequest::getVpcId() const {
  return vpcId_;
}

void CreateServerGroupRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

