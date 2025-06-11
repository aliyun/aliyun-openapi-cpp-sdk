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

#include <alibabacloud/live/model/StartRtcCloudRecordingRequest.h>

using AlibabaCloud::Live::Model::StartRtcCloudRecordingRequest;

StartRtcCloudRecordingRequest::StartRtcCloudRecordingRequest()
    : RpcServiceRequest("live", "2016-11-01", "StartRtcCloudRecording") {
  setMethod(HttpRequest::Method::Post);
}

StartRtcCloudRecordingRequest::~StartRtcCloudRecordingRequest() {}

StartRtcCloudRecordingRequest::StorageParams StartRtcCloudRecordingRequest::getStorageParams() const {
  return storageParams_;
}

void StartRtcCloudRecordingRequest::setStorageParams(const StartRtcCloudRecordingRequest::StorageParams &storageParams) {
  storageParams_ = storageParams;
  for(int dep1 = 0; dep1 != storageParams.fileInfo.size(); dep1++) {
    setParameter(std::string("StorageParams") + ".FileInfo." + std::to_string(dep1 + 1) + ".FileNamePattern", storageParams.fileInfo[dep1].fileNamePattern);
    setParameter(std::string("StorageParams") + ".FileInfo." + std::to_string(dep1 + 1) + ".Format", storageParams.fileInfo[dep1].format);
    setParameter(std::string("StorageParams") + ".FileInfo." + std::to_string(dep1 + 1) + ".SliceNamePattern", storageParams.fileInfo[dep1].sliceNamePattern);
  }
  setParameter(std::string("StorageParams") + ".StorageType", std::to_string(storageParams.storageType));
  setParameter(std::string("StorageParams") + ".OSSParams.OSSBucket", storageParams.oSSParams.oSSBucket);
  setParameter(std::string("StorageParams") + ".OSSParams.OSSEndpoint", storageParams.oSSParams.oSSEndpoint);
}

std::string StartRtcCloudRecordingRequest::getNotifyUrl() const {
  return notifyUrl_;
}

void StartRtcCloudRecordingRequest::setNotifyUrl(const std::string &notifyUrl) {
  notifyUrl_ = notifyUrl;
  setParameter(std::string("NotifyUrl"), notifyUrl);
}

StartRtcCloudRecordingRequest::SubscribeParams StartRtcCloudRecordingRequest::getSubscribeParams() const {
  return subscribeParams_;
}

void StartRtcCloudRecordingRequest::setSubscribeParams(const StartRtcCloudRecordingRequest::SubscribeParams &subscribeParams) {
  subscribeParams_ = subscribeParams;
  for(int dep1 = 0; dep1 != subscribeParams.subscribeUserIdList.size(); dep1++) {
    setParameter(std::string("SubscribeParams") + ".SubscribeUserIdList." + std::to_string(dep1 + 1) + ".StreamType", std::to_string(subscribeParams.subscribeUserIdList[dep1].streamType));
    setParameter(std::string("SubscribeParams") + ".SubscribeUserIdList." + std::to_string(dep1 + 1) + ".SourceType", std::to_string(subscribeParams.subscribeUserIdList[dep1].sourceType));
    setParameter(std::string("SubscribeParams") + ".SubscribeUserIdList." + std::to_string(dep1 + 1) + ".UserId", subscribeParams.subscribeUserIdList[dep1].userId);
  }
}

StartRtcCloudRecordingRequest::RecordParams StartRtcCloudRecordingRequest::getRecordParams() const {
  return recordParams_;
}

void StartRtcCloudRecordingRequest::setRecordParams(const StartRtcCloudRecordingRequest::RecordParams &recordParams) {
  recordParams_ = recordParams;
  setParameter(std::string("RecordParams") + ".MaxFileDuration", std::to_string(recordParams.maxFileDuration));
  setParameter(std::string("RecordParams") + ".StreamType", std::to_string(recordParams.streamType));
  setParameter(std::string("RecordParams") + ".RecordMode", std::to_string(recordParams.recordMode));
}

StartRtcCloudRecordingRequest::MixTranscodeParams StartRtcCloudRecordingRequest::getMixTranscodeParams() const {
  return mixTranscodeParams_;
}

void StartRtcCloudRecordingRequest::setMixTranscodeParams(const StartRtcCloudRecordingRequest::MixTranscodeParams &mixTranscodeParams) {
  mixTranscodeParams_ = mixTranscodeParams;
  setParameter(std::string("MixTranscodeParams") + ".VideoWidth", std::to_string(mixTranscodeParams.videoWidth));
  setParameter(std::string("MixTranscodeParams") + ".AudioBitrate", std::to_string(mixTranscodeParams.audioBitrate));
  setParameter(std::string("MixTranscodeParams") + ".VideoFramerate", std::to_string(mixTranscodeParams.videoFramerate));
  setParameter(std::string("MixTranscodeParams") + ".VideoHeight", std::to_string(mixTranscodeParams.videoHeight));
  setParameter(std::string("MixTranscodeParams") + ".AudioSampleRate", std::to_string(mixTranscodeParams.audioSampleRate));
  setParameter(std::string("MixTranscodeParams") + ".VideoBitrate", std::to_string(mixTranscodeParams.videoBitrate));
  setParameter(std::string("MixTranscodeParams") + ".FrameFillType", std::to_string(mixTranscodeParams.frameFillType));
  setParameter(std::string("MixTranscodeParams") + ".VideoCodec", mixTranscodeParams.videoCodec);
  setParameter(std::string("MixTranscodeParams") + ".AudioChannels", std::to_string(mixTranscodeParams.audioChannels));
  setParameter(std::string("MixTranscodeParams") + ".VideoGop", std::to_string(mixTranscodeParams.videoGop));
}

std::string StartRtcCloudRecordingRequest::getAppId() const {
  return appId_;
}

void StartRtcCloudRecordingRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string StartRtcCloudRecordingRequest::getChannelId() const {
  return channelId_;
}

void StartRtcCloudRecordingRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

StartRtcCloudRecordingRequest::MixLayoutParams StartRtcCloudRecordingRequest::getMixLayoutParams() const {
  return mixLayoutParams_;
}

void StartRtcCloudRecordingRequest::setMixLayoutParams(const StartRtcCloudRecordingRequest::MixLayoutParams &mixLayoutParams) {
  mixLayoutParams_ = mixLayoutParams;
  for(int dep1 = 0; dep1 != mixLayoutParams.userPanes.size(); dep1++) {
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".ZOrder", std::to_string(mixLayoutParams.userPanes[dep1].zOrder));
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".Width", mixLayoutParams.userPanes[dep1].width);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".X", mixLayoutParams.userPanes[dep1].x);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".Y", mixLayoutParams.userPanes[dep1].y);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".SourceType", std::to_string(mixLayoutParams.userPanes[dep1].sourceType));
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".UserId", mixLayoutParams.userPanes[dep1].userId);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".Height", mixLayoutParams.userPanes[dep1].height);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".SubBackground.RenderMode", std::to_string(mixLayoutParams.userPanes[dep1].subBackground.renderMode));
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".SubBackground.Url", mixLayoutParams.userPanes[dep1].subBackground.url);
  }
  setParameter(std::string("MixLayoutParams") + ".MixBackground.RenderMode", std::to_string(mixLayoutParams.mixBackground.renderMode));
  setParameter(std::string("MixLayoutParams") + ".MixBackground.Url", mixLayoutParams.mixBackground.url);
}

