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

#include <alibabacloud/smartag/model/CreateFlowLogRequest.h>

using AlibabaCloud::Smartag::Model::CreateFlowLogRequest;

CreateFlowLogRequest::CreateFlowLogRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateFlowLog") {
  setMethod(HttpRequest::Method::Post);
}

CreateFlowLogRequest::~CreateFlowLogRequest() {}

long CreateFlowLogRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateFlowLogRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateFlowLogRequest::getNetflowVersion() const {
  return netflowVersion_;
}

void CreateFlowLogRequest::setNetflowVersion(const std::string &netflowVersion) {
  netflowVersion_ = netflowVersion;
  setParameter(std::string("NetflowVersion"), netflowVersion);
}

std::string CreateFlowLogRequest::getDescription() const {
  return description_;
}

void CreateFlowLogRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateFlowLogRequest::getInactiveAging() const {
  return inactiveAging_;
}

void CreateFlowLogRequest::setInactiveAging(int inactiveAging) {
  inactiveAging_ = inactiveAging;
  setParameter(std::string("InactiveAging"), std::to_string(inactiveAging));
}

std::string CreateFlowLogRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateFlowLogRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateFlowLogRequest::getRegionId() const {
  return regionId_;
}

void CreateFlowLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateFlowLogRequest::getSlsRegionId() const {
  return slsRegionId_;
}

void CreateFlowLogRequest::setSlsRegionId(const std::string &slsRegionId) {
  slsRegionId_ = slsRegionId;
  setParameter(std::string("SlsRegionId"), slsRegionId);
}

int CreateFlowLogRequest::getActiveAging() const {
  return activeAging_;
}

void CreateFlowLogRequest::setActiveAging(int activeAging) {
  activeAging_ = activeAging;
  setParameter(std::string("ActiveAging"), std::to_string(activeAging));
}

std::string CreateFlowLogRequest::getOutputType() const {
  return outputType_;
}

void CreateFlowLogRequest::setOutputType(const std::string &outputType) {
  outputType_ = outputType;
  setParameter(std::string("OutputType"), outputType);
}

std::string CreateFlowLogRequest::getProjectName() const {
  return projectName_;
}

void CreateFlowLogRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateFlowLogRequest::getLogstoreName() const {
  return logstoreName_;
}

void CreateFlowLogRequest::setLogstoreName(const std::string &logstoreName) {
  logstoreName_ = logstoreName;
  setParameter(std::string("LogstoreName"), logstoreName);
}

std::string CreateFlowLogRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateFlowLogRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateFlowLogRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateFlowLogRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateFlowLogRequest::getNetflowServerPort() const {
  return netflowServerPort_;
}

void CreateFlowLogRequest::setNetflowServerPort(int netflowServerPort) {
  netflowServerPort_ = netflowServerPort;
  setParameter(std::string("NetflowServerPort"), std::to_string(netflowServerPort));
}

long CreateFlowLogRequest::getOwnerId() const {
  return ownerId_;
}

void CreateFlowLogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateFlowLogRequest::getNetflowServerIp() const {
  return netflowServerIp_;
}

void CreateFlowLogRequest::setNetflowServerIp(const std::string &netflowServerIp) {
  netflowServerIp_ = netflowServerIp;
  setParameter(std::string("NetflowServerIp"), netflowServerIp);
}

std::string CreateFlowLogRequest::getName() const {
  return name_;
}

void CreateFlowLogRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

