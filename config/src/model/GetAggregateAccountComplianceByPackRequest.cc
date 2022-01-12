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

#include <alibabacloud/config/model/GetAggregateAccountComplianceByPackRequest.h>

using AlibabaCloud::Config::Model::GetAggregateAccountComplianceByPackRequest;

GetAggregateAccountComplianceByPackRequest::GetAggregateAccountComplianceByPackRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetAggregateAccountComplianceByPack") {
  setMethod(HttpRequest::Method::Get);
}

GetAggregateAccountComplianceByPackRequest::~GetAggregateAccountComplianceByPackRequest() {}

std::string GetAggregateAccountComplianceByPackRequest::getAggregatorId() const {
  return aggregatorId_;
}

void GetAggregateAccountComplianceByPackRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string GetAggregateAccountComplianceByPackRequest::getCompliancePackId() const {
  return compliancePackId_;
}

void GetAggregateAccountComplianceByPackRequest::setCompliancePackId(const std::string &compliancePackId) {
  compliancePackId_ = compliancePackId;
  setParameter(std::string("CompliancePackId"), compliancePackId);
}

