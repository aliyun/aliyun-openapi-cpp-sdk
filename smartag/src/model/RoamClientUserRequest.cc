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

#include <alibabacloud/smartag/model/RoamClientUserRequest.h>

using AlibabaCloud::Smartag::Model::RoamClientUserRequest;

RoamClientUserRequest::RoamClientUserRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "RoamClientUser") {
  setMethod(HttpRequest::Method::Post);
}

RoamClientUserRequest::~RoamClientUserRequest() {}

long RoamClientUserRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RoamClientUserRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RoamClientUserRequest::getOriginSmartAGId() const {
  return originSmartAGId_;
}

void RoamClientUserRequest::setOriginSmartAGId(const std::string &originSmartAGId) {
  originSmartAGId_ = originSmartAGId;
  setParameter(std::string("OriginSmartAGId"), originSmartAGId);
}

std::string RoamClientUserRequest::getRegionId() const {
  return regionId_;
}

void RoamClientUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RoamClientUserRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RoamClientUserRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RoamClientUserRequest::getTargetSmartAGId() const {
  return targetSmartAGId_;
}

void RoamClientUserRequest::setTargetSmartAGId(const std::string &targetSmartAGId) {
  targetSmartAGId_ = targetSmartAGId;
  setParameter(std::string("TargetSmartAGId"), targetSmartAGId);
}

std::string RoamClientUserRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RoamClientUserRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RoamClientUserRequest::getOwnerId() const {
  return ownerId_;
}

void RoamClientUserRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RoamClientUserRequest::getOriginRegionId() const {
  return originRegionId_;
}

void RoamClientUserRequest::setOriginRegionId(const std::string &originRegionId) {
  originRegionId_ = originRegionId;
  setParameter(std::string("OriginRegionId"), originRegionId);
}

std::string RoamClientUserRequest::getUserName() const {
  return userName_;
}

void RoamClientUserRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

