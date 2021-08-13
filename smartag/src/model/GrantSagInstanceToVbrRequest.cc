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

#include <alibabacloud/smartag/model/GrantSagInstanceToVbrRequest.h>

using AlibabaCloud::Smartag::Model::GrantSagInstanceToVbrRequest;

GrantSagInstanceToVbrRequest::GrantSagInstanceToVbrRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "GrantSagInstanceToVbr") {
  setMethod(HttpRequest::Method::Post);
}

GrantSagInstanceToVbrRequest::~GrantSagInstanceToVbrRequest() {}

long GrantSagInstanceToVbrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GrantSagInstanceToVbrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GrantSagInstanceToVbrRequest::getVbrRegionId() const {
  return vbrRegionId_;
}

void GrantSagInstanceToVbrRequest::setVbrRegionId(const std::string &vbrRegionId) {
  vbrRegionId_ = vbrRegionId;
  setParameter(std::string("VbrRegionId"), vbrRegionId);
}

std::string GrantSagInstanceToVbrRequest::getRegionId() const {
  return regionId_;
}

void GrantSagInstanceToVbrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GrantSagInstanceToVbrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GrantSagInstanceToVbrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GrantSagInstanceToVbrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GrantSagInstanceToVbrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GrantSagInstanceToVbrRequest::getOwnerId() const {
  return ownerId_;
}

void GrantSagInstanceToVbrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GrantSagInstanceToVbrRequest::getVbrInstanceId() const {
  return vbrInstanceId_;
}

void GrantSagInstanceToVbrRequest::setVbrInstanceId(const std::string &vbrInstanceId) {
  vbrInstanceId_ = vbrInstanceId;
  setParameter(std::string("VbrInstanceId"), vbrInstanceId);
}

std::string GrantSagInstanceToVbrRequest::getSmartAGId() const {
  return smartAGId_;
}

void GrantSagInstanceToVbrRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

long GrantSagInstanceToVbrRequest::getVbrUid() const {
  return vbrUid_;
}

void GrantSagInstanceToVbrRequest::setVbrUid(long vbrUid) {
  vbrUid_ = vbrUid;
  setParameter(std::string("VbrUid"), std::to_string(vbrUid));
}

