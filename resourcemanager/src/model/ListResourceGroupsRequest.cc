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

#include <alibabacloud/resourcemanager/model/ListResourceGroupsRequest.h>

using AlibabaCloud::ResourceManager::Model::ListResourceGroupsRequest;

ListResourceGroupsRequest::ListResourceGroupsRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListResourceGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListResourceGroupsRequest::~ListResourceGroupsRequest() {}

int ListResourceGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListResourceGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListResourceGroupsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListResourceGroupsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int ListResourceGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListResourceGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListResourceGroupsRequest::Tag> ListResourceGroupsRequest::getTag() const {
  return tag_;
}

void ListResourceGroupsRequest::setTag(const std::vector<ListResourceGroupsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::vector<ListResourceGroupsRequest::std::string> ListResourceGroupsRequest::getResourceGroupIds() const {
  return resourceGroupIds_;
}

void ListResourceGroupsRequest::setResourceGroupIds(const std::vector<ListResourceGroupsRequest::std::string> &resourceGroupIds) {
  resourceGroupIds_ = resourceGroupIds;
  for(int dep1 = 0; dep1 != resourceGroupIds.size(); dep1++) {
    setParameter(std::string("ResourceGroupIds") + "." + std::to_string(dep1 + 1), resourceGroupIds[dep1]);
  }
}

bool ListResourceGroupsRequest::getIncludeTags() const {
  return includeTags_;
}

void ListResourceGroupsRequest::setIncludeTags(bool includeTags) {
  includeTags_ = includeTags;
  setParameter(std::string("IncludeTags"), includeTags ? "true" : "false");
}

std::string ListResourceGroupsRequest::getDisplayName() const {
  return displayName_;
}

void ListResourceGroupsRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string ListResourceGroupsRequest::getName() const {
  return name_;
}

void ListResourceGroupsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListResourceGroupsRequest::getStatus() const {
  return status_;
}

void ListResourceGroupsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

