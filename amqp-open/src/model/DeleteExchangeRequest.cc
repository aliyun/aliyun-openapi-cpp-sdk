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

#include <alibabacloud/amqp-open/model/DeleteExchangeRequest.h>

using AlibabaCloud::Amqp_open::Model::DeleteExchangeRequest;

DeleteExchangeRequest::DeleteExchangeRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "DeleteExchange") {
  setMethod(HttpRequest::Method::Post);
}

DeleteExchangeRequest::~DeleteExchangeRequest() {}

std::string DeleteExchangeRequest::getExchangeName() const {
  return exchangeName_;
}

void DeleteExchangeRequest::setExchangeName(const std::string &exchangeName) {
  exchangeName_ = exchangeName;
  setBodyParameter(std::string("ExchangeName"), exchangeName);
}

std::string DeleteExchangeRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteExchangeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteExchangeRequest::getVirtualHost() const {
  return virtualHost_;
}

void DeleteExchangeRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setBodyParameter(std::string("VirtualHost"), virtualHost);
}

