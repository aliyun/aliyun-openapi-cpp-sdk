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

#include <alibabacloud/dypnsapi-intl/model/StartVerificationRequest.h>

using AlibabaCloud::Dypnsapi_intl::Model::StartVerificationRequest;

StartVerificationRequest::StartVerificationRequest()
    : RpcServiceRequest("dypnsapi-intl", "2017-07-25", "StartVerification") {
  setMethod(HttpRequest::Method::Post);
}

StartVerificationRequest::~StartVerificationRequest() {}

long StartVerificationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StartVerificationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StartVerificationRequest::getChannel() const {
  return channel_;
}

void StartVerificationRequest::setChannel(const std::string &channel) {
  channel_ = channel;
  setParameter(std::string("Channel"), channel);
}

std::string StartVerificationRequest::getServiceSid() const {
  return serviceSid_;
}

void StartVerificationRequest::setServiceSid(const std::string &serviceSid) {
  serviceSid_ = serviceSid;
  setParameter(std::string("ServiceSid"), serviceSid);
}

std::string StartVerificationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void StartVerificationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string StartVerificationRequest::getRouteName() const {
  return routeName_;
}

void StartVerificationRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string StartVerificationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StartVerificationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long StartVerificationRequest::getOwnerId() const {
  return ownerId_;
}

void StartVerificationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string StartVerificationRequest::getTo() const {
  return to_;
}

void StartVerificationRequest::setTo(const std::string &to) {
  to_ = to;
  setParameter(std::string("To"), to);
}

