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

#include <alibabacloud/eventbridge/model/DeleteTargetsRequest.h>

using AlibabaCloud::Eventbridge::Model::DeleteTargetsRequest;

DeleteTargetsRequest::DeleteTargetsRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "DeleteTargets") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTargetsRequest::~DeleteTargetsRequest() {}

std::vector<DeleteTargetsRequest::std::string> DeleteTargetsRequest::getTargetIds() const {
  return targetIds_;
}

void DeleteTargetsRequest::setTargetIds(const std::vector<DeleteTargetsRequest::std::string> &targetIds) {
  targetIds_ = targetIds;
  for(int dep1 = 0; dep1 != targetIds.size(); dep1++) {
    setParameter(std::string("TargetIds") + "." + std::to_string(dep1 + 1), targetIds[dep1]);
  }
}

std::string DeleteTargetsRequest::getRuleName() const {
  return ruleName_;
}

void DeleteTargetsRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DeleteTargetsRequest::getEventBusName() const {
  return eventBusName_;
}

void DeleteTargetsRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

