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

#include <alibabacloud/rtc/model/CreateAutoLiveStreamRuleRequest.h>

using AlibabaCloud::Rtc::Model::CreateAutoLiveStreamRuleRequest;

CreateAutoLiveStreamRuleRequest::CreateAutoLiveStreamRuleRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "CreateAutoLiveStreamRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateAutoLiveStreamRuleRequest::~CreateAutoLiveStreamRuleRequest() {}

std::string CreateAutoLiveStreamRuleRequest::getRuleName() const {
  return ruleName_;
}

void CreateAutoLiveStreamRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::vector<std::string> CreateAutoLiveStreamRuleRequest::getChannelIdPrefixes() const {
  return channelIdPrefixes_;
}

void CreateAutoLiveStreamRuleRequest::setChannelIdPrefixes(const std::vector<std::string> &channelIdPrefixes) {
  channelIdPrefixes_ = channelIdPrefixes;
}

std::string CreateAutoLiveStreamRuleRequest::getShowLog() const {
  return showLog_;
}

void CreateAutoLiveStreamRuleRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

std::string CreateAutoLiveStreamRuleRequest::getPlayDomain() const {
  return playDomain_;
}

void CreateAutoLiveStreamRuleRequest::setPlayDomain(const std::string &playDomain) {
  playDomain_ = playDomain;
  setParameter(std::string("PlayDomain"), playDomain);
}

long CreateAutoLiveStreamRuleRequest::getOwnerId() const {
  return ownerId_;
}

void CreateAutoLiveStreamRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateAutoLiveStreamRuleRequest::getAppId() const {
  return appId_;
}

void CreateAutoLiveStreamRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateAutoLiveStreamRuleRequest::getCallBack() const {
  return callBack_;
}

void CreateAutoLiveStreamRuleRequest::setCallBack(const std::string &callBack) {
  callBack_ = callBack;
  setParameter(std::string("CallBack"), callBack);
}

int CreateAutoLiveStreamRuleRequest::getMediaEncode() const {
  return mediaEncode_;
}

void CreateAutoLiveStreamRuleRequest::setMediaEncode(int mediaEncode) {
  mediaEncode_ = mediaEncode;
  setParameter(std::string("MediaEncode"), std::to_string(mediaEncode));
}

std::vector<std::string> CreateAutoLiveStreamRuleRequest::getChannelIds() const {
  return channelIds_;
}

void CreateAutoLiveStreamRuleRequest::setChannelIds(const std::vector<std::string> &channelIds) {
  channelIds_ = channelIds;
}

