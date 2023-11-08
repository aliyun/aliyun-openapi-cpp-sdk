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

#include <alibabacloud/amqp-open/model/ListQueueConsumersRequest.h>

using AlibabaCloud::Amqp_open::Model::ListQueueConsumersRequest;

ListQueueConsumersRequest::ListQueueConsumersRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "ListQueueConsumers") {
  setMethod(HttpRequest::Method::Get);
}

ListQueueConsumersRequest::~ListQueueConsumersRequest() {}

std::string ListQueueConsumersRequest::getInstanceId() const {
  return instanceId_;
}

void ListQueueConsumersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListQueueConsumersRequest::getNextToken() const {
  return nextToken_;
}

void ListQueueConsumersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListQueueConsumersRequest::getQueryCount() const {
  return queryCount_;
}

void ListQueueConsumersRequest::setQueryCount(int queryCount) {
  queryCount_ = queryCount;
  setParameter(std::string("QueryCount"), std::to_string(queryCount));
}

std::string ListQueueConsumersRequest::getVirtualHost() const {
  return virtualHost_;
}

void ListQueueConsumersRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setParameter(std::string("VirtualHost"), virtualHost);
}

std::string ListQueueConsumersRequest::getQueue() const {
  return queue_;
}

void ListQueueConsumersRequest::setQueue(const std::string &queue) {
  queue_ = queue;
  setParameter(std::string("Queue"), queue);
}

