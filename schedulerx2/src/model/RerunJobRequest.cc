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

#include <alibabacloud/schedulerx2/model/RerunJobRequest.h>

using AlibabaCloud::Schedulerx2::Model::RerunJobRequest;

RerunJobRequest::RerunJobRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "RerunJob") {
  setMethod(HttpRequest::Method::Post);
}

RerunJobRequest::~RerunJobRequest() {}

std::string RerunJobRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void RerunJobRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setBodyParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string RerunJobRequest::getDataTime() const {
  return dataTime_;
}

void RerunJobRequest::setDataTime(const std::string &dataTime) {
  dataTime_ = dataTime;
  setBodyParameter(std::string("DataTime"), dataTime);
}

long RerunJobRequest::getStartDate() const {
  return startDate_;
}

void RerunJobRequest::setStartDate(long startDate) {
  startDate_ = startDate;
  setBodyParameter(std::string("StartDate"), std::to_string(startDate));
}

long RerunJobRequest::getJobId() const {
  return jobId_;
}

void RerunJobRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), std::to_string(jobId));
}

std::string RerunJobRequest::getRegionId() const {
  return regionId_;
}

void RerunJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string RerunJobRequest::getGroupId() const {
  return groupId_;
}

void RerunJobRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

long RerunJobRequest::getEndDate() const {
  return endDate_;
}

void RerunJobRequest::setEndDate(long endDate) {
  endDate_ = endDate;
  setBodyParameter(std::string("EndDate"), std::to_string(endDate));
}

std::string RerunJobRequest::get_Namespace() const {
  return _namespace_;
}

void RerunJobRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setBodyParameter(std::string("Namespace"), _namespace);
}

