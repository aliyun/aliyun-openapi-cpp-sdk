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

#include <alibabacloud/dypnsapi/model/VerifyPhoneWithTokenRequest.h>

using AlibabaCloud::Dypnsapi::Model::VerifyPhoneWithTokenRequest;

VerifyPhoneWithTokenRequest::VerifyPhoneWithTokenRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "VerifyPhoneWithToken") {
  setMethod(HttpRequest::Method::Post);
}

VerifyPhoneWithTokenRequest::~VerifyPhoneWithTokenRequest() {}

long VerifyPhoneWithTokenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void VerifyPhoneWithTokenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string VerifyPhoneWithTokenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void VerifyPhoneWithTokenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string VerifyPhoneWithTokenRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void VerifyPhoneWithTokenRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

long VerifyPhoneWithTokenRequest::getOwnerId() const {
  return ownerId_;
}

void VerifyPhoneWithTokenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string VerifyPhoneWithTokenRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void VerifyPhoneWithTokenRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string VerifyPhoneWithTokenRequest::getSpToken() const {
  return spToken_;
}

void VerifyPhoneWithTokenRequest::setSpToken(const std::string &spToken) {
  spToken_ = spToken;
  setParameter(std::string("SpToken"), spToken);
}

