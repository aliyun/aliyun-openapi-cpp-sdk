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

#include <alibabacloud/config/model/GenerateAggregateCompliancePackReportRequest.h>

using AlibabaCloud::Config::Model::GenerateAggregateCompliancePackReportRequest;

GenerateAggregateCompliancePackReportRequest::GenerateAggregateCompliancePackReportRequest()
    : RpcServiceRequest("config", "2020-09-07", "GenerateAggregateCompliancePackReport") {
  setMethod(HttpRequest::Method::Post);
}

GenerateAggregateCompliancePackReportRequest::~GenerateAggregateCompliancePackReportRequest() {}

std::string GenerateAggregateCompliancePackReportRequest::getClientToken() const {
  return clientToken_;
}

void GenerateAggregateCompliancePackReportRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string GenerateAggregateCompliancePackReportRequest::getAggregatorId() const {
  return aggregatorId_;
}

void GenerateAggregateCompliancePackReportRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

std::string GenerateAggregateCompliancePackReportRequest::getCompliancePackId() const {
  return compliancePackId_;
}

void GenerateAggregateCompliancePackReportRequest::setCompliancePackId(const std::string &compliancePackId) {
  compliancePackId_ = compliancePackId;
  setBodyParameter(std::string("CompliancePackId"), compliancePackId);
}

