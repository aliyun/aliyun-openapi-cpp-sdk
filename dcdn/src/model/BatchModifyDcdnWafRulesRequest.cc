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

#include <alibabacloud/dcdn/model/BatchModifyDcdnWafRulesRequest.h>

using AlibabaCloud::Dcdn::Model::BatchModifyDcdnWafRulesRequest;

BatchModifyDcdnWafRulesRequest::BatchModifyDcdnWafRulesRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchModifyDcdnWafRules") {
  setMethod(HttpRequest::Method::Post);
}

BatchModifyDcdnWafRulesRequest::~BatchModifyDcdnWafRulesRequest() {}

long BatchModifyDcdnWafRulesRequest::getPolicyId() const {
  return policyId_;
}

void BatchModifyDcdnWafRulesRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setBodyParameter(std::string("PolicyId"), std::to_string(policyId));
}

std::string BatchModifyDcdnWafRulesRequest::getRuleConfigs() const {
  return ruleConfigs_;
}

void BatchModifyDcdnWafRulesRequest::setRuleConfigs(const std::string &ruleConfigs) {
  ruleConfigs_ = ruleConfigs;
  setBodyParameter(std::string("RuleConfigs"), ruleConfigs);
}

