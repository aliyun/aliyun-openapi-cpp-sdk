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

#include <alibabacloud/config/model/GenerateCompliancePackReportRequest.h>

using AlibabaCloud::Config::Model::GenerateCompliancePackReportRequest;

GenerateCompliancePackReportRequest::GenerateCompliancePackReportRequest()
    : RpcServiceRequest("config", "2020-09-07", "GenerateCompliancePackReport") {
  setMethod(HttpRequest::Method::Post);
}

GenerateCompliancePackReportRequest::~GenerateCompliancePackReportRequest() {}

std::string GenerateCompliancePackReportRequest::getClientToken() const {
  return clientToken_;
}

void GenerateCompliancePackReportRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string GenerateCompliancePackReportRequest::getCompliancePackId() const {
  return compliancePackId_;
}

void GenerateCompliancePackReportRequest::setCompliancePackId(const std::string &compliancePackId) {
  compliancePackId_ = compliancePackId;
  setBodyParameter(std::string("CompliancePackId"), compliancePackId);
}

