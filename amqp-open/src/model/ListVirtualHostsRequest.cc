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

#include <alibabacloud/amqp-open/model/ListVirtualHostsRequest.h>

using AlibabaCloud::Amqp_open::Model::ListVirtualHostsRequest;

ListVirtualHostsRequest::ListVirtualHostsRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "ListVirtualHosts") {
  setMethod(HttpRequest::Method::Get);
}

ListVirtualHostsRequest::~ListVirtualHostsRequest() {}

std::string ListVirtualHostsRequest::getInstanceId() const {
  return instanceId_;
}

void ListVirtualHostsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListVirtualHostsRequest::getNextToken() const {
  return nextToken_;
}

void ListVirtualHostsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListVirtualHostsRequest::getMaxResults() const {
  return maxResults_;
}

void ListVirtualHostsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

