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

#include <alibabacloud/dcdn/model/BatchCreateDcdnWafRulesRequest.h>

using AlibabaCloud::Dcdn::Model::BatchCreateDcdnWafRulesRequest;

BatchCreateDcdnWafRulesRequest::BatchCreateDcdnWafRulesRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchCreateDcdnWafRules") {
  setMethod(HttpRequest::Method::Post);
}

BatchCreateDcdnWafRulesRequest::~BatchCreateDcdnWafRulesRequest() {}

long BatchCreateDcdnWafRulesRequest::getPolicyId() const {
  return policyId_;
}

void BatchCreateDcdnWafRulesRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setBodyParameter(std::string("PolicyId"), std::to_string(policyId));
}

std::string BatchCreateDcdnWafRulesRequest::getRuleConfigs() const {
  return ruleConfigs_;
}

void BatchCreateDcdnWafRulesRequest::setRuleConfigs(const std::string &ruleConfigs) {
  ruleConfigs_ = ruleConfigs;
  setBodyParameter(std::string("RuleConfigs"), ruleConfigs);
}

