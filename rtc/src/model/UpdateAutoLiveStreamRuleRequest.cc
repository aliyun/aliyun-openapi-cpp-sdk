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

#include <alibabacloud/rtc/model/UpdateAutoLiveStreamRuleRequest.h>

using AlibabaCloud::Rtc::Model::UpdateAutoLiveStreamRuleRequest;

UpdateAutoLiveStreamRuleRequest::UpdateAutoLiveStreamRuleRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "UpdateAutoLiveStreamRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAutoLiveStreamRuleRequest::~UpdateAutoLiveStreamRuleRequest() {}

std::string UpdateAutoLiveStreamRuleRequest::getRuleName() const {
  return ruleName_;
}

void UpdateAutoLiveStreamRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::vector<std::string> UpdateAutoLiveStreamRuleRequest::getChannelIdPrefixes() const {
  return channelIdPrefixes_;
}

void UpdateAutoLiveStreamRuleRequest::setChannelIdPrefixes(const std::vector<std::string> &channelIdPrefixes) {
  channelIdPrefixes_ = channelIdPrefixes;
}

std::string UpdateAutoLiveStreamRuleRequest::getShowLog() const {
  return showLog_;
}

void UpdateAutoLiveStreamRuleRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

std::string UpdateAutoLiveStreamRuleRequest::getPlayDomain() const {
  return playDomain_;
}

void UpdateAutoLiveStreamRuleRequest::setPlayDomain(const std::string &playDomain) {
  playDomain_ = playDomain;
  setParameter(std::string("PlayDomain"), playDomain);
}

long UpdateAutoLiveStreamRuleRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateAutoLiveStreamRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateAutoLiveStreamRuleRequest::getAppId() const {
  return appId_;
}

void UpdateAutoLiveStreamRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateAutoLiveStreamRuleRequest::getCallBack() const {
  return callBack_;
}

void UpdateAutoLiveStreamRuleRequest::setCallBack(const std::string &callBack) {
  callBack_ = callBack;
  setParameter(std::string("CallBack"), callBack);
}

int UpdateAutoLiveStreamRuleRequest::getMediaEncode() const {
  return mediaEncode_;
}

void UpdateAutoLiveStreamRuleRequest::setMediaEncode(int mediaEncode) {
  mediaEncode_ = mediaEncode;
  setParameter(std::string("MediaEncode"), std::to_string(mediaEncode));
}

int UpdateAutoLiveStreamRuleRequest::getRuleId() const {
  return ruleId_;
}

void UpdateAutoLiveStreamRuleRequest::setRuleId(int ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

std::vector<std::string> UpdateAutoLiveStreamRuleRequest::getChannelIds() const {
  return channelIds_;
}

void UpdateAutoLiveStreamRuleRequest::setChannelIds(const std::vector<std::string> &channelIds) {
  channelIds_ = channelIds;
}

