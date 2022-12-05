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

#include <alibabacloud/polardb/model/DescribeMaskingRulesRequest.h>

using AlibabaCloud::Polardb::Model::DescribeMaskingRulesRequest;

DescribeMaskingRulesRequest::DescribeMaskingRulesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeMaskingRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMaskingRulesRequest::~DescribeMaskingRulesRequest() {}

std::string DescribeMaskingRulesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeMaskingRulesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeMaskingRulesRequest::getRuleNameList() const {
  return ruleNameList_;
}

void DescribeMaskingRulesRequest::setRuleNameList(const std::string &ruleNameList) {
  ruleNameList_ = ruleNameList;
  setParameter(std::string("RuleNameList"), ruleNameList);
}

