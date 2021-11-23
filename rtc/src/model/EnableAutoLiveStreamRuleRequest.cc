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

#include <alibabacloud/rtc/model/EnableAutoLiveStreamRuleRequest.h>

using AlibabaCloud::Rtc::Model::EnableAutoLiveStreamRuleRequest;

EnableAutoLiveStreamRuleRequest::EnableAutoLiveStreamRuleRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "EnableAutoLiveStreamRule") {
  setMethod(HttpRequest::Method::Post);
}

EnableAutoLiveStreamRuleRequest::~EnableAutoLiveStreamRuleRequest() {}

std::string EnableAutoLiveStreamRuleRequest::getShowLog() const {
  return showLog_;
}

void EnableAutoLiveStreamRuleRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

long EnableAutoLiveStreamRuleRequest::getOwnerId() const {
  return ownerId_;
}

void EnableAutoLiveStreamRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EnableAutoLiveStreamRuleRequest::getAppId() const {
  return appId_;
}

void EnableAutoLiveStreamRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

long EnableAutoLiveStreamRuleRequest::getRuleId() const {
  return ruleId_;
}

void EnableAutoLiveStreamRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

