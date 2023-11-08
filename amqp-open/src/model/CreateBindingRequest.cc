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

#include <alibabacloud/amqp-open/model/CreateBindingRequest.h>

using AlibabaCloud::Amqp_open::Model::CreateBindingRequest;

CreateBindingRequest::CreateBindingRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "CreateBinding") {
  setMethod(HttpRequest::Method::Post);
}

CreateBindingRequest::~CreateBindingRequest() {}

std::string CreateBindingRequest::getArgument() const {
  return argument_;
}

void CreateBindingRequest::setArgument(const std::string &argument) {
  argument_ = argument;
  setBodyParameter(std::string("Argument"), argument);
}

std::string CreateBindingRequest::getDestinationName() const {
  return destinationName_;
}

void CreateBindingRequest::setDestinationName(const std::string &destinationName) {
  destinationName_ = destinationName;
  setBodyParameter(std::string("DestinationName"), destinationName);
}

std::string CreateBindingRequest::getSourceExchange() const {
  return sourceExchange_;
}

void CreateBindingRequest::setSourceExchange(const std::string &sourceExchange) {
  sourceExchange_ = sourceExchange;
  setBodyParameter(std::string("SourceExchange"), sourceExchange);
}

std::string CreateBindingRequest::getBindingKey() const {
  return bindingKey_;
}

void CreateBindingRequest::setBindingKey(const std::string &bindingKey) {
  bindingKey_ = bindingKey;
  setBodyParameter(std::string("BindingKey"), bindingKey);
}

std::string CreateBindingRequest::getBindingType() const {
  return bindingType_;
}

void CreateBindingRequest::setBindingType(const std::string &bindingType) {
  bindingType_ = bindingType;
  setBodyParameter(std::string("BindingType"), bindingType);
}

std::string CreateBindingRequest::getInstanceId() const {
  return instanceId_;
}

void CreateBindingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateBindingRequest::getVirtualHost() const {
  return virtualHost_;
}

void CreateBindingRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setBodyParameter(std::string("VirtualHost"), virtualHost);
}

