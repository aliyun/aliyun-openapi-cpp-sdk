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

#include <alibabacloud/ccc/model/ListRealtimeSkillGroupStatesRequest.h>

using AlibabaCloud::CCC::Model::ListRealtimeSkillGroupStatesRequest;

ListRealtimeSkillGroupStatesRequest::ListRealtimeSkillGroupStatesRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListRealtimeSkillGroupStates") {
  setMethod(HttpRequest::Method::Post);
}

ListRealtimeSkillGroupStatesRequest::~ListRealtimeSkillGroupStatesRequest() {}

int ListRealtimeSkillGroupStatesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListRealtimeSkillGroupStatesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListRealtimeSkillGroupStatesRequest::getSkillGroupIdList() const {
  return skillGroupIdList_;
}

void ListRealtimeSkillGroupStatesRequest::setSkillGroupIdList(const std::string &skillGroupIdList) {
  skillGroupIdList_ = skillGroupIdList;
  setBodyParameter(std::string("SkillGroupIdList"), skillGroupIdList);
}

std::string ListRealtimeSkillGroupStatesRequest::getInstanceId() const {
  return instanceId_;
}

void ListRealtimeSkillGroupStatesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListRealtimeSkillGroupStatesRequest::getPageSize() const {
  return pageSize_;
}

void ListRealtimeSkillGroupStatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

