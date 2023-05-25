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

#include <alibabacloud/polardb/model/CheckKMSAuthorizedRequest.h>

using AlibabaCloud::Polardb::Model::CheckKMSAuthorizedRequest;

CheckKMSAuthorizedRequest::CheckKMSAuthorizedRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CheckKMSAuthorized") {
  setMethod(HttpRequest::Method::Post);
}

CheckKMSAuthorizedRequest::~CheckKMSAuthorizedRequest() {}

long CheckKMSAuthorizedRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckKMSAuthorizedRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckKMSAuthorizedRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckKMSAuthorizedRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckKMSAuthorizedRequest::getRegionId() const {
  return regionId_;
}

void CheckKMSAuthorizedRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CheckKMSAuthorizedRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckKMSAuthorizedRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckKMSAuthorizedRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CheckKMSAuthorizedRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CheckKMSAuthorizedRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckKMSAuthorizedRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckKMSAuthorizedRequest::getOwnerId() const {
  return ownerId_;
}

void CheckKMSAuthorizedRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CheckKMSAuthorizedRequest::getTDERegion() const {
  return tDERegion_;
}

void CheckKMSAuthorizedRequest::setTDERegion(const std::string &tDERegion) {
  tDERegion_ = tDERegion;
  setParameter(std::string("TDERegion"), tDERegion);
}

