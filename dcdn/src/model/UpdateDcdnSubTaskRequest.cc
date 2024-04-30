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

#include <alibabacloud/dcdn/model/UpdateDcdnSubTaskRequest.h>

using AlibabaCloud::Dcdn::Model::UpdateDcdnSubTaskRequest;

UpdateDcdnSubTaskRequest::UpdateDcdnSubTaskRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "UpdateDcdnSubTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDcdnSubTaskRequest::~UpdateDcdnSubTaskRequest() {}

std::string UpdateDcdnSubTaskRequest::getReportIds() const {
  return reportIds_;
}

void UpdateDcdnSubTaskRequest::setReportIds(const std::string &reportIds) {
  reportIds_ = reportIds;
  setBodyParameter(std::string("ReportIds"), reportIds);
}

std::string UpdateDcdnSubTaskRequest::getDomainName() const {
  return domainName_;
}

void UpdateDcdnSubTaskRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setBodyParameter(std::string("DomainName"), domainName);
}

std::string UpdateDcdnSubTaskRequest::getEndTime() const {
  return endTime_;
}

void UpdateDcdnSubTaskRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string UpdateDcdnSubTaskRequest::getStartTime() const {
  return startTime_;
}

void UpdateDcdnSubTaskRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

