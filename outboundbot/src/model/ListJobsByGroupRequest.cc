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

#include <alibabacloud/outboundbot/model/ListJobsByGroupRequest.h>

using AlibabaCloud::OutboundBot::Model::ListJobsByGroupRequest;

ListJobsByGroupRequest::ListJobsByGroupRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListJobsByGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListJobsByGroupRequest::~ListJobsByGroupRequest() {}

std::string ListJobsByGroupRequest::getJobStatus() const {
  return jobStatus_;
}

void ListJobsByGroupRequest::setJobStatus(const std::string &jobStatus) {
  jobStatus_ = jobStatus;
  setParameter(std::string("JobStatus"), jobStatus);
}

int ListJobsByGroupRequest::getPageNumber() const {
  return pageNumber_;
}

void ListJobsByGroupRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListJobsByGroupRequest::getInstanceId() const {
  return instanceId_;
}

void ListJobsByGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListJobsByGroupRequest::getJobFailureReason() const {
  return jobFailureReason_;
}

void ListJobsByGroupRequest::setJobFailureReason(const std::string &jobFailureReason) {
  jobFailureReason_ = jobFailureReason;
  setParameter(std::string("JobFailureReason"), jobFailureReason);
}

std::string ListJobsByGroupRequest::getJobGroupId() const {
  return jobGroupId_;
}

void ListJobsByGroupRequest::setJobGroupId(const std::string &jobGroupId) {
  jobGroupId_ = jobGroupId;
  setParameter(std::string("JobGroupId"), jobGroupId);
}

int ListJobsByGroupRequest::getPageSize() const {
  return pageSize_;
}

void ListJobsByGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

