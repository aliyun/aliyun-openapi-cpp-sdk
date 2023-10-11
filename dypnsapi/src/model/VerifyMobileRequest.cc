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

#include <alibabacloud/dypnsapi/model/VerifyMobileRequest.h>

using AlibabaCloud::Dypnsapi::Model::VerifyMobileRequest;

VerifyMobileRequest::VerifyMobileRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "VerifyMobile") {
  setMethod(HttpRequest::Method::Post);
}

VerifyMobileRequest::~VerifyMobileRequest() {}

long VerifyMobileRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void VerifyMobileRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string VerifyMobileRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void VerifyMobileRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string VerifyMobileRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void VerifyMobileRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string VerifyMobileRequest::getAccessCode() const {
  return accessCode_;
}

void VerifyMobileRequest::setAccessCode(const std::string &accessCode) {
  accessCode_ = accessCode;
  setParameter(std::string("AccessCode"), accessCode);
}

std::string VerifyMobileRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void VerifyMobileRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long VerifyMobileRequest::getOwnerId() const {
  return ownerId_;
}

void VerifyMobileRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string VerifyMobileRequest::getOutId() const {
  return outId_;
}

void VerifyMobileRequest::setOutId(const std::string &outId) {
  outId_ = outId;
  setParameter(std::string("OutId"), outId);
}

