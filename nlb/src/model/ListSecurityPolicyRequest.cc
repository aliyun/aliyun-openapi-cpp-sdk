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

#include <alibabacloud/nlb/model/ListSecurityPolicyRequest.h>

using AlibabaCloud::Nlb::Model::ListSecurityPolicyRequest;

ListSecurityPolicyRequest::ListSecurityPolicyRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "ListSecurityPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ListSecurityPolicyRequest::~ListSecurityPolicyRequest() {}

std::vector<std::string> ListSecurityPolicyRequest::getSecurityPolicyNames() const {
  return securityPolicyNames_;
}

void ListSecurityPolicyRequest::setSecurityPolicyNames(const std::vector<std::string> &securityPolicyNames) {
  securityPolicyNames_ = securityPolicyNames;
}

std::string ListSecurityPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListSecurityPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListSecurityPolicyRequest::getNextToken() const {
  return nextToken_;
}

void ListSecurityPolicyRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::string ListSecurityPolicyRequest::getRegionId() const {
  return regionId_;
}

void ListSecurityPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::vector<ListSecurityPolicyRequest::Tag> ListSecurityPolicyRequest::getTag() const {
  return tag_;
}

void ListSecurityPolicyRequest::setTag(const std::vector<ListSecurityPolicyRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

std::vector<std::string> ListSecurityPolicyRequest::getSecurityPolicyIds() const {
  return securityPolicyIds_;
}

void ListSecurityPolicyRequest::setSecurityPolicyIds(const std::vector<std::string> &securityPolicyIds) {
  securityPolicyIds_ = securityPolicyIds;
}

int ListSecurityPolicyRequest::getMaxResults() const {
  return maxResults_;
}

void ListSecurityPolicyRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

