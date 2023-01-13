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

#include <alibabacloud/cbn/model/ModifyFlowLogAttributeRequest.h>

using AlibabaCloud::Cbn::Model::ModifyFlowLogAttributeRequest;

ModifyFlowLogAttributeRequest::ModifyFlowLogAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ModifyFlowLogAttribute") {
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

std::string ModifyFlowLogAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyFlowLogAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyFlowLogAttributeRequest::getCenId() const {
  return cenId_;
}

void ModifyFlowLogAttributeRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ModifyFlowLogAttributeRequest::getDescription() const {
  return description_;
}

void ModifyFlowLogAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyFlowLogAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyFlowLogAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
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

long ModifyFlowLogAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyFlowLogAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyFlowLogAttributeRequest::getVersion() const {
  return version_;
}

void ModifyFlowLogAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

long ModifyFlowLogAttributeRequest::getInterval() const {
  return interval_;
}

void ModifyFlowLogAttributeRequest::setInterval(long interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

std::string ModifyFlowLogAttributeRequest::getFlowLogId() const {
  return flowLogId_;
}

void ModifyFlowLogAttributeRequest::setFlowLogId(const std::string &flowLogId) {
  flowLogId_ = flowLogId;
  setParameter(std::string("FlowLogId"), flowLogId);
}

std::string ModifyFlowLogAttributeRequest::getFlowLogName() const {
  return flowLogName_;
}

void ModifyFlowLogAttributeRequest::setFlowLogName(const std::string &flowLogName) {
  flowLogName_ = flowLogName;
  setParameter(std::string("FlowLogName"), flowLogName);
}

