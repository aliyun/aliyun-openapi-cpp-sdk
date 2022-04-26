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

#include <alibabacloud/ccc/model/ListPhoneNumbersOfSkillGroupRequest.h>

using AlibabaCloud::CCC::Model::ListPhoneNumbersOfSkillGroupRequest;

ListPhoneNumbersOfSkillGroupRequest::ListPhoneNumbersOfSkillGroupRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListPhoneNumbersOfSkillGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListPhoneNumbersOfSkillGroupRequest::~ListPhoneNumbersOfSkillGroupRequest() {}

bool ListPhoneNumbersOfSkillGroupRequest::getActive() const {
  return active_;
}

void ListPhoneNumbersOfSkillGroupRequest::setActive(bool active) {
  active_ = active;
  setParameter(std::string("Active"), active ? "true" : "false");
}

int ListPhoneNumbersOfSkillGroupRequest::getPageNumber() const {
  return pageNumber_;
}

void ListPhoneNumbersOfSkillGroupRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool ListPhoneNumbersOfSkillGroupRequest::getIsMember() const {
  return isMember_;
}

void ListPhoneNumbersOfSkillGroupRequest::setIsMember(bool isMember) {
  isMember_ = isMember;
  setParameter(std::string("IsMember"), isMember ? "true" : "false");
}

std::string ListPhoneNumbersOfSkillGroupRequest::getSearchPattern() const {
  return searchPattern_;
}

void ListPhoneNumbersOfSkillGroupRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ListPhoneNumbersOfSkillGroupRequest::getInstanceId() const {
  return instanceId_;
}

void ListPhoneNumbersOfSkillGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListPhoneNumbersOfSkillGroupRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void ListPhoneNumbersOfSkillGroupRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

int ListPhoneNumbersOfSkillGroupRequest::getPageSize() const {
  return pageSize_;
}

void ListPhoneNumbersOfSkillGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

