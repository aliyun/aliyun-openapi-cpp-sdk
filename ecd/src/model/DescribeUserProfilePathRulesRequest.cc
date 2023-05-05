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

#include <alibabacloud/ecd/model/DescribeUserProfilePathRulesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeUserProfilePathRulesRequest;

DescribeUserProfilePathRulesRequest::DescribeUserProfilePathRulesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeUserProfilePathRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUserProfilePathRulesRequest::~DescribeUserProfilePathRulesRequest() {}

std::string DescribeUserProfilePathRulesRequest::getRuleType() const {
  return ruleType_;
}

void DescribeUserProfilePathRulesRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), ruleType);
}

std::string DescribeUserProfilePathRulesRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void DescribeUserProfilePathRulesRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string DescribeUserProfilePathRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeUserProfilePathRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

