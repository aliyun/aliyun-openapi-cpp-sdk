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

#include <alibabacloud/smartag/model/CreateQosPolicyRequest.h>

using AlibabaCloud::Smartag::Model::CreateQosPolicyRequest;

CreateQosPolicyRequest::CreateQosPolicyRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateQosPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateQosPolicyRequest::~CreateQosPolicyRequest() {}

std::vector<std::string> CreateQosPolicyRequest::getDpiGroupIds() const {
  return dpiGroupIds_;
}

void CreateQosPolicyRequest::setDpiGroupIds(const std::vector<std::string> &dpiGroupIds) {
  dpiGroupIds_ = dpiGroupIds;
}

long CreateQosPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateQosPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateQosPolicyRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void CreateQosPolicyRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string CreateQosPolicyRequest::getSourceCidr() const {
  return sourceCidr_;
}

void CreateQosPolicyRequest::setSourceCidr(const std::string &sourceCidr) {
  sourceCidr_ = sourceCidr;
  setParameter(std::string("SourceCidr"), sourceCidr);
}

std::string CreateQosPolicyRequest::getDescription() const {
  return description_;
}

void CreateQosPolicyRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateQosPolicyRequest::getStartTime() const {
  return startTime_;
}

void CreateQosPolicyRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateQosPolicyRequest::getDestCidr() const {
  return destCidr_;
}

void CreateQosPolicyRequest::setDestCidr(const std::string &destCidr) {
  destCidr_ = destCidr;
  setParameter(std::string("DestCidr"), destCidr);
}

std::vector<std::string> CreateQosPolicyRequest::getDpiSignatureIds() const {
  return dpiSignatureIds_;
}

void CreateQosPolicyRequest::setDpiSignatureIds(const std::vector<std::string> &dpiSignatureIds) {
  dpiSignatureIds_ = dpiSignatureIds;
}

std::string CreateQosPolicyRequest::getRegionId() const {
  return regionId_;
}

void CreateQosPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateQosPolicyRequest::getQosId() const {
  return qosId_;
}

void CreateQosPolicyRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string CreateQosPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateQosPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateQosPolicyRequest::getIpProtocol() const {
  return ipProtocol_;
}

void CreateQosPolicyRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string CreateQosPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateQosPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateQosPolicyRequest::getEndTime() const {
  return endTime_;
}

void CreateQosPolicyRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long CreateQosPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void CreateQosPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int CreateQosPolicyRequest::getPriority() const {
  return priority_;
}

void CreateQosPolicyRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateQosPolicyRequest::getDestPortRange() const {
  return destPortRange_;
}

void CreateQosPolicyRequest::setDestPortRange(const std::string &destPortRange) {
  destPortRange_ = destPortRange;
  setParameter(std::string("DestPortRange"), destPortRange);
}

std::string CreateQosPolicyRequest::getName() const {
  return name_;
}

void CreateQosPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

