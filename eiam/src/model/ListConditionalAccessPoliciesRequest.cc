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

#include <alibabacloud/eiam/model/ListConditionalAccessPoliciesRequest.h>

using AlibabaCloud::Eiam::Model::ListConditionalAccessPoliciesRequest;

ListConditionalAccessPoliciesRequest::ListConditionalAccessPoliciesRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListConditionalAccessPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListConditionalAccessPoliciesRequest::~ListConditionalAccessPoliciesRequest() {}

std::string ListConditionalAccessPoliciesRequest::getNextToken() const {
  return nextToken_;
}

void ListConditionalAccessPoliciesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListConditionalAccessPoliciesRequest::getPreviousToken() const {
  return previousToken_;
}

void ListConditionalAccessPoliciesRequest::setPreviousToken(const std::string &previousToken) {
  previousToken_ = previousToken;
  setParameter(std::string("PreviousToken"), previousToken);
}

std::string ListConditionalAccessPoliciesRequest::getInstanceId() const {
  return instanceId_;
}

void ListConditionalAccessPoliciesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListConditionalAccessPoliciesRequest::getMaxResults() const {
  return maxResults_;
}

void ListConditionalAccessPoliciesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

