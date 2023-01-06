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

#include <alibabacloud/ecs/model/DescribeDiagnosticReportAttributesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDiagnosticReportAttributesRequest;

DescribeDiagnosticReportAttributesRequest::DescribeDiagnosticReportAttributesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeDiagnosticReportAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiagnosticReportAttributesRequest::~DescribeDiagnosticReportAttributesRequest() {}

std::string DescribeDiagnosticReportAttributesRequest::getReportId() const {
  return reportId_;
}

void DescribeDiagnosticReportAttributesRequest::setReportId(const std::string &reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), reportId);
}

std::string DescribeDiagnosticReportAttributesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiagnosticReportAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

