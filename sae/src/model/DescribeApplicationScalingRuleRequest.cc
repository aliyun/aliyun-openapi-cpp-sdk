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

#include <alibabacloud/sae/model/DescribeApplicationScalingRuleRequest.h>

using AlibabaCloud::Sae::Model::DescribeApplicationScalingRuleRequest;

DescribeApplicationScalingRuleRequest::DescribeApplicationScalingRuleRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/scale/applicationScalingRule"};
  setMethod(HttpRequest::Method::Get);
}

DescribeApplicationScalingRuleRequest::~DescribeApplicationScalingRuleRequest() {}

std::string DescribeApplicationScalingRuleRequest::getScalingRuleName() const {
  return scalingRuleName_;
}

void DescribeApplicationScalingRuleRequest::setScalingRuleName(const std::string &scalingRuleName) {
  scalingRuleName_ = scalingRuleName;
  setParameter(std::string("ScalingRuleName"), scalingRuleName);
}

std::string DescribeApplicationScalingRuleRequest::getAppId() const {
  return appId_;
}

void DescribeApplicationScalingRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

