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

#include <alibabacloud/vpc/model/AssociateEipAddressBatchRequest.h>

using AlibabaCloud::Vpc::Model::AssociateEipAddressBatchRequest;

AssociateEipAddressBatchRequest::AssociateEipAddressBatchRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AssociateEipAddressBatch") {
  setMethod(HttpRequest::Method::Post);
}

AssociateEipAddressBatchRequest::~AssociateEipAddressBatchRequest() {}

long AssociateEipAddressBatchRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateEipAddressBatchRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateEipAddressBatchRequest::getClientToken() const {
  return clientToken_;
}

void AssociateEipAddressBatchRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateEipAddressBatchRequest::getBindedInstanceType() const {
  return bindedInstanceType_;
}

void AssociateEipAddressBatchRequest::setBindedInstanceType(const std::string &bindedInstanceType) {
  bindedInstanceType_ = bindedInstanceType;
  setParameter(std::string("BindedInstanceType"), bindedInstanceType);
}

std::string AssociateEipAddressBatchRequest::getBindedInstanceId() const {
  return bindedInstanceId_;
}

void AssociateEipAddressBatchRequest::setBindedInstanceId(const std::string &bindedInstanceId) {
  bindedInstanceId_ = bindedInstanceId;
  setParameter(std::string("BindedInstanceId"), bindedInstanceId);
}

std::string AssociateEipAddressBatchRequest::getMode() const {
  return mode_;
}

void AssociateEipAddressBatchRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string AssociateEipAddressBatchRequest::getRegionId() const {
  return regionId_;
}

void AssociateEipAddressBatchRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssociateEipAddressBatchRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateEipAddressBatchRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long AssociateEipAddressBatchRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateEipAddressBatchRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> AssociateEipAddressBatchRequest::getInstanceIds() const {
  return instanceIds_;
}

void AssociateEipAddressBatchRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

