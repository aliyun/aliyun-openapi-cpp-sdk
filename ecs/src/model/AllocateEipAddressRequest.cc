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

#include <alibabacloud/ecs/model/AllocateEipAddressRequest.h>

using AlibabaCloud::Ecs::Model::AllocateEipAddressRequest;

AllocateEipAddressRequest::AllocateEipAddressRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AllocateEipAddress") {
  setMethod(HttpRequest::Method::Post);
}

AllocateEipAddressRequest::~AllocateEipAddressRequest() {}

long AllocateEipAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateEipAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateEipAddressRequest::getClientToken() const {
  return clientToken_;
}

void AllocateEipAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AllocateEipAddressRequest::getISP() const {
  return iSP_;
}

void AllocateEipAddressRequest::setISP(const std::string &iSP) {
  iSP_ = iSP;
  setParameter(std::string("ISP"), iSP);
}

std::string AllocateEipAddressRequest::getRegionId() const {
  return regionId_;
}

void AllocateEipAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AllocateEipAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateEipAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateEipAddressRequest::getBandwidth() const {
  return bandwidth_;
}

void AllocateEipAddressRequest::setBandwidth(const std::string &bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), bandwidth);
}

std::string AllocateEipAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateEipAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AllocateEipAddressRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateEipAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long AllocateEipAddressRequest::getActivityId() const {
  return activityId_;
}

void AllocateEipAddressRequest::setActivityId(long activityId) {
  activityId_ = activityId;
  setParameter(std::string("ActivityId"), std::to_string(activityId));
}

std::string AllocateEipAddressRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void AllocateEipAddressRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

