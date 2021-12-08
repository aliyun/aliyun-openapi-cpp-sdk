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

#include <alibabacloud/dyplsapi/model/ConfirmSendSmsRequest.h>

using AlibabaCloud::Dyplsapi::Model::ConfirmSendSmsRequest;

ConfirmSendSmsRequest::ConfirmSendSmsRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "ConfirmSendSms") {
  setMethod(HttpRequest::Method::Post);
}

ConfirmSendSmsRequest::~ConfirmSendSmsRequest() {}

std::string ConfirmSendSmsRequest::getCallId() const {
  return callId_;
}

void ConfirmSendSmsRequest::setCallId(const std::string &callId) {
  callId_ = callId;
  setParameter(std::string("CallId"), callId);
}

long ConfirmSendSmsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ConfirmSendSmsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ConfirmSendSmsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ConfirmSendSmsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ConfirmSendSmsRequest::getSecretNo() const {
  return secretNo_;
}

void ConfirmSendSmsRequest::setSecretNo(const std::string &secretNo) {
  secretNo_ = secretNo;
  setParameter(std::string("SecretNo"), secretNo);
}

std::string ConfirmSendSmsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ConfirmSendSmsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ConfirmSendSmsRequest::getProdCode() const {
  return prodCode_;
}

void ConfirmSendSmsRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

long ConfirmSendSmsRequest::getOwnerId() const {
  return ownerId_;
}

void ConfirmSendSmsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ConfirmSendSmsRequest::getPoolKey() const {
  return poolKey_;
}

void ConfirmSendSmsRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

