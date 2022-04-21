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

#include <alibabacloud/outboundbot/model/SaveEffectiveDaysRequest.h>

using AlibabaCloud::OutboundBot::Model::SaveEffectiveDaysRequest;

SaveEffectiveDaysRequest::SaveEffectiveDaysRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "SaveEffectiveDays") {
  setMethod(HttpRequest::Method::Post);
}

SaveEffectiveDaysRequest::~SaveEffectiveDaysRequest() {}

int SaveEffectiveDaysRequest::getEffectiveDays() const {
  return effectiveDays_;
}

void SaveEffectiveDaysRequest::setEffectiveDays(int effectiveDays) {
  effectiveDays_ = effectiveDays;
  setParameter(std::string("EffectiveDays"), std::to_string(effectiveDays));
}

int SaveEffectiveDaysRequest::getStrategyLevel() const {
  return strategyLevel_;
}

void SaveEffectiveDaysRequest::setStrategyLevel(int strategyLevel) {
  strategyLevel_ = strategyLevel;
  setParameter(std::string("StrategyLevel"), std::to_string(strategyLevel));
}

std::string SaveEffectiveDaysRequest::getEntryId() const {
  return entryId_;
}

void SaveEffectiveDaysRequest::setEntryId(const std::string &entryId) {
  entryId_ = entryId;
  setParameter(std::string("EntryId"), entryId);
}

