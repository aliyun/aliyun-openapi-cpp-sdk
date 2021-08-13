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

#include <alibabacloud/smartag/model/ModifyHealthCheckRequest.h>

using AlibabaCloud::Smartag::Model::ModifyHealthCheckRequest;

ModifyHealthCheckRequest::ModifyHealthCheckRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifyHealthCheck") {
  setMethod(HttpRequest::Method::Post);
}

ModifyHealthCheckRequest::~ModifyHealthCheckRequest() {}

int ModifyHealthCheckRequest::getProbeInterval() const {
  return probeInterval_;
}

void ModifyHealthCheckRequest::setProbeInterval(int probeInterval) {
  probeInterval_ = probeInterval;
  setParameter(std::string("ProbeInterval"), std::to_string(probeInterval));
}

long ModifyHealthCheckRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyHealthCheckRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyHealthCheckRequest::getDstPort() const {
  return dstPort_;
}

void ModifyHealthCheckRequest::setDstPort(int dstPort) {
  dstPort_ = dstPort;
  setParameter(std::string("DstPort"), std::to_string(dstPort));
}

std::string ModifyHealthCheckRequest::getDescription() const {
  return description_;
}

void ModifyHealthCheckRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyHealthCheckRequest::getHcInstanceId() const {
  return hcInstanceId_;
}

void ModifyHealthCheckRequest::setHcInstanceId(const std::string &hcInstanceId) {
  hcInstanceId_ = hcInstanceId;
  setParameter(std::string("HcInstanceId"), hcInstanceId);
}

std::string ModifyHealthCheckRequest::getType() const {
  return type_;
}

void ModifyHealthCheckRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ModifyHealthCheckRequest::getFailCountThreshold() const {
  return failCountThreshold_;
}

void ModifyHealthCheckRequest::setFailCountThreshold(int failCountThreshold) {
  failCountThreshold_ = failCountThreshold;
  setParameter(std::string("FailCountThreshold"), std::to_string(failCountThreshold));
}

int ModifyHealthCheckRequest::getProbeTimeout() const {
  return probeTimeout_;
}

void ModifyHealthCheckRequest::setProbeTimeout(int probeTimeout) {
  probeTimeout_ = probeTimeout;
  setParameter(std::string("ProbeTimeout"), std::to_string(probeTimeout));
}

int ModifyHealthCheckRequest::getRttFailThreshold() const {
  return rttFailThreshold_;
}

void ModifyHealthCheckRequest::setRttFailThreshold(int rttFailThreshold) {
  rttFailThreshold_ = rttFailThreshold;
  setParameter(std::string("RttFailThreshold"), std::to_string(rttFailThreshold));
}

std::string ModifyHealthCheckRequest::getRegionId() const {
  return regionId_;
}

void ModifyHealthCheckRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ModifyHealthCheckRequest::getRttThreshold() const {
  return rttThreshold_;
}

void ModifyHealthCheckRequest::setRttThreshold(int rttThreshold) {
  rttThreshold_ = rttThreshold;
  setParameter(std::string("RttThreshold"), std::to_string(rttThreshold));
}

std::string ModifyHealthCheckRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyHealthCheckRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyHealthCheckRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyHealthCheckRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyHealthCheckRequest::getDstIpAddr() const {
  return dstIpAddr_;
}

void ModifyHealthCheckRequest::setDstIpAddr(const std::string &dstIpAddr) {
  dstIpAddr_ = dstIpAddr;
  setParameter(std::string("DstIpAddr"), dstIpAddr);
}

long ModifyHealthCheckRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyHealthCheckRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyHealthCheckRequest::getSrcIpAddr() const {
  return srcIpAddr_;
}

void ModifyHealthCheckRequest::setSrcIpAddr(const std::string &srcIpAddr) {
  srcIpAddr_ = srcIpAddr;
  setParameter(std::string("SrcIpAddr"), srcIpAddr);
}

std::string ModifyHealthCheckRequest::getName() const {
  return name_;
}

void ModifyHealthCheckRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifyHealthCheckRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifyHealthCheckRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

int ModifyHealthCheckRequest::getSrcPort() const {
  return srcPort_;
}

void ModifyHealthCheckRequest::setSrcPort(int srcPort) {
  srcPort_ = srcPort;
  setParameter(std::string("SrcPort"), std::to_string(srcPort));
}

int ModifyHealthCheckRequest::getProbeCount() const {
  return probeCount_;
}

void ModifyHealthCheckRequest::setProbeCount(int probeCount) {
  probeCount_ = probeCount;
  setParameter(std::string("ProbeCount"), std::to_string(probeCount));
}

