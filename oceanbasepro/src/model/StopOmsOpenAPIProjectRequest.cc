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

#include <alibabacloud/oceanbasepro/model/StopOmsOpenAPIProjectRequest.h>

using AlibabaCloud::OceanBasePro::Model::StopOmsOpenAPIProjectRequest;

StopOmsOpenAPIProjectRequest::StopOmsOpenAPIProjectRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "StopOmsOpenAPIProject") {
  setMethod(HttpRequest::Method::Post);
}

StopOmsOpenAPIProjectRequest::~StopOmsOpenAPIProjectRequest() {}

int StopOmsOpenAPIProjectRequest::getPageNumber() const {
  return pageNumber_;
}

void StopOmsOpenAPIProjectRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int StopOmsOpenAPIProjectRequest::getPageSize() const {
  return pageSize_;
}

void StopOmsOpenAPIProjectRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string StopOmsOpenAPIProjectRequest::getWorkerGradeId() const {
  return workerGradeId_;
}

void StopOmsOpenAPIProjectRequest::setWorkerGradeId(const std::string &workerGradeId) {
  workerGradeId_ = workerGradeId;
  setBodyParameter(std::string("WorkerGradeId"), workerGradeId);
}

std::string StopOmsOpenAPIProjectRequest::getProjectId() const {
  return projectId_;
}

void StopOmsOpenAPIProjectRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

