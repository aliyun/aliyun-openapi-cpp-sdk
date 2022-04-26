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

#include <alibabacloud/ccc/model/ListSkillGroupsRequest.h>

using AlibabaCloud::CCC::Model::ListSkillGroupsRequest;

ListSkillGroupsRequest::ListSkillGroupsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListSkillGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListSkillGroupsRequest::~ListSkillGroupsRequest() {}

int ListSkillGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSkillGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSkillGroupsRequest::getSearchPattern() const {
  return searchPattern_;
}

void ListSkillGroupsRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ListSkillGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void ListSkillGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListSkillGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListSkillGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

