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

#include <alibabacloud/dts/model/DescribeCheckJobsRequest.h>

using AlibabaCloud::Dts::Model::DescribeCheckJobsRequest;

DescribeCheckJobsRequest::DescribeCheckJobsRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeCheckJobs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCheckJobsRequest::~DescribeCheckJobsRequest() {}

int DescribeCheckJobsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCheckJobsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeCheckJobsRequest::getCheckType() const {
  return checkType_;
}

void DescribeCheckJobsRequest::setCheckType(int checkType) {
  checkType_ = checkType;
  setParameter(std::string("CheckType"), std::to_string(checkType));
}

std::string DescribeCheckJobsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeCheckJobsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeCheckJobsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCheckJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCheckJobsRequest::getJobName() const {
  return jobName_;
}

void DescribeCheckJobsRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setParameter(std::string("JobName"), jobName);
}

