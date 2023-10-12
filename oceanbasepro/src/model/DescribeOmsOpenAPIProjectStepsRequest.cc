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

#include <alibabacloud/oceanbasepro/model/DescribeOmsOpenAPIProjectStepsRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeOmsOpenAPIProjectStepsRequest;

DescribeOmsOpenAPIProjectStepsRequest::DescribeOmsOpenAPIProjectStepsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeOmsOpenAPIProjectSteps") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOmsOpenAPIProjectStepsRequest::~DescribeOmsOpenAPIProjectStepsRequest() {}

int DescribeOmsOpenAPIProjectStepsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeOmsOpenAPIProjectStepsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeOmsOpenAPIProjectStepsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeOmsOpenAPIProjectStepsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeOmsOpenAPIProjectStepsRequest::getWorkerGradeId() const {
  return workerGradeId_;
}

void DescribeOmsOpenAPIProjectStepsRequest::setWorkerGradeId(const std::string &workerGradeId) {
  workerGradeId_ = workerGradeId;
  setBodyParameter(std::string("WorkerGradeId"), workerGradeId);
}

std::string DescribeOmsOpenAPIProjectStepsRequest::getProjectId() const {
  return projectId_;
}

void DescribeOmsOpenAPIProjectStepsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

