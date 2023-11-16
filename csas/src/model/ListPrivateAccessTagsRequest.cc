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

#include <alibabacloud/csas/model/ListPrivateAccessTagsRequest.h>

using AlibabaCloud::Csas::Model::ListPrivateAccessTagsRequest;

ListPrivateAccessTagsRequest::ListPrivateAccessTagsRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListPrivateAccessTags") {
  setMethod(HttpRequest::Method::Get);
}

ListPrivateAccessTagsRequest::~ListPrivateAccessTagsRequest() {}

std::string ListPrivateAccessTagsRequest::getSourceIp() const {
  return sourceIp_;
}

void ListPrivateAccessTagsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListPrivateAccessTagsRequest::getPolicyId() const {
  return policyId_;
}

void ListPrivateAccessTagsRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

int ListPrivateAccessTagsRequest::getPageSize() const {
  return pageSize_;
}

void ListPrivateAccessTagsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPrivateAccessTagsRequest::getApplicationId() const {
  return applicationId_;
}

void ListPrivateAccessTagsRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

bool ListPrivateAccessTagsRequest::getSimpleMode() const {
  return simpleMode_;
}

void ListPrivateAccessTagsRequest::setSimpleMode(bool simpleMode) {
  simpleMode_ = simpleMode;
  setParameter(std::string("SimpleMode"), simpleMode ? "true" : "false");
}

std::vector<ListPrivateAccessTagsRequest::std::string> ListPrivateAccessTagsRequest::getTagIds() const {
  return tagIds_;
}

void ListPrivateAccessTagsRequest::setTagIds(const std::vector<ListPrivateAccessTagsRequest::std::string> &tagIds) {
  tagIds_ = tagIds;
  for(int dep1 = 0; dep1 != tagIds.size(); dep1++) {
    setParameter(std::string("TagIds") + "." + std::to_string(dep1 + 1), tagIds[dep1]);
  }
}

int ListPrivateAccessTagsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListPrivateAccessTagsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListPrivateAccessTagsRequest::getName() const {
  return name_;
}

void ListPrivateAccessTagsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

