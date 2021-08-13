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

#include <alibabacloud/smartag/model/GrantInstanceToCbnRequest.h>

using AlibabaCloud::Smartag::Model::GrantInstanceToCbnRequest;

GrantInstanceToCbnRequest::GrantInstanceToCbnRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "GrantInstanceToCbn") {
  setMethod(HttpRequest::Method::Post);
}

GrantInstanceToCbnRequest::~GrantInstanceToCbnRequest() {}

long GrantInstanceToCbnRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GrantInstanceToCbnRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GrantInstanceToCbnRequest::getRegionId() const {
  return regionId_;
}

void GrantInstanceToCbnRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GrantInstanceToCbnRequest::getCcnInstanceId() const {
  return ccnInstanceId_;
}

void GrantInstanceToCbnRequest::setCcnInstanceId(const std::string &ccnInstanceId) {
  ccnInstanceId_ = ccnInstanceId;
  setParameter(std::string("CcnInstanceId"), ccnInstanceId);
}

bool GrantInstanceToCbnRequest::getGrantTrafficService() const {
  return grantTrafficService_;
}

void GrantInstanceToCbnRequest::setGrantTrafficService(bool grantTrafficService) {
  grantTrafficService_ = grantTrafficService;
  setParameter(std::string("GrantTrafficService"), grantTrafficService ? "true" : "false");
}

std::string GrantInstanceToCbnRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GrantInstanceToCbnRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GrantInstanceToCbnRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GrantInstanceToCbnRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GrantInstanceToCbnRequest::getOwnerId() const {
  return ownerId_;
}

void GrantInstanceToCbnRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long GrantInstanceToCbnRequest::getCenUid() const {
  return cenUid_;
}

void GrantInstanceToCbnRequest::setCenUid(long cenUid) {
  cenUid_ = cenUid;
  setParameter(std::string("CenUid"), std::to_string(cenUid));
}

std::string GrantInstanceToCbnRequest::getCenInstanceId() const {
  return cenInstanceId_;
}

void GrantInstanceToCbnRequest::setCenInstanceId(const std::string &cenInstanceId) {
  cenInstanceId_ = cenInstanceId;
  setParameter(std::string("CenInstanceId"), cenInstanceId);
}

