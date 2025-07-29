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

#include <alibabacloud/live/model/UpdateLiveRecordVodConfigRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveRecordVodConfigRequest;

UpdateLiveRecordVodConfigRequest::UpdateLiveRecordVodConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLiveRecordVodConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveRecordVodConfigRequest::~UpdateLiveRecordVodConfigRequest() {}

std::string UpdateLiveRecordVodConfigRequest::getAutoCompose() const {
  return autoCompose_;
}

void UpdateLiveRecordVodConfigRequest::setAutoCompose(const std::string &autoCompose) {
  autoCompose_ = autoCompose;
  setParameter(std::string("AutoCompose"), autoCompose);
}

std::string UpdateLiveRecordVodConfigRequest::getComposeVodTranscodeGroupId() const {
  return composeVodTranscodeGroupId_;
}

void UpdateLiveRecordVodConfigRequest::setComposeVodTranscodeGroupId(const std::string &composeVodTranscodeGroupId) {
  composeVodTranscodeGroupId_ = composeVodTranscodeGroupId;
  setParameter(std::string("ComposeVodTranscodeGroupId"), composeVodTranscodeGroupId);
}

std::string UpdateLiveRecordVodConfigRequest::getStorageLocation() const {
  return storageLocation_;
}

void UpdateLiveRecordVodConfigRequest::setStorageLocation(const std::string &storageLocation) {
  storageLocation_ = storageLocation;
  setParameter(std::string("StorageLocation"), storageLocation);
}

std::string UpdateLiveRecordVodConfigRequest::getAppName() const {
  return appName_;
}

void UpdateLiveRecordVodConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string UpdateLiveRecordVodConfigRequest::getRegionId() const {
  return regionId_;
}

void UpdateLiveRecordVodConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpdateLiveRecordVodConfigRequest::getOnDemand() const {
  return onDemand_;
}

void UpdateLiveRecordVodConfigRequest::setOnDemand(int onDemand) {
  onDemand_ = onDemand;
  setParameter(std::string("OnDemand"), std::to_string(onDemand));
}

std::string UpdateLiveRecordVodConfigRequest::getStreamName() const {
  return streamName_;
}

void UpdateLiveRecordVodConfigRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string UpdateLiveRecordVodConfigRequest::getVodTranscodeGroupId() const {
  return vodTranscodeGroupId_;
}

void UpdateLiveRecordVodConfigRequest::setVodTranscodeGroupId(const std::string &vodTranscodeGroupId) {
  vodTranscodeGroupId_ = vodTranscodeGroupId;
  setParameter(std::string("VodTranscodeGroupId"), vodTranscodeGroupId);
}

std::string UpdateLiveRecordVodConfigRequest::getDomainName() const {
  return domainName_;
}

void UpdateLiveRecordVodConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int UpdateLiveRecordVodConfigRequest::getCycleDuration() const {
  return cycleDuration_;
}

void UpdateLiveRecordVodConfigRequest::setCycleDuration(int cycleDuration) {
  cycleDuration_ = cycleDuration;
  setParameter(std::string("CycleDuration"), std::to_string(cycleDuration));
}

long UpdateLiveRecordVodConfigRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLiveRecordVodConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

