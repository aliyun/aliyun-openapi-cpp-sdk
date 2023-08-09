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

#include <alibabacloud/config/model/CopyConfigRulesRequest.h>

using AlibabaCloud::Config::Model::CopyConfigRulesRequest;

CopyConfigRulesRequest::CopyConfigRulesRequest()
    : RpcServiceRequest("config", "2020-09-07", "CopyConfigRules") {
  setMethod(HttpRequest::Method::Post);
}

CopyConfigRulesRequest::~CopyConfigRulesRequest() {}

std::string CopyConfigRulesRequest::getDesAggregatorIds() const {
  return desAggregatorIds_;
}

void CopyConfigRulesRequest::setDesAggregatorIds(const std::string &desAggregatorIds) {
  desAggregatorIds_ = desAggregatorIds;
  setParameter(std::string("DesAggregatorIds"), desAggregatorIds);
}

std::string CopyConfigRulesRequest::getSrcConfigRuleIds() const {
  return srcConfigRuleIds_;
}

void CopyConfigRulesRequest::setSrcConfigRuleIds(const std::string &srcConfigRuleIds) {
  srcConfigRuleIds_ = srcConfigRuleIds;
  setParameter(std::string("SrcConfigRuleIds"), srcConfigRuleIds);
}

std::string CopyConfigRulesRequest::getSrcAggregatorId() const {
  return srcAggregatorId_;
}

void CopyConfigRulesRequest::setSrcAggregatorId(const std::string &srcAggregatorId) {
  srcAggregatorId_ = srcAggregatorId;
  setParameter(std::string("SrcAggregatorId"), srcAggregatorId);
}

