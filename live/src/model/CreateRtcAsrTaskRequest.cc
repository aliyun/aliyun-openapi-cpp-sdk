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

#include <alibabacloud/live/model/CreateRtcAsrTaskRequest.h>

using AlibabaCloud::Live::Model::CreateRtcAsrTaskRequest;

CreateRtcAsrTaskRequest::CreateRtcAsrTaskRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateRtcAsrTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateRtcAsrTaskRequest::~CreateRtcAsrTaskRequest() {}

std::string CreateRtcAsrTaskRequest::getAuthKey() const {
  return authKey_;
}

void CreateRtcAsrTaskRequest::setAuthKey(const std::string &authKey) {
  authKey_ = authKey;
  setParameter(std::string("AuthKey"), authKey);
}

std::string CreateRtcAsrTaskRequest::getLanguage() const {
  return language_;
}

void CreateRtcAsrTaskRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string CreateRtcAsrTaskRequest::getMode() const {
  return mode_;
}

void CreateRtcAsrTaskRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string CreateRtcAsrTaskRequest::getRegionId() const {
  return regionId_;
}

void CreateRtcAsrTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateRtcAsrTaskRequest::getTranslateEnabled() const {
  return translateEnabled_;
}

void CreateRtcAsrTaskRequest::setTranslateEnabled(bool translateEnabled) {
  translateEnabled_ = translateEnabled;
  setParameter(std::string("TranslateEnabled"), translateEnabled ? "true" : "false");
}

std::string CreateRtcAsrTaskRequest::getTag() const {
  return tag_;
}

void CreateRtcAsrTaskRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::string CreateRtcAsrTaskRequest::getStreamURL() const {
  return streamURL_;
}

void CreateRtcAsrTaskRequest::setStreamURL(const std::string &streamURL) {
  streamURL_ = streamURL;
  setParameter(std::string("StreamURL"), streamURL);
}

std::string CreateRtcAsrTaskRequest::getTargetLanguages() const {
  return targetLanguages_;
}

void CreateRtcAsrTaskRequest::setTargetLanguages(const std::string &targetLanguages) {
  targetLanguages_ = targetLanguages;
  setParameter(std::string("TargetLanguages"), targetLanguages);
}

bool CreateRtcAsrTaskRequest::getAutoTerminateEnabled() const {
  return autoTerminateEnabled_;
}

void CreateRtcAsrTaskRequest::setAutoTerminateEnabled(bool autoTerminateEnabled) {
  autoTerminateEnabled_ = autoTerminateEnabled;
  setParameter(std::string("AutoTerminateEnabled"), autoTerminateEnabled ? "true" : "false");
}

long CreateRtcAsrTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateRtcAsrTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateRtcAsrTaskRequest::getRtcUserId() const {
  return rtcUserId_;
}

void CreateRtcAsrTaskRequest::setRtcUserId(const std::string &rtcUserId) {
  rtcUserId_ = rtcUserId;
  setParameter(std::string("RtcUserId"), rtcUserId);
}

long CreateRtcAsrTaskRequest::getReportInterval() const {
  return reportInterval_;
}

void CreateRtcAsrTaskRequest::setReportInterval(long reportInterval) {
  reportInterval_ = reportInterval;
  setParameter(std::string("ReportInterval"), std::to_string(reportInterval));
}

long CreateRtcAsrTaskRequest::getAutoTerminateDelay() const {
  return autoTerminateDelay_;
}

void CreateRtcAsrTaskRequest::setAutoTerminateDelay(long autoTerminateDelay) {
  autoTerminateDelay_ = autoTerminateDelay;
  setParameter(std::string("AutoTerminateDelay"), std::to_string(autoTerminateDelay));
}

std::string CreateRtcAsrTaskRequest::getSDKAppID() const {
  return sDKAppID_;
}

void CreateRtcAsrTaskRequest::setSDKAppID(const std::string &sDKAppID) {
  sDKAppID_ = sDKAppID;
  setParameter(std::string("SDKAppID"), sDKAppID);
}

std::string CreateRtcAsrTaskRequest::getCallbackURL() const {
  return callbackURL_;
}

void CreateRtcAsrTaskRequest::setCallbackURL(const std::string &callbackURL) {
  callbackURL_ = callbackURL;
  setParameter(std::string("CallbackURL"), callbackURL);
}

std::string CreateRtcAsrTaskRequest::getChannelID() const {
  return channelID_;
}

void CreateRtcAsrTaskRequest::setChannelID(const std::string &channelID) {
  channelID_ = channelID;
  setParameter(std::string("ChannelID"), channelID);
}

