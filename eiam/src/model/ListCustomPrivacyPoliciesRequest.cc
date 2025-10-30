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

#include <alibabacloud/eiam/model/ListCustomPrivacyPoliciesRequest.h>

using AlibabaCloud::Eiam::Model::ListCustomPrivacyPoliciesRequest;

ListCustomPrivacyPoliciesRequest::ListCustomPrivacyPoliciesRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListCustomPrivacyPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomPrivacyPoliciesRequest::~ListCustomPrivacyPoliciesRequest() {}

std::string ListCustomPrivacyPoliciesRequest::getNextToken() const {
  return nextToken_;
}

void ListCustomPrivacyPoliciesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListCustomPrivacyPoliciesRequest::getPreviousToken() const {
  return previousToken_;
}

void ListCustomPrivacyPoliciesRequest::setPreviousToken(const std::string &previousToken) {
  previousToken_ = previousToken;
  setParameter(std::string("PreviousToken"), previousToken);
}

std::string ListCustomPrivacyPoliciesRequest::getCustomPrivacyPolicyNameStartsWith() const {
  return customPrivacyPolicyNameStartsWith_;
}

void ListCustomPrivacyPoliciesRequest::setCustomPrivacyPolicyNameStartsWith(const std::string &customPrivacyPolicyNameStartsWith) {
  customPrivacyPolicyNameStartsWith_ = customPrivacyPolicyNameStartsWith;
  setParameter(std::string("CustomPrivacyPolicyNameStartsWith"), customPrivacyPolicyNameStartsWith);
}

std::string ListCustomPrivacyPoliciesRequest::getInstanceId() const {
  return instanceId_;
}

void ListCustomPrivacyPoliciesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListCustomPrivacyPoliciesRequest::getMaxResults() const {
  return maxResults_;
}

void ListCustomPrivacyPoliciesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

