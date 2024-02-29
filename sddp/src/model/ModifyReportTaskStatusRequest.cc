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

#include <alibabacloud/sddp/model/ModifyReportTaskStatusRequest.h>

using AlibabaCloud::Sddp::Model::ModifyReportTaskStatusRequest;

ModifyReportTaskStatusRequest::ModifyReportTaskStatusRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "ModifyReportTaskStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyReportTaskStatusRequest::~ModifyReportTaskStatusRequest() {}

int ModifyReportTaskStatusRequest::getFeatureType() const {
  return featureType_;
}

void ModifyReportTaskStatusRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string ModifyReportTaskStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyReportTaskStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyReportTaskStatusRequest::getReportTaskStatus() const {
  return reportTaskStatus_;
}

void ModifyReportTaskStatusRequest::setReportTaskStatus(int reportTaskStatus) {
  reportTaskStatus_ = reportTaskStatus;
  setParameter(std::string("ReportTaskStatus"), std::to_string(reportTaskStatus));
}

std::string ModifyReportTaskStatusRequest::getLang() const {
  return lang_;
}

void ModifyReportTaskStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

