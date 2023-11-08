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

#include <alibabacloud/amqp-open/model/DeleteBindingRequest.h>

using AlibabaCloud::Amqp_open::Model::DeleteBindingRequest;

DeleteBindingRequest::DeleteBindingRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "DeleteBinding") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBindingRequest::~DeleteBindingRequest() {}

std::string DeleteBindingRequest::getDestinationName() const {
  return destinationName_;
}

void DeleteBindingRequest::setDestinationName(const std::string &destinationName) {
  destinationName_ = destinationName;
  setBodyParameter(std::string("DestinationName"), destinationName);
}

std::string DeleteBindingRequest::getSourceExchange() const {
  return sourceExchange_;
}

void DeleteBindingRequest::setSourceExchange(const std::string &sourceExchange) {
  sourceExchange_ = sourceExchange;
  setBodyParameter(std::string("SourceExchange"), sourceExchange);
}

std::string DeleteBindingRequest::getBindingKey() const {
  return bindingKey_;
}

void DeleteBindingRequest::setBindingKey(const std::string &bindingKey) {
  bindingKey_ = bindingKey;
  setBodyParameter(std::string("BindingKey"), bindingKey);
}

std::string DeleteBindingRequest::getBindingType() const {
  return bindingType_;
}

void DeleteBindingRequest::setBindingType(const std::string &bindingType) {
  bindingType_ = bindingType;
  setBodyParameter(std::string("BindingType"), bindingType);
}

std::string DeleteBindingRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteBindingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteBindingRequest::getVirtualHost() const {
  return virtualHost_;
}

void DeleteBindingRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setBodyParameter(std::string("VirtualHost"), virtualHost);
}

