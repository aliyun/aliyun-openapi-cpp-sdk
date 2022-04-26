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

#include <alibabacloud/ccc/model/ListSkillGroupSummaryReportsSinceMidnightRequest.h>

using AlibabaCloud::CCC::Model::ListSkillGroupSummaryReportsSinceMidnightRequest;

ListSkillGroupSummaryReportsSinceMidnightRequest::ListSkillGroupSummaryReportsSinceMidnightRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListSkillGroupSummaryReportsSinceMidnight") {
  setMethod(HttpRequest::Method::Get);
}

ListSkillGroupSummaryReportsSinceMidnightRequest::~ListSkillGroupSummaryReportsSinceMidnightRequest() {}

int ListSkillGroupSummaryReportsSinceMidnightRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSkillGroupSummaryReportsSinceMidnightRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSkillGroupSummaryReportsSinceMidnightRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListSkillGroupSummaryReportsSinceMidnightRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListSkillGroupSummaryReportsSinceMidnightRequest::getInstanceId() const {
  return instanceId_;
}

void ListSkillGroupSummaryReportsSinceMidnightRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListSkillGroupSummaryReportsSinceMidnightRequest::getSkillGroups() const {
  return skillGroups_;
}

void ListSkillGroupSummaryReportsSinceMidnightRequest::setSkillGroups(const std::string &skillGroups) {
  skillGroups_ = skillGroups;
  setParameter(std::string("SkillGroups"), skillGroups);
}

int ListSkillGroupSummaryReportsSinceMidnightRequest::getPageSize() const {
  return pageSize_;
}

void ListSkillGroupSummaryReportsSinceMidnightRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

