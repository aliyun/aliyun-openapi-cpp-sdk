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

#include <alibabacloud/ecs/model/DeleteDiagnosticReportsRequest.h>

using AlibabaCloud::Ecs::Model::DeleteDiagnosticReportsRequest;

DeleteDiagnosticReportsRequest::DeleteDiagnosticReportsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteDiagnosticReports") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDiagnosticReportsRequest::~DeleteDiagnosticReportsRequest() {}

std::string DeleteDiagnosticReportsRequest::getRegionId() const {
  return regionId_;
}

void DeleteDiagnosticReportsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> DeleteDiagnosticReportsRequest::getReportIds() const {
  return reportIds_;
}

void DeleteDiagnosticReportsRequest::setReportIds(const std::vector<std::string> &reportIds) {
  reportIds_ = reportIds;
}

