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

#include <alibabacloud/eventbridge/model/PutTargetsRequest.h>

using AlibabaCloud::Eventbridge::Model::PutTargetsRequest;

PutTargetsRequest::PutTargetsRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "PutTargets") {
  setMethod(HttpRequest::Method::Post);
}

PutTargetsRequest::~PutTargetsRequest() {}

std::string PutTargetsRequest::getClientToken() const {
  return clientToken_;
}

void PutTargetsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string PutTargetsRequest::getRuleName() const {
  return ruleName_;
}

void PutTargetsRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string PutTargetsRequest::getEventBusName() const {
  return eventBusName_;
}

void PutTargetsRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

std::vector<PutTargetsRequest::Targets> PutTargetsRequest::getTargets() const {
  return targets_;
}

void PutTargetsRequest::setTargets(const std::vector<PutTargetsRequest::Targets> &targets) {
  targets_ = targets;
  for(int dep1 = 0; dep1 != targets.size(); dep1++) {
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Endpoint", targets[dep1].endpoint);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".PushRetryStrategy", targets[dep1].pushRetryStrategy);
    for(int dep2 = 0; dep2 != targets[dep1].paramList.size(); dep2++) {
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".ParamList." + std::to_string(dep2 + 1) + ".Template", targets[dep1].paramList[dep2]._template);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".ParamList." + std::to_string(dep2 + 1) + ".ResourceKey", targets[dep1].paramList[dep2].resourceKey);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".ParamList." + std::to_string(dep2 + 1) + ".Form", targets[dep1].paramList[dep2].form);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".ParamList." + std::to_string(dep2 + 1) + ".Value", targets[dep1].paramList[dep2].value);
    }
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Id", targets[dep1].id);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".DeadLetterQueue.Arn", targets[dep1].deadLetterQueue.arn);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Type", targets[dep1].type);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".ErrorsTolerance", targets[dep1].errorsTolerance);
  }
}

