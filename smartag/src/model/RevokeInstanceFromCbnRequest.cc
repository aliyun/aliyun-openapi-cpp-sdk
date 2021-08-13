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

#include <alibabacloud/smartag/model/RevokeInstanceFromCbnRequest.h>

using AlibabaCloud::Smartag::Model::RevokeInstanceFromCbnRequest;

RevokeInstanceFromCbnRequest::RevokeInstanceFromCbnRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "RevokeInstanceFromCbn") {
  setMethod(HttpRequest::Method::Post);
}

RevokeInstanceFromCbnRequest::~RevokeInstanceFromCbnRequest() {}

long RevokeInstanceFromCbnRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RevokeInstanceFromCbnRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RevokeInstanceFromCbnRequest::getRegionId() const {
  return regionId_;
}

void RevokeInstanceFromCbnRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RevokeInstanceFromCbnRequest::getCcnInstanceId() const {
  return ccnInstanceId_;
}

void RevokeInstanceFromCbnRequest::setCcnInstanceId(const std::string &ccnInstanceId) {
  ccnInstanceId_ = ccnInstanceId;
  setParameter(std::string("CcnInstanceId"), ccnInstanceId);
}

std::string RevokeInstanceFromCbnRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RevokeInstanceFromCbnRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RevokeInstanceFromCbnRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RevokeInstanceFromCbnRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RevokeInstanceFromCbnRequest::getOwnerId() const {
  return ownerId_;
}

void RevokeInstanceFromCbnRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RevokeInstanceFromCbnRequest::getCenInstanceId() const {
  return cenInstanceId_;
}

void RevokeInstanceFromCbnRequest::setCenInstanceId(const std::string &cenInstanceId) {
  cenInstanceId_ = cenInstanceId;
  setParameter(std::string("CenInstanceId"), cenInstanceId);
}

