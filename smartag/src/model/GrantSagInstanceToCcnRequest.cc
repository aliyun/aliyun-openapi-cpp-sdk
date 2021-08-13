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

#include <alibabacloud/smartag/model/GrantSagInstanceToCcnRequest.h>

using AlibabaCloud::Smartag::Model::GrantSagInstanceToCcnRequest;

GrantSagInstanceToCcnRequest::GrantSagInstanceToCcnRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "GrantSagInstanceToCcn") {
  setMethod(HttpRequest::Method::Post);
}

GrantSagInstanceToCcnRequest::~GrantSagInstanceToCcnRequest() {}

long GrantSagInstanceToCcnRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GrantSagInstanceToCcnRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long GrantSagInstanceToCcnRequest::getCcnUid() const {
  return ccnUid_;
}

void GrantSagInstanceToCcnRequest::setCcnUid(long ccnUid) {
  ccnUid_ = ccnUid;
  setParameter(std::string("CcnUid"), std::to_string(ccnUid));
}

std::string GrantSagInstanceToCcnRequest::getRegionId() const {
  return regionId_;
}

void GrantSagInstanceToCcnRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GrantSagInstanceToCcnRequest::getCcnInstanceId() const {
  return ccnInstanceId_;
}

void GrantSagInstanceToCcnRequest::setCcnInstanceId(const std::string &ccnInstanceId) {
  ccnInstanceId_ = ccnInstanceId;
  setParameter(std::string("CcnInstanceId"), ccnInstanceId);
}

bool GrantSagInstanceToCcnRequest::getGrantTrafficService() const {
  return grantTrafficService_;
}

void GrantSagInstanceToCcnRequest::setGrantTrafficService(bool grantTrafficService) {
  grantTrafficService_ = grantTrafficService;
  setParameter(std::string("GrantTrafficService"), grantTrafficService ? "true" : "false");
}

std::string GrantSagInstanceToCcnRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GrantSagInstanceToCcnRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GrantSagInstanceToCcnRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GrantSagInstanceToCcnRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GrantSagInstanceToCcnRequest::getOwnerId() const {
  return ownerId_;
}

void GrantSagInstanceToCcnRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GrantSagInstanceToCcnRequest::getSmartAGId() const {
  return smartAGId_;
}

void GrantSagInstanceToCcnRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

