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

#include <alibabacloud/ccc/model/ListHistoricalSkillGroupReportRequest.h>

using AlibabaCloud::CCC::Model::ListHistoricalSkillGroupReportRequest;

ListHistoricalSkillGroupReportRequest::ListHistoricalSkillGroupReportRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListHistoricalSkillGroupReport") {
  setMethod(HttpRequest::Method::Post);
}

ListHistoricalSkillGroupReportRequest::~ListHistoricalSkillGroupReportRequest() {}

long ListHistoricalSkillGroupReportRequest::getEndTime() const {
  return endTime_;
}

void ListHistoricalSkillGroupReportRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListHistoricalSkillGroupReportRequest::getStartTime() const {
  return startTime_;
}

void ListHistoricalSkillGroupReportRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListHistoricalSkillGroupReportRequest::getPageNumber() const {
  return pageNumber_;
}

void ListHistoricalSkillGroupReportRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListHistoricalSkillGroupReportRequest::getSkillGroupIdList() const {
  return skillGroupIdList_;
}

void ListHistoricalSkillGroupReportRequest::setSkillGroupIdList(const std::string &skillGroupIdList) {
  skillGroupIdList_ = skillGroupIdList;
  setBodyParameter(std::string("SkillGroupIdList"), skillGroupIdList);
}

std::string ListHistoricalSkillGroupReportRequest::getInstanceId() const {
  return instanceId_;
}

void ListHistoricalSkillGroupReportRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListHistoricalSkillGroupReportRequest::getPageSize() const {
  return pageSize_;
}

void ListHistoricalSkillGroupReportRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

