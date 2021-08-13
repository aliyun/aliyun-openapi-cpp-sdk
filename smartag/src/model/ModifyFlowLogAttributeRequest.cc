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

#include <alibabacloud/smartag/model/ModifyFlowLogAttributeRequest.h>

using AlibabaCloud::Smartag::Model::ModifyFlowLogAttributeRequest;

ModifyFlowLogAttributeRequest::ModifyFlowLogAttributeRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifyFlowLogAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFlowLogAttributeRequest::~ModifyFlowLogAttributeRequest() {}

long ModifyFlowLogAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyFlowLogAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyFlowLogAttributeRequest::getNetflowVersion() const {
  return netflowVersion_;
}

void ModifyFlowLogAttributeRequest::setNetflowVersion(const std::string &netflowVersion) {
  netflowVersion_ = netflowVersion;
  setParameter(std::string("NetflowVersion"), netflowVersion);
}

std::string ModifyFlowLogAttributeRequest::getDescription() const {
  return description_;
}

void ModifyFlowLogAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int ModifyFlowLogAttributeRequest::getInactiveAging() const {
  return inactiveAging_;
}

void ModifyFlowLogAttributeRequest::setInactiveAging(int inactiveAging) {
  inactiveAging_ = inactiveAging;
  setParameter(std::string("InactiveAging"), std::to_string(inactiveAging));
}

std::string ModifyFlowLogAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyFlowLogAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyFlowLogAttributeRequest::getSlsRegionId() const {
  return slsRegionId_;
}

void ModifyFlowLogAttributeRequest::setSlsRegionId(const std::string &slsRegionId) {
  slsRegionId_ = slsRegionId;
  setParameter(std::string("SlsRegionId"), slsRegionId);
}

int ModifyFlowLogAttributeRequest::getActiveAging() const {
  return activeAging_;
}

void ModifyFlowLogAttributeRequest::setActiveAging(int activeAging) {
  activeAging_ = activeAging;
  setParameter(std::string("ActiveAging"), std::to_string(activeAging));
}

std::string ModifyFlowLogAttributeRequest::getOutputType() const {
  return outputType_;
}

void ModifyFlowLogAttributeRequest::setOutputType(const std::string &outputType) {
  outputType_ = outputType;
  setParameter(std::string("OutputType"), outputType);
}

std::string ModifyFlowLogAttributeRequest::getProjectName() const {
  return projectName_;
}

void ModifyFlowLogAttributeRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string ModifyFlowLogAttributeRequest::getLogstoreName() const {
  return logstoreName_;
}

void ModifyFlowLogAttributeRequest::setLogstoreName(const std::string &logstoreName) {
  logstoreName_ = logstoreName;
  setParameter(std::string("LogstoreName"), logstoreName);
}

std::string ModifyFlowLogAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyFlowLogAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyFlowLogAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyFlowLogAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyFlowLogAttributeRequest::getNetflowServerPort() const {
  return netflowServerPort_;
}

void ModifyFlowLogAttributeRequest::setNetflowServerPort(int netflowServerPort) {
  netflowServerPort_ = netflowServerPort;
  setParameter(std::string("NetflowServerPort"), std::to_string(netflowServerPort));
}

long ModifyFlowLogAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyFlowLogAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyFlowLogAttributeRequest::getNetflowServerIp() const {
  return netflowServerIp_;
}

void ModifyFlowLogAttributeRequest::setNetflowServerIp(const std::string &netflowServerIp) {
  netflowServerIp_ = netflowServerIp;
  setParameter(std::string("NetflowServerIp"), netflowServerIp);
}

std::string ModifyFlowLogAttributeRequest::getName() const {
  return name_;
}

void ModifyFlowLogAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifyFlowLogAttributeRequest::getFlowLogId() const {
  return flowLogId_;
}

void ModifyFlowLogAttributeRequest::setFlowLogId(const std::string &flowLogId) {
  flowLogId_ = flowLogId;
  setParameter(std::string("FlowLogId"), flowLogId);
}

