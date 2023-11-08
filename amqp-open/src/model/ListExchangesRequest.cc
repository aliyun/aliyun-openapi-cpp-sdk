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

#include <alibabacloud/amqp-open/model/ListExchangesRequest.h>

using AlibabaCloud::Amqp_open::Model::ListExchangesRequest;

ListExchangesRequest::ListExchangesRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "ListExchanges") {
  setMethod(HttpRequest::Method::Get);
}

ListExchangesRequest::~ListExchangesRequest() {}

std::string ListExchangesRequest::getInstanceId() const {
  return instanceId_;
}

void ListExchangesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListExchangesRequest::getNextToken() const {
  return nextToken_;
}

void ListExchangesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListExchangesRequest::getMaxResults() const {
  return maxResults_;
}

void ListExchangesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListExchangesRequest::getVirtualHost() const {
  return virtualHost_;
}

void ListExchangesRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setParameter(std::string("VirtualHost"), virtualHost);
}

