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

#include <alibabacloud/config/model/GetResourceComplianceByConfigRuleRequest.h>

using AlibabaCloud::Config::Model::GetResourceComplianceByConfigRuleRequest;

GetResourceComplianceByConfigRuleRequest::GetResourceComplianceByConfigRuleRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetResourceComplianceByConfigRule") {
  setMethod(HttpRequest::Method::Get);
}

GetResourceComplianceByConfigRuleRequest::~GetResourceComplianceByConfigRuleRequest() {}

std::string GetResourceComplianceByConfigRuleRequest::getConfigRuleId() const {
  return configRuleId_;
}

void GetResourceComplianceByConfigRuleRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setParameter(std::string("ConfigRuleId"), configRuleId);
}

std::string GetResourceComplianceByConfigRuleRequest::getComplianceType() const {
  return complianceType_;
}

void GetResourceComplianceByConfigRuleRequest::setComplianceType(const std::string &complianceType) {
  complianceType_ = complianceType;
  setParameter(std::string("ComplianceType"), complianceType);
}

