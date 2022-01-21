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

#include <alibabacloud/cms/model/DeleteEventRuleTargetsRequest.h>

using AlibabaCloud::Cms::Model::DeleteEventRuleTargetsRequest;

DeleteEventRuleTargetsRequest::DeleteEventRuleTargetsRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DeleteEventRuleTargets") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEventRuleTargetsRequest::~DeleteEventRuleTargetsRequest() {}

std::string DeleteEventRuleTargetsRequest::getRuleName() const {
  return ruleName_;
}

void DeleteEventRuleTargetsRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::vector<std::string> DeleteEventRuleTargetsRequest::getIds() const {
  return ids_;
}

void DeleteEventRuleTargetsRequest::setIds(const std::vector<std::string> &ids) {
  ids_ = ids;
}

