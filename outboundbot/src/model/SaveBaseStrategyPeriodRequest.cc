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

#include <alibabacloud/outboundbot/model/SaveBaseStrategyPeriodRequest.h>

using AlibabaCloud::OutboundBot::Model::SaveBaseStrategyPeriodRequest;

SaveBaseStrategyPeriodRequest::SaveBaseStrategyPeriodRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "SaveBaseStrategyPeriod") {
  setMethod(HttpRequest::Method::Post);
}

SaveBaseStrategyPeriodRequest::~SaveBaseStrategyPeriodRequest() {}

int SaveBaseStrategyPeriodRequest::getStrategyLevel() const {
  return strategyLevel_;
}

void SaveBaseStrategyPeriodRequest::setStrategyLevel(int strategyLevel) {
  strategyLevel_ = strategyLevel;
  setParameter(std::string("StrategyLevel"), std::to_string(strategyLevel));
}

std::string SaveBaseStrategyPeriodRequest::getEntryId() const {
  return entryId_;
}

void SaveBaseStrategyPeriodRequest::setEntryId(const std::string &entryId) {
  entryId_ = entryId;
  setParameter(std::string("EntryId"), entryId);
}

bool SaveBaseStrategyPeriodRequest::getOnlyWeekdays() const {
  return onlyWeekdays_;
}

void SaveBaseStrategyPeriodRequest::setOnlyWeekdays(bool onlyWeekdays) {
  onlyWeekdays_ = onlyWeekdays;
  setParameter(std::string("OnlyWeekdays"), onlyWeekdays ? "true" : "false");
}

std::string SaveBaseStrategyPeriodRequest::getWorkingTimeFramesJson() const {
  return workingTimeFramesJson_;
}

void SaveBaseStrategyPeriodRequest::setWorkingTimeFramesJson(const std::string &workingTimeFramesJson) {
  workingTimeFramesJson_ = workingTimeFramesJson;
  setParameter(std::string("WorkingTimeFramesJson"), workingTimeFramesJson);
}

std::vector<std::string> SaveBaseStrategyPeriodRequest::getWorkingTime() const {
  return workingTime_;
}

void SaveBaseStrategyPeriodRequest::setWorkingTime(const std::vector<std::string> &workingTime) {
  workingTime_ = workingTime;
}

