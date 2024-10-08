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

#include <alibabacloud/resourcecenter/model/ListMultiAccountResourceGroupsRequest.h>

using AlibabaCloud::ResourceCenter::Model::ListMultiAccountResourceGroupsRequest;

ListMultiAccountResourceGroupsRequest::ListMultiAccountResourceGroupsRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ListMultiAccountResourceGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListMultiAccountResourceGroupsRequest::~ListMultiAccountResourceGroupsRequest() {}

std::string ListMultiAccountResourceGroupsRequest::getAccountId() const {
  return accountId_;
}

void ListMultiAccountResourceGroupsRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string ListMultiAccountResourceGroupsRequest::getNextToken() const {
  return nextToken_;
}

void ListMultiAccountResourceGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> ListMultiAccountResourceGroupsRequest::getResourceGroupIds() const {
  return resourceGroupIds_;
}

void ListMultiAccountResourceGroupsRequest::setResourceGroupIds(const std::vector<std::string> &resourceGroupIds) {
  resourceGroupIds_ = resourceGroupIds;
}

int ListMultiAccountResourceGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void ListMultiAccountResourceGroupsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

