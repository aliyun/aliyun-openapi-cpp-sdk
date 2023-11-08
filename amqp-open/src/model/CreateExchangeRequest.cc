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

#include <alibabacloud/amqp-open/model/CreateExchangeRequest.h>

using AlibabaCloud::Amqp_open::Model::CreateExchangeRequest;

CreateExchangeRequest::CreateExchangeRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "CreateExchange") {
  setMethod(HttpRequest::Method::Post);
}

CreateExchangeRequest::~CreateExchangeRequest() {}

bool CreateExchangeRequest::getInternal() const {
  return internal_;
}

void CreateExchangeRequest::setInternal(bool internal) {
  internal_ = internal;
  setBodyParameter(std::string("Internal"), internal ? "true" : "false");
}

std::string CreateExchangeRequest::getExchangeName() const {
  return exchangeName_;
}

void CreateExchangeRequest::setExchangeName(const std::string &exchangeName) {
  exchangeName_ = exchangeName;
  setBodyParameter(std::string("ExchangeName"), exchangeName);
}

std::string CreateExchangeRequest::getInstanceId() const {
  return instanceId_;
}

void CreateExchangeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateExchangeRequest::getAlternateExchange() const {
  return alternateExchange_;
}

void CreateExchangeRequest::setAlternateExchange(const std::string &alternateExchange) {
  alternateExchange_ = alternateExchange;
  setBodyParameter(std::string("AlternateExchange"), alternateExchange);
}

bool CreateExchangeRequest::getAutoDeleteState() const {
  return autoDeleteState_;
}

void CreateExchangeRequest::setAutoDeleteState(bool autoDeleteState) {
  autoDeleteState_ = autoDeleteState;
  setBodyParameter(std::string("AutoDeleteState"), autoDeleteState ? "true" : "false");
}

std::string CreateExchangeRequest::getExchangeType() const {
  return exchangeType_;
}

void CreateExchangeRequest::setExchangeType(const std::string &exchangeType) {
  exchangeType_ = exchangeType;
  setBodyParameter(std::string("ExchangeType"), exchangeType);
}

std::string CreateExchangeRequest::getVirtualHost() const {
  return virtualHost_;
}

void CreateExchangeRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setBodyParameter(std::string("VirtualHost"), virtualHost);
}

