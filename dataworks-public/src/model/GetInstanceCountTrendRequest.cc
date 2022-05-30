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

#include <alibabacloud/dataworks-public/model/GetInstanceCountTrendRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetInstanceCountTrendRequest;

GetInstanceCountTrendRequest::GetInstanceCountTrendRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetInstanceCountTrend") {
  setMethod(HttpRequest::Method::Post);
}

GetInstanceCountTrendRequest::~GetInstanceCountTrendRequest() {}

std::string GetInstanceCountTrendRequest::getBeginDate() const {
  return beginDate_;
}

void GetInstanceCountTrendRequest::setBeginDate(const std::string &beginDate) {
  beginDate_ = beginDate;
  setBodyParameter(std::string("BeginDate"), beginDate);
}

std::string GetInstanceCountTrendRequest::getEndDate() const {
  return endDate_;
}

void GetInstanceCountTrendRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setBodyParameter(std::string("EndDate"), endDate);
}

long GetInstanceCountTrendRequest::getProjectId() const {
  return projectId_;
}

void GetInstanceCountTrendRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

