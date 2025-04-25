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

#include <alibabacloud/ess/model/VerifyAuthenticationRequest.h>

using AlibabaCloud::Ess::Model::VerifyAuthenticationRequest;

VerifyAuthenticationRequest::VerifyAuthenticationRequest()
    : RpcServiceRequest("ess", "2014-08-28", "VerifyAuthentication") {
  setMethod(HttpRequest::Method::Post);
}

VerifyAuthenticationRequest::~VerifyAuthenticationRequest() {}

long VerifyAuthenticationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void VerifyAuthenticationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string VerifyAuthenticationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void VerifyAuthenticationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long VerifyAuthenticationRequest::getUid() const {
  return uid_;
}

void VerifyAuthenticationRequest::setUid(long uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), std::to_string(uid));
}

std::string VerifyAuthenticationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void VerifyAuthenticationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long VerifyAuthenticationRequest::getOwnerId() const {
  return ownerId_;
}

void VerifyAuthenticationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool VerifyAuthenticationRequest::getOnlyCheck() const {
  return onlyCheck_;
}

void VerifyAuthenticationRequest::setOnlyCheck(bool onlyCheck) {
  onlyCheck_ = onlyCheck;
  setParameter(std::string("OnlyCheck"), onlyCheck ? "true" : "false");
}

