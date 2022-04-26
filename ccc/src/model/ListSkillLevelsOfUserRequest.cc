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

#include <alibabacloud/ccc/model/ListSkillLevelsOfUserRequest.h>

using AlibabaCloud::CCC::Model::ListSkillLevelsOfUserRequest;

ListSkillLevelsOfUserRequest::ListSkillLevelsOfUserRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListSkillLevelsOfUser") {
  setMethod(HttpRequest::Method::Post);
}

ListSkillLevelsOfUserRequest::~ListSkillLevelsOfUserRequest() {}

std::string ListSkillLevelsOfUserRequest::getUserId() const {
  return userId_;
}

void ListSkillLevelsOfUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

bool ListSkillLevelsOfUserRequest::getIsMember() const {
  return isMember_;
}

void ListSkillLevelsOfUserRequest::setIsMember(bool isMember) {
  isMember_ = isMember;
  setParameter(std::string("IsMember"), isMember ? "true" : "false");
}

int ListSkillLevelsOfUserRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSkillLevelsOfUserRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSkillLevelsOfUserRequest::getSearchPattern() const {
  return searchPattern_;
}

void ListSkillLevelsOfUserRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ListSkillLevelsOfUserRequest::getInstanceId() const {
  return instanceId_;
}

void ListSkillLevelsOfUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListSkillLevelsOfUserRequest::getPageSize() const {
  return pageSize_;
}

void ListSkillLevelsOfUserRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

