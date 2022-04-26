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

#include <alibabacloud/ccc/model/ListUserLevelsOfSkillGroupRequest.h>

using AlibabaCloud::CCC::Model::ListUserLevelsOfSkillGroupRequest;

ListUserLevelsOfSkillGroupRequest::ListUserLevelsOfSkillGroupRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListUserLevelsOfSkillGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListUserLevelsOfSkillGroupRequest::~ListUserLevelsOfSkillGroupRequest() {}

bool ListUserLevelsOfSkillGroupRequest::getIsMember() const {
  return isMember_;
}

void ListUserLevelsOfSkillGroupRequest::setIsMember(bool isMember) {
  isMember_ = isMember;
  setParameter(std::string("IsMember"), isMember ? "true" : "false");
}

int ListUserLevelsOfSkillGroupRequest::getPageNumber() const {
  return pageNumber_;
}

void ListUserLevelsOfSkillGroupRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListUserLevelsOfSkillGroupRequest::getSearchPattern() const {
  return searchPattern_;
}

void ListUserLevelsOfSkillGroupRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ListUserLevelsOfSkillGroupRequest::getInstanceId() const {
  return instanceId_;
}

void ListUserLevelsOfSkillGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListUserLevelsOfSkillGroupRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void ListUserLevelsOfSkillGroupRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

int ListUserLevelsOfSkillGroupRequest::getPageSize() const {
  return pageSize_;
}

void ListUserLevelsOfSkillGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

