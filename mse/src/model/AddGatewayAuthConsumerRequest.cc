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

#include <alibabacloud/mse/model/AddGatewayAuthConsumerRequest.h>

using AlibabaCloud::Mse::Model::AddGatewayAuthConsumerRequest;

AddGatewayAuthConsumerRequest::AddGatewayAuthConsumerRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddGatewayAuthConsumer") {
  setMethod(HttpRequest::Method::Post);
}

AddGatewayAuthConsumerRequest::~AddGatewayAuthConsumerRequest() {}

std::string AddGatewayAuthConsumerRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddGatewayAuthConsumerRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddGatewayAuthConsumerRequest::getType() const {
  return type_;
}

void AddGatewayAuthConsumerRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string AddGatewayAuthConsumerRequest::getKeyName() const {
  return keyName_;
}

void AddGatewayAuthConsumerRequest::setKeyName(const std::string &keyName) {
  keyName_ = keyName;
  setParameter(std::string("KeyName"), keyName);
}

std::string AddGatewayAuthConsumerRequest::getTokenPrefix() const {
  return tokenPrefix_;
}

void AddGatewayAuthConsumerRequest::setTokenPrefix(const std::string &tokenPrefix) {
  tokenPrefix_ = tokenPrefix;
  setParameter(std::string("TokenPrefix"), tokenPrefix);
}

std::string AddGatewayAuthConsumerRequest::getName() const {
  return name_;
}

void AddGatewayAuthConsumerRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddGatewayAuthConsumerRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddGatewayAuthConsumerRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string AddGatewayAuthConsumerRequest::getJwks() const {
  return jwks_;
}

void AddGatewayAuthConsumerRequest::setJwks(const std::string &jwks) {
  jwks_ = jwks;
  setParameter(std::string("Jwks"), jwks);
}

std::string AddGatewayAuthConsumerRequest::getDescription() const {
  return description_;
}

void AddGatewayAuthConsumerRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AddGatewayAuthConsumerRequest::getTokenPosition() const {
  return tokenPosition_;
}

void AddGatewayAuthConsumerRequest::setTokenPosition(const std::string &tokenPosition) {
  tokenPosition_ = tokenPosition;
  setParameter(std::string("TokenPosition"), tokenPosition);
}

std::string AddGatewayAuthConsumerRequest::getEncodeType() const {
  return encodeType_;
}

void AddGatewayAuthConsumerRequest::setEncodeType(const std::string &encodeType) {
  encodeType_ = encodeType;
  setParameter(std::string("EncodeType"), encodeType);
}

std::string AddGatewayAuthConsumerRequest::getKeyValue() const {
  return keyValue_;
}

void AddGatewayAuthConsumerRequest::setKeyValue(const std::string &keyValue) {
  keyValue_ = keyValue;
  setParameter(std::string("KeyValue"), keyValue);
}

bool AddGatewayAuthConsumerRequest::getTokenPass() const {
  return tokenPass_;
}

void AddGatewayAuthConsumerRequest::setTokenPass(bool tokenPass) {
  tokenPass_ = tokenPass;
  setParameter(std::string("TokenPass"), tokenPass ? "true" : "false");
}

std::string AddGatewayAuthConsumerRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddGatewayAuthConsumerRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string AddGatewayAuthConsumerRequest::getTokenName() const {
  return tokenName_;
}

void AddGatewayAuthConsumerRequest::setTokenName(const std::string &tokenName) {
  tokenName_ = tokenName;
  setParameter(std::string("TokenName"), tokenName);
}

