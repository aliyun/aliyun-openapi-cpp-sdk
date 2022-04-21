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

#include <alibabacloud/outboundbot/model/ModifyEmptyNumberNoMoreCallsInfoRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyEmptyNumberNoMoreCallsInfoRequest;

ModifyEmptyNumberNoMoreCallsInfoRequest::ModifyEmptyNumberNoMoreCallsInfoRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyEmptyNumberNoMoreCallsInfo") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEmptyNumberNoMoreCallsInfoRequest::~ModifyEmptyNumberNoMoreCallsInfoRequest() {}

int ModifyEmptyNumberNoMoreCallsInfoRequest::getStrategyLevel() const {
  return strategyLevel_;
}

void ModifyEmptyNumberNoMoreCallsInfoRequest::setStrategyLevel(int strategyLevel) {
  strategyLevel_ = strategyLevel;
  setParameter(std::string("StrategyLevel"), std::to_string(strategyLevel));
}

bool ModifyEmptyNumberNoMoreCallsInfoRequest::getEmptyNumberNoMoreCalls() const {
  return emptyNumberNoMoreCalls_;
}

void ModifyEmptyNumberNoMoreCallsInfoRequest::setEmptyNumberNoMoreCalls(bool emptyNumberNoMoreCalls) {
  emptyNumberNoMoreCalls_ = emptyNumberNoMoreCalls;
  setParameter(std::string("EmptyNumberNoMoreCalls"), emptyNumberNoMoreCalls ? "true" : "false");
}

std::string ModifyEmptyNumberNoMoreCallsInfoRequest::getEntryId() const {
  return entryId_;
}

void ModifyEmptyNumberNoMoreCallsInfoRequest::setEntryId(const std::string &entryId) {
  entryId_ = entryId;
  setParameter(std::string("EntryId"), entryId);
}

