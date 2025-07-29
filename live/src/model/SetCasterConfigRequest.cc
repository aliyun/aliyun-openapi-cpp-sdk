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

#include <alibabacloud/live/model/SetCasterConfigRequest.h>

using AlibabaCloud::Live::Model::SetCasterConfigRequest;

SetCasterConfigRequest::SetCasterConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetCasterConfig") {
  setMethod(HttpRequest::Method::Post);
}

SetCasterConfigRequest::~SetCasterConfigRequest() {}

int SetCasterConfigRequest::getChannelEnable() const {
  return channelEnable_;
}

void SetCasterConfigRequest::setChannelEnable(int channelEnable) {
  channelEnable_ = channelEnable;
  setParameter(std::string("ChannelEnable"), std::to_string(channelEnable));
}

int SetCasterConfigRequest::getProgramEffect() const {
  return programEffect_;
}

void SetCasterConfigRequest::setProgramEffect(int programEffect) {
  programEffect_ = programEffect;
  setParameter(std::string("ProgramEffect"), std::to_string(programEffect));
}

std::string SetCasterConfigRequest::getProgramName() const {
  return programName_;
}

void SetCasterConfigRequest::setProgramName(const std::string &programName) {
  programName_ = programName;
  setParameter(std::string("ProgramName"), programName);
}

std::string SetCasterConfigRequest::getUrgentImageUrl() const {
  return urgentImageUrl_;
}

void SetCasterConfigRequest::setUrgentImageUrl(const std::string &urgentImageUrl) {
  urgentImageUrl_ = urgentImageUrl;
  setParameter(std::string("UrgentImageUrl"), urgentImageUrl);
}

std::string SetCasterConfigRequest::getRecordConfig() const {
  return recordConfig_;
}

void SetCasterConfigRequest::setRecordConfig(const std::string &recordConfig) {
  recordConfig_ = recordConfig;
  setParameter(std::string("RecordConfig"), recordConfig);
}

std::string SetCasterConfigRequest::getUrgentMaterialId() const {
  return urgentMaterialId_;
}

void SetCasterConfigRequest::setUrgentMaterialId(const std::string &urgentMaterialId) {
  urgentMaterialId_ = urgentMaterialId;
  setParameter(std::string("UrgentMaterialId"), urgentMaterialId);
}

std::string SetCasterConfigRequest::getTranscodeConfig() const {
  return transcodeConfig_;
}

void SetCasterConfigRequest::setTranscodeConfig(const std::string &transcodeConfig) {
  transcodeConfig_ = transcodeConfig;
  setParameter(std::string("TranscodeConfig"), transcodeConfig);
}

std::string SetCasterConfigRequest::getRegionId() const {
  return regionId_;
}

void SetCasterConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetCasterConfigRequest::getCasterName() const {
  return casterName_;
}

void SetCasterConfigRequest::setCasterName(const std::string &casterName) {
  casterName_ = casterName;
  setParameter(std::string("CasterName"), casterName);
}

bool SetCasterConfigRequest::getAutoSwitchUrgentOn() const {
  return autoSwitchUrgentOn_;
}

void SetCasterConfigRequest::setAutoSwitchUrgentOn(bool autoSwitchUrgentOn) {
  autoSwitchUrgentOn_ = autoSwitchUrgentOn;
  setParameter(std::string("AutoSwitchUrgentOn"), autoSwitchUrgentOn ? "true" : "false");
}

std::string SetCasterConfigRequest::getAutoSwitchUrgentConfig() const {
  return autoSwitchUrgentConfig_;
}

void SetCasterConfigRequest::setAutoSwitchUrgentConfig(const std::string &autoSwitchUrgentConfig) {
  autoSwitchUrgentConfig_ = autoSwitchUrgentConfig;
  setParameter(std::string("AutoSwitchUrgentConfig"), autoSwitchUrgentConfig);
}

std::string SetCasterConfigRequest::getUrgentLiveStreamUrl() const {
  return urgentLiveStreamUrl_;
}

void SetCasterConfigRequest::setUrgentLiveStreamUrl(const std::string &urgentLiveStreamUrl) {
  urgentLiveStreamUrl_ = urgentLiveStreamUrl;
  setParameter(std::string("UrgentLiveStreamUrl"), urgentLiveStreamUrl);
}

std::string SetCasterConfigRequest::getSideOutputUrl() const {
  return sideOutputUrl_;
}

void SetCasterConfigRequest::setSideOutputUrl(const std::string &sideOutputUrl) {
  sideOutputUrl_ = sideOutputUrl;
  setParameter(std::string("SideOutputUrl"), sideOutputUrl);
}

std::string SetCasterConfigRequest::getSyncGroupsConfig() const {
  return syncGroupsConfig_;
}

void SetCasterConfigRequest::setSyncGroupsConfig(const std::string &syncGroupsConfig) {
  syncGroupsConfig_ = syncGroupsConfig;
  setParameter(std::string("SyncGroupsConfig"), syncGroupsConfig);
}

std::string SetCasterConfigRequest::getSideOutputUrlList() const {
  return sideOutputUrlList_;
}

void SetCasterConfigRequest::setSideOutputUrlList(const std::string &sideOutputUrlList) {
  sideOutputUrlList_ = sideOutputUrlList;
  setParameter(std::string("SideOutputUrlList"), sideOutputUrlList);
}

std::string SetCasterConfigRequest::getCasterId() const {
  return casterId_;
}

void SetCasterConfigRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

std::string SetCasterConfigRequest::getDomainName() const {
  return domainName_;
}

void SetCasterConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetCasterConfigRequest::getOwnerId() const {
  return ownerId_;
}

void SetCasterConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

float SetCasterConfigRequest::getDelay() const {
  return delay_;
}

void SetCasterConfigRequest::setDelay(float delay) {
  delay_ = delay;
  setParameter(std::string("Delay"), std::to_string(delay));
}

std::string SetCasterConfigRequest::getUrgentImageId() const {
  return urgentImageId_;
}

void SetCasterConfigRequest::setUrgentImageId(const std::string &urgentImageId) {
  urgentImageId_ = urgentImageId;
  setParameter(std::string("UrgentImageId"), urgentImageId);
}

std::string SetCasterConfigRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void SetCasterConfigRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

