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

#include <alibabacloud/ccc/model/ListSkillGroupStatesRequest.h>

using AlibabaCloud::CCC::Model::ListSkillGroupStatesRequest;

ListSkillGroupStatesRequest::ListSkillGroupStatesRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListSkillGroupStates") {
  setMethod(HttpRequest::Method::Get);
}

ListSkillGroupStatesRequest::~ListSkillGroupStatesRequest() {}

int ListSkillGroupStatesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSkillGroupStatesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSkillGroupStatesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListSkillGroupStatesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListSkillGroupStatesRequest::getInstanceId() const {
  return instanceId_;
}

void ListSkillGroupStatesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListSkillGroupStatesRequest::getSkillGroupIds() const {
  return skillGroupIds_;
}

void ListSkillGroupStatesRequest::setSkillGroupIds(const std::string &skillGroupIds) {
  skillGroupIds_ = skillGroupIds;
  setParameter(std::string("SkillGroupIds"), skillGroupIds);
}

int ListSkillGroupStatesRequest::getPageSize() const {
  return pageSize_;
}

void ListSkillGroupStatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

