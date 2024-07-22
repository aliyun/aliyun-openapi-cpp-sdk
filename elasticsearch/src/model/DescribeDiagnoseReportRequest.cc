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

#include <alibabacloud/elasticsearch/model/DescribeDiagnoseReportRequest.h>

using AlibabaCloud::Elasticsearch::Model::DescribeDiagnoseReportRequest;

DescribeDiagnoseReportRequest::DescribeDiagnoseReportRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/diagnosis/instances/[InstanceId]/reports/[ReportId]"};
  setMethod(HttpRequest::Method::Get);
}

DescribeDiagnoseReportRequest::~DescribeDiagnoseReportRequest() {}

std::string DescribeDiagnoseReportRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDiagnoseReportRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDiagnoseReportRequest::getReportId() const {
  return reportId_;
}

void DescribeDiagnoseReportRequest::setReportId(const std::string &reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), reportId);
}

std::string DescribeDiagnoseReportRequest::getLang() const {
  return lang_;
}

void DescribeDiagnoseReportRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("lang"), lang);
}

