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

#include <alibabacloud/airegistry/model/ListPromptVersionsRequest.h>

using AlibabaCloud::AIRegistry::Model::ListPromptVersionsRequest;

ListPromptVersionsRequest::ListPromptVersionsRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "ListPromptVersions") {
  setMethod(HttpRequest::Method::Post);
}

ListPromptVersionsRequest::~ListPromptVersionsRequest() {}

std::string ListPromptVersionsRequest::getPromptKey() const {
  return promptKey_;
}

void ListPromptVersionsRequest::setPromptKey(const std::string &promptKey) {
  promptKey_ = promptKey;
  setParameter(std::string("PromptKey"), promptKey);
}

std::string ListPromptVersionsRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListPromptVersionsRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

int ListPromptVersionsRequest::getPageNo() const {
  return pageNo_;
}

void ListPromptVersionsRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

int ListPromptVersionsRequest::getPageSize() const {
  return pageSize_;
}

void ListPromptVersionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

