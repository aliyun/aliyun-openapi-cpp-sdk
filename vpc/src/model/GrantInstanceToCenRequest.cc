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

#include <alibabacloud/vpc/model/GrantInstanceToCenRequest.h>

using AlibabaCloud::Vpc::Model::GrantInstanceToCenRequest;

GrantInstanceToCenRequest::GrantInstanceToCenRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GrantInstanceToCen") {
  setMethod(HttpRequest::Method::Post);
}

GrantInstanceToCenRequest::~GrantInstanceToCenRequest() {}

long GrantInstanceToCenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GrantInstanceToCenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GrantInstanceToCenRequest::getCenId() const {
  return cenId_;
}

void GrantInstanceToCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string GrantInstanceToCenRequest::getClientToken() const {
  return clientToken_;
}

void GrantInstanceToCenRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

long GrantInstanceToCenRequest::getCenOwnerId() const {
  return cenOwnerId_;
}

void GrantInstanceToCenRequest::setCenOwnerId(long cenOwnerId) {
  cenOwnerId_ = cenOwnerId;
  setParameter(std::string("CenOwnerId"), std::to_string(cenOwnerId));
}

std::string GrantInstanceToCenRequest::getRegionId() const {
  return regionId_;
}

void GrantInstanceToCenRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GrantInstanceToCenRequest::getInstanceType() const {
  return instanceType_;
}

void GrantInstanceToCenRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string GrantInstanceToCenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GrantInstanceToCenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GrantInstanceToCenRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GrantInstanceToCenRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GrantInstanceToCenRequest::getOwnerId() const {
  return ownerId_;
}

void GrantInstanceToCenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GrantInstanceToCenRequest::getInstanceId() const {
  return instanceId_;
}

void GrantInstanceToCenRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

