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

#include <alibabacloud/ess/model/VerifyUserRequest.h>

using AlibabaCloud::Ess::Model::VerifyUserRequest;

VerifyUserRequest::VerifyUserRequest()
    : RpcServiceRequest("ess", "2014-08-28", "VerifyUser") {
  setMethod(HttpRequest::Method::Post);
}

VerifyUserRequest::~VerifyUserRequest() {}

long VerifyUserRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void VerifyUserRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string VerifyUserRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void VerifyUserRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long VerifyUserRequest::getOwnerId() const {
  return ownerId_;
}

void VerifyUserRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string VerifyUserRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void VerifyUserRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string VerifyUserRequest::getRegionId() const {
  return regionId_;
}

void VerifyUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

