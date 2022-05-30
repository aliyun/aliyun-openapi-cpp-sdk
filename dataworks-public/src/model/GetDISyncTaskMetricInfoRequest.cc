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

#include <alibabacloud/dataworks-public/model/GetDISyncTaskMetricInfoRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDISyncTaskMetricInfoRequest;

GetDISyncTaskMetricInfoRequest::GetDISyncTaskMetricInfoRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetDISyncTaskMetricInfo") {
  setMethod(HttpRequest::Method::Get);
}

GetDISyncTaskMetricInfoRequest::~GetDISyncTaskMetricInfoRequest() {}

long GetDISyncTaskMetricInfoRequest::getEndDate() const {
  return endDate_;
}

void GetDISyncTaskMetricInfoRequest::setEndDate(long endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), std::to_string(endDate));
}

long GetDISyncTaskMetricInfoRequest::getStartDate() const {
  return startDate_;
}

void GetDISyncTaskMetricInfoRequest::setStartDate(long startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), std::to_string(startDate));
}

long GetDISyncTaskMetricInfoRequest::getProjectId() const {
  return projectId_;
}

void GetDISyncTaskMetricInfoRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long GetDISyncTaskMetricInfoRequest::getFileId() const {
  return fileId_;
}

void GetDISyncTaskMetricInfoRequest::setFileId(long fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), std::to_string(fileId));
}

