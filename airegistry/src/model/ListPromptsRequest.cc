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

#include <alibabacloud/airegistry/model/ListPromptsRequest.h>

using AlibabaCloud::AIRegistry::Model::ListPromptsRequest;

ListPromptsRequest::ListPromptsRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "ListPrompts") {
  setMethod(HttpRequest::Method::Post);
}

ListPromptsRequest::~ListPromptsRequest() {}

std::string ListPromptsRequest::getPromptKey() const {
  return promptKey_;
}

void ListPromptsRequest::setPromptKey(const std::string &promptKey) {
  promptKey_ = promptKey;
  setParameter(std::string("PromptKey"), promptKey);
}

std::string ListPromptsRequest::getBizTags() const {
  return bizTags_;
}

void ListPromptsRequest::setBizTags(const std::string &bizTags) {
  bizTags_ = bizTags;
  setParameter(std::string("BizTags"), bizTags);
}

std::string ListPromptsRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListPromptsRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

int ListPromptsRequest::getPageNo() const {
  return pageNo_;
}

void ListPromptsRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListPromptsRequest::getSearch() const {
  return search_;
}

void ListPromptsRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("Search"), search);
}

int ListPromptsRequest::getPageSize() const {
  return pageSize_;
}

void ListPromptsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

