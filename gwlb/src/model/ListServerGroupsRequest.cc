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

#include <alibabacloud/gwlb/model/ListServerGroupsRequest.h>

using AlibabaCloud::Gwlb::Model::ListServerGroupsRequest;

ListServerGroupsRequest::ListServerGroupsRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "ListServerGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListServerGroupsRequest::~ListServerGroupsRequest() {}

std::vector<ListServerGroupsRequest::std::string> ListServerGroupsRequest::getServerGroupNames() const {
  return serverGroupNames_;
}

void ListServerGroupsRequest::setServerGroupNames(const std::vector<ListServerGroupsRequest::std::string> &serverGroupNames) {
  serverGroupNames_ = serverGroupNames;
  for(int dep1 = 0; dep1 != serverGroupNames.size(); dep1++) {
    setBodyParameter(std::string("ServerGroupNames") + "." + std::to_string(dep1 + 1), serverGroupNames[dep1]);
  }
}

int ListServerGroupsRequest::getSkip() const {
  return skip_;
}

void ListServerGroupsRequest::setSkip(int skip) {
  skip_ = skip;
  setBodyParameter(std::string("Skip"), std::to_string(skip));
}

std::string ListServerGroupsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListServerGroupsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListServerGroupsRequest::getNextToken() const {
  return nextToken_;
}

void ListServerGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<ListServerGroupsRequest::Tag> ListServerGroupsRequest::getTag() const {
  return tag_;
}

void ListServerGroupsRequest::setTag(const std::vector<ListServerGroupsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

std::vector<ListServerGroupsRequest::std::string> ListServerGroupsRequest::getServerGroupIds() const {
  return serverGroupIds_;
}

void ListServerGroupsRequest::setServerGroupIds(const std::vector<ListServerGroupsRequest::std::string> &serverGroupIds) {
  serverGroupIds_ = serverGroupIds;
  for(int dep1 = 0; dep1 != serverGroupIds.size(); dep1++) {
    setBodyParameter(std::string("ServerGroupIds") + "." + std::to_string(dep1 + 1), serverGroupIds[dep1]);
  }
}

std::string ListServerGroupsRequest::getServerGroupType() const {
  return serverGroupType_;
}

void ListServerGroupsRequest::setServerGroupType(const std::string &serverGroupType) {
  serverGroupType_ = serverGroupType;
  setBodyParameter(std::string("ServerGroupType"), serverGroupType);
}

std::string ListServerGroupsRequest::getVpcId() const {
  return vpcId_;
}

void ListServerGroupsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

int ListServerGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void ListServerGroupsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

