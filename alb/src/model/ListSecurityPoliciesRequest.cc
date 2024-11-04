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

#include <alibabacloud/alb/model/ListSecurityPoliciesRequest.h>

using AlibabaCloud::Alb::Model::ListSecurityPoliciesRequest;

ListSecurityPoliciesRequest::ListSecurityPoliciesRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListSecurityPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListSecurityPoliciesRequest::~ListSecurityPoliciesRequest() {}

std::vector<ListSecurityPoliciesRequest::std::string> ListSecurityPoliciesRequest::getSecurityPolicyNames() const {
  return securityPolicyNames_;
}

void ListSecurityPoliciesRequest::setSecurityPolicyNames(const std::vector<ListSecurityPoliciesRequest::std::string> &securityPolicyNames) {
  securityPolicyNames_ = securityPolicyNames;
  for(int dep1 = 0; dep1 != securityPolicyNames.size(); dep1++) {
    setParameter(std::string("SecurityPolicyNames") + "." + std::to_string(dep1 + 1), securityPolicyNames[dep1]);
  }
}

std::string ListSecurityPoliciesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListSecurityPoliciesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListSecurityPoliciesRequest::getNextToken() const {
  return nextToken_;
}

void ListSecurityPoliciesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListSecurityPoliciesRequest::Tag> ListSecurityPoliciesRequest::getTag() const {
  return tag_;
}

void ListSecurityPoliciesRequest::setTag(const std::vector<ListSecurityPoliciesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::vector<ListSecurityPoliciesRequest::std::string> ListSecurityPoliciesRequest::getSecurityPolicyIds() const {
  return securityPolicyIds_;
}

void ListSecurityPoliciesRequest::setSecurityPolicyIds(const std::vector<ListSecurityPoliciesRequest::std::string> &securityPolicyIds) {
  securityPolicyIds_ = securityPolicyIds;
  for(int dep1 = 0; dep1 != securityPolicyIds.size(); dep1++) {
    setParameter(std::string("SecurityPolicyIds") + "." + std::to_string(dep1 + 1), securityPolicyIds[dep1]);
  }
}

int ListSecurityPoliciesRequest::getMaxResults() const {
  return maxResults_;
}

void ListSecurityPoliciesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

