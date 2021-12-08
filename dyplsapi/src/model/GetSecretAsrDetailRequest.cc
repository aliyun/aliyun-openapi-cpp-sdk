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

#include <alibabacloud/dyplsapi/model/GetSecretAsrDetailRequest.h>

using AlibabaCloud::Dyplsapi::Model::GetSecretAsrDetailRequest;

GetSecretAsrDetailRequest::GetSecretAsrDetailRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "GetSecretAsrDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetSecretAsrDetailRequest::~GetSecretAsrDetailRequest() {}

std::string GetSecretAsrDetailRequest::getCallId() const {
  return callId_;
}

void GetSecretAsrDetailRequest::setCallId(const std::string &callId) {
  callId_ = callId;
  setParameter(std::string("CallId"), callId);
}

long GetSecretAsrDetailRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetSecretAsrDetailRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetSecretAsrDetailRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetSecretAsrDetailRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetSecretAsrDetailRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetSecretAsrDetailRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long GetSecretAsrDetailRequest::getOwnerId() const {
  return ownerId_;
}

void GetSecretAsrDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetSecretAsrDetailRequest::getCallTime() const {
  return callTime_;
}

void GetSecretAsrDetailRequest::setCallTime(const std::string &callTime) {
  callTime_ = callTime;
  setParameter(std::string("CallTime"), callTime);
}

std::string GetSecretAsrDetailRequest::getPoolKey() const {
  return poolKey_;
}

void GetSecretAsrDetailRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

