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

#include <alibabacloud/amqp-open/model/DeleteQueueRequest.h>

using AlibabaCloud::Amqp_open::Model::DeleteQueueRequest;

DeleteQueueRequest::DeleteQueueRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "DeleteQueue") {
  setMethod(HttpRequest::Method::Post);
}

DeleteQueueRequest::~DeleteQueueRequest() {}

std::string DeleteQueueRequest::getQueueName() const {
  return queueName_;
}

void DeleteQueueRequest::setQueueName(const std::string &queueName) {
  queueName_ = queueName;
  setBodyParameter(std::string("QueueName"), queueName);
}

std::string DeleteQueueRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteQueueRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteQueueRequest::getVirtualHost() const {
  return virtualHost_;
}

void DeleteQueueRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setBodyParameter(std::string("VirtualHost"), virtualHost);
}

