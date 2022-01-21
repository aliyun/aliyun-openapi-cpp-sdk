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

#include <alibabacloud/cms/model/PutMetricRuleTargetsRequest.h>

using AlibabaCloud::Cms::Model::PutMetricRuleTargetsRequest;

PutMetricRuleTargetsRequest::PutMetricRuleTargetsRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutMetricRuleTargets") {
  setMethod(HttpRequest::Method::Post);
}

PutMetricRuleTargetsRequest::~PutMetricRuleTargetsRequest() {}

std::vector<PutMetricRuleTargetsRequest::Targets> PutMetricRuleTargetsRequest::getTargets() const {
  return targets_;
}

void PutMetricRuleTargetsRequest::setTargets(const std::vector<PutMetricRuleTargetsRequest::Targets> &targets) {
  targets_ = targets;
  for(int dep1 = 0; dep1 != targets.size(); dep1++) {
  auto targetsObj = targets.at(dep1);
  std::string targetsObjStr = std::string("Targets") + "." + std::to_string(dep1 + 1);
    setParameter(targetsObjStr + ".Level", targetsObj.level);
    setParameter(targetsObjStr + ".Id", targetsObj.id);
    setParameter(targetsObjStr + ".Arn", targetsObj.arn);
  }
}

std::string PutMetricRuleTargetsRequest::getRuleId() const {
  return ruleId_;
}

void PutMetricRuleTargetsRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

