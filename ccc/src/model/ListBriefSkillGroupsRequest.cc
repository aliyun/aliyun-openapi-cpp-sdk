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

#include <alibabacloud/ccc/model/ListBriefSkillGroupsRequest.h>

using AlibabaCloud::CCC::Model::ListBriefSkillGroupsRequest;

ListBriefSkillGroupsRequest::ListBriefSkillGroupsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListBriefSkillGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListBriefSkillGroupsRequest::~ListBriefSkillGroupsRequest() {}

int ListBriefSkillGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListBriefSkillGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListBriefSkillGroupsRequest::getSearchPattern() const {
  return searchPattern_;
}

void ListBriefSkillGroupsRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ListBriefSkillGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void ListBriefSkillGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListBriefSkillGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListBriefSkillGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

