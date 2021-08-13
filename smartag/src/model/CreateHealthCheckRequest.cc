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

#include <alibabacloud/smartag/model/CreateHealthCheckRequest.h>

using AlibabaCloud::Smartag::Model::CreateHealthCheckRequest;

CreateHealthCheckRequest::CreateHealthCheckRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateHealthCheck") {
  setMethod(HttpRequest::Method::Post);
}

CreateHealthCheckRequest::~CreateHealthCheckRequest() {}

int CreateHealthCheckRequest::getProbeInterval() const {
  return probeInterval_;
}

void CreateHealthCheckRequest::setProbeInterval(int probeInterval) {
  probeInterval_ = probeInterval;
  setParameter(std::string("ProbeInterval"), std::to_string(probeInterval));
}

long CreateHealthCheckRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateHealthCheckRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CreateHealthCheckRequest::getDstPort() const {
  return dstPort_;
}

void CreateHealthCheckRequest::setDstPort(int dstPort) {
  dstPort_ = dstPort;
  setParameter(std::string("DstPort"), std::to_string(dstPort));
}

std::string CreateHealthCheckRequest::getDescription() const {
  return description_;
}

void CreateHealthCheckRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateHealthCheckRequest::getType() const {
  return type_;
}

void CreateHealthCheckRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int CreateHealthCheckRequest::getFailCountThreshold() const {
  return failCountThreshold_;
}

void CreateHealthCheckRequest::setFailCountThreshold(int failCountThreshold) {
  failCountThreshold_ = failCountThreshold;
  setParameter(std::string("FailCountThreshold"), std::to_string(failCountThreshold));
}

int CreateHealthCheckRequest::getProbeTimeout() const {
  return probeTimeout_;
}

void CreateHealthCheckRequest::setProbeTimeout(int probeTimeout) {
  probeTimeout_ = probeTimeout;
  setParameter(std::string("ProbeTimeout"), std::to_string(probeTimeout));
}

int CreateHealthCheckRequest::getRttFailThreshold() const {
  return rttFailThreshold_;
}

void CreateHealthCheckRequest::setRttFailThreshold(int rttFailThreshold) {
  rttFailThreshold_ = rttFailThreshold;
  setParameter(std::string("RttFailThreshold"), std::to_string(rttFailThreshold));
}

std::string CreateHealthCheckRequest::getRegionId() const {
  return regionId_;
}

void CreateHealthCheckRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateHealthCheckRequest::getRttThreshold() const {
  return rttThreshold_;
}

void CreateHealthCheckRequest::setRttThreshold(int rttThreshold) {
  rttThreshold_ = rttThreshold;
  setParameter(std::string("RttThreshold"), std::to_string(rttThreshold));
}

std::string CreateHealthCheckRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateHealthCheckRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateHealthCheckRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateHealthCheckRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateHealthCheckRequest::getDstIpAddr() const {
  return dstIpAddr_;
}

void CreateHealthCheckRequest::setDstIpAddr(const std::string &dstIpAddr) {
  dstIpAddr_ = dstIpAddr;
  setParameter(std::string("DstIpAddr"), dstIpAddr);
}

long CreateHealthCheckRequest::getOwnerId() const {
  return ownerId_;
}

void CreateHealthCheckRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateHealthCheckRequest::getSrcIpAddr() const {
  return srcIpAddr_;
}

void CreateHealthCheckRequest::setSrcIpAddr(const std::string &srcIpAddr) {
  srcIpAddr_ = srcIpAddr;
  setParameter(std::string("SrcIpAddr"), srcIpAddr);
}

std::string CreateHealthCheckRequest::getName() const {
  return name_;
}

void CreateHealthCheckRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateHealthCheckRequest::getSmartAGId() const {
  return smartAGId_;
}

void CreateHealthCheckRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

int CreateHealthCheckRequest::getSrcPort() const {
  return srcPort_;
}

void CreateHealthCheckRequest::setSrcPort(int srcPort) {
  srcPort_ = srcPort;
  setParameter(std::string("SrcPort"), std::to_string(srcPort));
}

int CreateHealthCheckRequest::getProbeCount() const {
  return probeCount_;
}

void CreateHealthCheckRequest::setProbeCount(int probeCount) {
  probeCount_ = probeCount;
  setParameter(std::string("ProbeCount"), std::to_string(probeCount));
}

