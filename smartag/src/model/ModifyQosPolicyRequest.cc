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

#include <alibabacloud/smartag/model/ModifyQosPolicyRequest.h>

using AlibabaCloud::Smartag::Model::ModifyQosPolicyRequest;

ModifyQosPolicyRequest::ModifyQosPolicyRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifyQosPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyQosPolicyRequest::~ModifyQosPolicyRequest() {}

std::vector<std::string> ModifyQosPolicyRequest::getDpiGroupIds() const {
  return dpiGroupIds_;
}

void ModifyQosPolicyRequest::setDpiGroupIds(const std::vector<std::string> &dpiGroupIds) {
  dpiGroupIds_ = dpiGroupIds;
}

long ModifyQosPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyQosPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyQosPolicyRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void ModifyQosPolicyRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string ModifyQosPolicyRequest::getQosPolicyId() const {
  return qosPolicyId_;
}

void ModifyQosPolicyRequest::setQosPolicyId(const std::string &qosPolicyId) {
  qosPolicyId_ = qosPolicyId;
  setParameter(std::string("QosPolicyId"), qosPolicyId);
}

std::string ModifyQosPolicyRequest::getSourceCidr() const {
  return sourceCidr_;
}

void ModifyQosPolicyRequest::setSourceCidr(const std::string &sourceCidr) {
  sourceCidr_ = sourceCidr;
  setParameter(std::string("SourceCidr"), sourceCidr);
}

std::string ModifyQosPolicyRequest::getDescription() const {
  return description_;
}

void ModifyQosPolicyRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyQosPolicyRequest::getStartTime() const {
  return startTime_;
}

void ModifyQosPolicyRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ModifyQosPolicyRequest::getDestCidr() const {
  return destCidr_;
}

void ModifyQosPolicyRequest::setDestCidr(const std::string &destCidr) {
  destCidr_ = destCidr;
  setParameter(std::string("DestCidr"), destCidr);
}

std::vector<std::string> ModifyQosPolicyRequest::getDpiSignatureIds() const {
  return dpiSignatureIds_;
}

void ModifyQosPolicyRequest::setDpiSignatureIds(const std::vector<std::string> &dpiSignatureIds) {
  dpiSignatureIds_ = dpiSignatureIds;
}

std::string ModifyQosPolicyRequest::getRegionId() const {
  return regionId_;
}

void ModifyQosPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyQosPolicyRequest::getQosId() const {
  return qosId_;
}

void ModifyQosPolicyRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string ModifyQosPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyQosPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyQosPolicyRequest::getIpProtocol() const {
  return ipProtocol_;
}

void ModifyQosPolicyRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string ModifyQosPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyQosPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyQosPolicyRequest::getEndTime() const {
  return endTime_;
}

void ModifyQosPolicyRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long ModifyQosPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyQosPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyQosPolicyRequest::getPriority() const {
  return priority_;
}

void ModifyQosPolicyRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string ModifyQosPolicyRequest::getDestPortRange() const {
  return destPortRange_;
}

void ModifyQosPolicyRequest::setDestPortRange(const std::string &destPortRange) {
  destPortRange_ = destPortRange;
  setParameter(std::string("DestPortRange"), destPortRange);
}

std::string ModifyQosPolicyRequest::getName() const {
  return name_;
}

void ModifyQosPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

