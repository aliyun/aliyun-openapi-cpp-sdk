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

#include <alibabacloud/mse/model/UpdateGatewayAuthConsumerRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayAuthConsumerRequest;

UpdateGatewayAuthConsumerRequest::UpdateGatewayAuthConsumerRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayAuthConsumer") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayAuthConsumerRequest::~UpdateGatewayAuthConsumerRequest() {}

std::string UpdateGatewayAuthConsumerRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayAuthConsumerRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayAuthConsumerRequest::getKeyName() const {
  return keyName_;
}

void UpdateGatewayAuthConsumerRequest::setKeyName(const std::string &keyName) {
  keyName_ = keyName;
  setParameter(std::string("KeyName"), keyName);
}

long UpdateGatewayAuthConsumerRequest::getId() const {
  return id_;
}

void UpdateGatewayAuthConsumerRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string UpdateGatewayAuthConsumerRequest::getTokenPrefix() const {
  return tokenPrefix_;
}

void UpdateGatewayAuthConsumerRequest::setTokenPrefix(const std::string &tokenPrefix) {
  tokenPrefix_ = tokenPrefix;
  setParameter(std::string("TokenPrefix"), tokenPrefix);
}

std::string UpdateGatewayAuthConsumerRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayAuthConsumerRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string UpdateGatewayAuthConsumerRequest::getJwks() const {
  return jwks_;
}

void UpdateGatewayAuthConsumerRequest::setJwks(const std::string &jwks) {
  jwks_ = jwks;
  setParameter(std::string("Jwks"), jwks);
}

std::string UpdateGatewayAuthConsumerRequest::getDescription() const {
  return description_;
}

void UpdateGatewayAuthConsumerRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateGatewayAuthConsumerRequest::getTokenPosition() const {
  return tokenPosition_;
}

void UpdateGatewayAuthConsumerRequest::setTokenPosition(const std::string &tokenPosition) {
  tokenPosition_ = tokenPosition;
  setParameter(std::string("TokenPosition"), tokenPosition);
}

std::string UpdateGatewayAuthConsumerRequest::getEncodeType() const {
  return encodeType_;
}

void UpdateGatewayAuthConsumerRequest::setEncodeType(const std::string &encodeType) {
  encodeType_ = encodeType;
  setParameter(std::string("EncodeType"), encodeType);
}

std::string UpdateGatewayAuthConsumerRequest::getKeyValue() const {
  return keyValue_;
}

void UpdateGatewayAuthConsumerRequest::setKeyValue(const std::string &keyValue) {
  keyValue_ = keyValue;
  setParameter(std::string("KeyValue"), keyValue);
}

bool UpdateGatewayAuthConsumerRequest::getTokenPass() const {
  return tokenPass_;
}

void UpdateGatewayAuthConsumerRequest::setTokenPass(bool tokenPass) {
  tokenPass_ = tokenPass;
  setParameter(std::string("TokenPass"), tokenPass ? "true" : "false");
}

std::string UpdateGatewayAuthConsumerRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayAuthConsumerRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string UpdateGatewayAuthConsumerRequest::getTokenName() const {
  return tokenName_;
}

void UpdateGatewayAuthConsumerRequest::setTokenName(const std::string &tokenName) {
  tokenName_ = tokenName;
  setParameter(std::string("TokenName"), tokenName);
}

