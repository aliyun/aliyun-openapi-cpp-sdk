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

#include <alibabacloud/resourcemanager/model/ListAccountsForParentRequest.h>

using AlibabaCloud::ResourceManager::Model::ListAccountsForParentRequest;

ListAccountsForParentRequest::ListAccountsForParentRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListAccountsForParent") {
  setMethod(HttpRequest::Method::Post);
}

ListAccountsForParentRequest::~ListAccountsForParentRequest() {}

int ListAccountsForParentRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAccountsForParentRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListAccountsForParentRequest::getPageSize() const {
  return pageSize_;
}

void ListAccountsForParentRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListAccountsForParentRequest::Tag> ListAccountsForParentRequest::getTag() const {
  return tag_;
}

void ListAccountsForParentRequest::setTag(const std::vector<ListAccountsForParentRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string ListAccountsForParentRequest::getQueryKeyword() const {
  return queryKeyword_;
}

void ListAccountsForParentRequest::setQueryKeyword(const std::string &queryKeyword) {
  queryKeyword_ = queryKeyword;
  setParameter(std::string("QueryKeyword"), queryKeyword);
}

std::string ListAccountsForParentRequest::getParentFolderId() const {
  return parentFolderId_;
}

void ListAccountsForParentRequest::setParentFolderId(const std::string &parentFolderId) {
  parentFolderId_ = parentFolderId;
  setParameter(std::string("ParentFolderId"), parentFolderId);
}

bool ListAccountsForParentRequest::getIncludeTags() const {
  return includeTags_;
}

void ListAccountsForParentRequest::setIncludeTags(bool includeTags) {
  includeTags_ = includeTags;
  setParameter(std::string("IncludeTags"), includeTags ? "true" : "false");
}

