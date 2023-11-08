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

#include <alibabacloud/amqp-open/model/ListBindingsRequest.h>

using AlibabaCloud::Amqp_open::Model::ListBindingsRequest;

ListBindingsRequest::ListBindingsRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "ListBindings") {
  setMethod(HttpRequest::Method::Get);
}

ListBindingsRequest::~ListBindingsRequest() {}

std::string ListBindingsRequest::getInstanceId() const {
  return instanceId_;
}

void ListBindingsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListBindingsRequest::getNextToken() const {
  return nextToken_;
}

void ListBindingsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListBindingsRequest::getMaxResults() const {
  return maxResults_;
}

void ListBindingsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListBindingsRequest::getVirtualHost() const {
  return virtualHost_;
}

void ListBindingsRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setParameter(std::string("VirtualHost"), virtualHost);
}

