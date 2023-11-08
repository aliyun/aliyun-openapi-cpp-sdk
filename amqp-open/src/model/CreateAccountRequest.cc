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

#include <alibabacloud/amqp-open/model/CreateAccountRequest.h>

using AlibabaCloud::Amqp_open::Model::CreateAccountRequest;

CreateAccountRequest::CreateAccountRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "CreateAccount") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccountRequest::~CreateAccountRequest() {}

std::string CreateAccountRequest::getSignature() const {
  return signature_;
}

void CreateAccountRequest::setSignature(const std::string &signature) {
  signature_ = signature;
  setParameter(std::string("signature"), signature);
}

std::string CreateAccountRequest::getSecretSign() const {
  return secretSign_;
}

void CreateAccountRequest::setSecretSign(const std::string &secretSign) {
  secretSign_ = secretSign;
  setParameter(std::string("secretSign"), secretSign);
}

std::string CreateAccountRequest::getAccountAccessKey() const {
  return accountAccessKey_;
}

void CreateAccountRequest::setAccountAccessKey(const std::string &accountAccessKey) {
  accountAccessKey_ = accountAccessKey;
  setParameter(std::string("accountAccessKey"), accountAccessKey);
}

std::string CreateAccountRequest::getInstanceId() const {
  return instanceId_;
}

void CreateAccountRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), instanceId);
}

long CreateAccountRequest::getCreateTimestamp() const {
  return createTimestamp_;
}

void CreateAccountRequest::setCreateTimestamp(long createTimestamp) {
  createTimestamp_ = createTimestamp;
  setParameter(std::string("createTimestamp"), std::to_string(createTimestamp));
}

std::string CreateAccountRequest::getUserName() const {
  return userName_;
}

void CreateAccountRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("userName"), userName);
}

