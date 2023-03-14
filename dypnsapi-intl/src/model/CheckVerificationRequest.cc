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

#include <alibabacloud/dypnsapi-intl/model/CheckVerificationRequest.h>

using AlibabaCloud::Dypnsapi_intl::Model::CheckVerificationRequest;

CheckVerificationRequest::CheckVerificationRequest()
    : RpcServiceRequest("dypnsapi-intl", "2017-07-25", "CheckVerification") {
  setMethod(HttpRequest::Method::Post);
}

CheckVerificationRequest::~CheckVerificationRequest() {}

long CheckVerificationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckVerificationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckVerificationRequest::getCode() const {
  return code_;
}

void CheckVerificationRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

std::string CheckVerificationRequest::getServiceSid() const {
  return serviceSid_;
}

void CheckVerificationRequest::setServiceSid(const std::string &serviceSid) {
  serviceSid_ = serviceSid;
  setParameter(std::string("ServiceSid"), serviceSid);
}

std::string CheckVerificationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckVerificationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckVerificationRequest::getRouteName() const {
  return routeName_;
}

void CheckVerificationRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string CheckVerificationRequest::getVerificationId() const {
  return verificationId_;
}

void CheckVerificationRequest::setVerificationId(const std::string &verificationId) {
  verificationId_ = verificationId;
  setParameter(std::string("VerificationId"), verificationId);
}

std::string CheckVerificationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckVerificationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CheckVerificationRequest::getOwnerId() const {
  return ownerId_;
}

void CheckVerificationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CheckVerificationRequest::getTo() const {
  return to_;
}

void CheckVerificationRequest::setTo(const std::string &to) {
  to_ = to;
  setParameter(std::string("To"), to);
}

