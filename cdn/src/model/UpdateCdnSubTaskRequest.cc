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

#include <alibabacloud/cdn/model/UpdateCdnSubTaskRequest.h>

using AlibabaCloud::Cdn::Model::UpdateCdnSubTaskRequest;

UpdateCdnSubTaskRequest::UpdateCdnSubTaskRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "UpdateCdnSubTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCdnSubTaskRequest::~UpdateCdnSubTaskRequest() {}

std::string UpdateCdnSubTaskRequest::getStartTime() const {
  return startTime_;
}

void UpdateCdnSubTaskRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string UpdateCdnSubTaskRequest::getDomainName() const {
  return domainName_;
}

void UpdateCdnSubTaskRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setBodyParameter(std::string("DomainName"), domainName);
}

std::string UpdateCdnSubTaskRequest::getEndTime() const {
  return endTime_;
}

void UpdateCdnSubTaskRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

long UpdateCdnSubTaskRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateCdnSubTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateCdnSubTaskRequest::getReportIds() const {
  return reportIds_;
}

void UpdateCdnSubTaskRequest::setReportIds(const std::string &reportIds) {
  reportIds_ = reportIds;
  setBodyParameter(std::string("ReportIds"), reportIds);
}

