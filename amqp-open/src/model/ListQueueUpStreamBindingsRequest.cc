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

#include <alibabacloud/amqp-open/model/ListQueueUpStreamBindingsRequest.h>

using AlibabaCloud::Amqp_open::Model::ListQueueUpStreamBindingsRequest;

ListQueueUpStreamBindingsRequest::ListQueueUpStreamBindingsRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "ListQueueUpStreamBindings") {
  setMethod(HttpRequest::Method::Get);
}

ListQueueUpStreamBindingsRequest::~ListQueueUpStreamBindingsRequest() {}

std::string ListQueueUpStreamBindingsRequest::getQueueName() const {
  return queueName_;
}

void ListQueueUpStreamBindingsRequest::setQueueName(const std::string &queueName) {
  queueName_ = queueName;
  setParameter(std::string("QueueName"), queueName);
}

std::string ListQueueUpStreamBindingsRequest::getInstanceId() const {
  return instanceId_;
}

void ListQueueUpStreamBindingsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListQueueUpStreamBindingsRequest::getNextToken() const {
  return nextToken_;
}

void ListQueueUpStreamBindingsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListQueueUpStreamBindingsRequest::getMaxResults() const {
  return maxResults_;
}

void ListQueueUpStreamBindingsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListQueueUpStreamBindingsRequest::getVirtualHost() const {
  return virtualHost_;
}

void ListQueueUpStreamBindingsRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setParameter(std::string("VirtualHost"), virtualHost);
}

