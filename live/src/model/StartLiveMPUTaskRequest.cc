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

#include <alibabacloud/live/model/StartLiveMPUTaskRequest.h>

using AlibabaCloud::Live::Model::StartLiveMPUTaskRequest;

StartLiveMPUTaskRequest::StartLiveMPUTaskRequest()
    : RpcServiceRequest("live", "2016-11-01", "StartLiveMPUTask") {
  setMethod(HttpRequest::Method::Post);
}

StartLiveMPUTaskRequest::~StartLiveMPUTaskRequest() {}

StartLiveMPUTaskRequest::SingleSubParams StartLiveMPUTaskRequest::getSingleSubParams() const {
  return singleSubParams_;
}

void StartLiveMPUTaskRequest::setSingleSubParams(const StartLiveMPUTaskRequest::SingleSubParams &singleSubParams) {
  singleSubParams_ = singleSubParams;
  for(int dep1 = 0; dep1 != singleSubParams.mixAudioUserIds.size(); dep1++) {
    setParameter(std::string("SingleSubParams") + ".MixAudioUserIds." + std::to_string(dep1 + 1), singleSubParams.mixAudioUserIds[dep1]);
  }
  setParameter(std::string("SingleSubParams") + ".StreamType", singleSubParams.streamType);
  setParameter(std::string("SingleSubParams") + ".SourceType", singleSubParams.sourceType);
  setParameter(std::string("SingleSubParams") + ".UserId", singleSubParams.userId);
}

std::string StartLiveMPUTaskRequest::getTaskId() const {
  return taskId_;
}

void StartLiveMPUTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string StartLiveMPUTaskRequest::getStreamURL() const {
  return streamURL_;
}

void StartLiveMPUTaskRequest::setStreamURL(const std::string &streamURL) {
  streamURL_ = streamURL;
  setParameter(std::string("StreamURL"), streamURL);
}

std::vector<StartLiveMPUTaskRequest::MultiStreamURL> StartLiveMPUTaskRequest::getMultiStreamURL() const {
  return multiStreamURL_;
}

void StartLiveMPUTaskRequest::setMultiStreamURL(const std::vector<StartLiveMPUTaskRequest::MultiStreamURL> &multiStreamURL) {
  multiStreamURL_ = multiStreamURL;
  for(int dep1 = 0; dep1 != multiStreamURL.size(); dep1++) {
    setParameter(std::string("MultiStreamURL") + "." + std::to_string(dep1 + 1) + ".IsAliCdn", multiStreamURL[dep1].isAliCdn ? "true" : "false");
    setParameter(std::string("MultiStreamURL") + "." + std::to_string(dep1 + 1) + ".URL", multiStreamURL[dep1].uRL);
  }
}

std::string StartLiveMPUTaskRequest::getMaxIdleTime() const {
  return maxIdleTime_;
}

void StartLiveMPUTaskRequest::setMaxIdleTime(const std::string &maxIdleTime) {
  maxIdleTime_ = maxIdleTime;
  setParameter(std::string("MaxIdleTime"), maxIdleTime);
}

StartLiveMPUTaskRequest::SeiParams StartLiveMPUTaskRequest::getSeiParams() const {
  return seiParams_;
}

void StartLiveMPUTaskRequest::setSeiParams(const StartLiveMPUTaskRequest::SeiParams &seiParams) {
  seiParams_ = seiParams;
  setParameter(std::string("SeiParams") + ".PayloadType", seiParams.payloadType);
  setParameter(std::string("SeiParams") + ".LayoutVolume.FollowIdr", seiParams.layoutVolume.followIdr);
  setParameter(std::string("SeiParams") + ".LayoutVolume.Interval", seiParams.layoutVolume.interval);
  setParameter(std::string("SeiParams") + ".PassThrough.FollowIdr", seiParams.passThrough.followIdr);
  setParameter(std::string("SeiParams") + ".PassThrough.PayloadContentKey", seiParams.passThrough.payloadContentKey);
  setParameter(std::string("SeiParams") + ".PassThrough.PayloadContent", seiParams.passThrough.payloadContent);
  setParameter(std::string("SeiParams") + ".PassThrough.Interval", seiParams.passThrough.interval);
}

StartLiveMPUTaskRequest::TranscodeParams StartLiveMPUTaskRequest::getTranscodeParams() const {
  return transcodeParams_;
}

void StartLiveMPUTaskRequest::setTranscodeParams(const StartLiveMPUTaskRequest::TranscodeParams &transcodeParams) {
  transcodeParams_ = transcodeParams;
  for(int dep1 = 0; dep1 != transcodeParams.layout.userPanes.size(); dep1++) {
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".BackgroundImageUrl", transcodeParams.layout.userPanes[dep1].backgroundImageUrl);
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".ZOrder", transcodeParams.layout.userPanes[dep1].zOrder);
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".Width", transcodeParams.layout.userPanes[dep1].width);
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".X", transcodeParams.layout.userPanes[dep1].x);
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".Y", transcodeParams.layout.userPanes[dep1].y);
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".UserInfo.SourceType", transcodeParams.layout.userPanes[dep1].userInfo.sourceType);
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".UserInfo.UserId", transcodeParams.layout.userPanes[dep1].userInfo.userId);
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".UserInfo.ChannelId", transcodeParams.layout.userPanes[dep1].userInfo.channelId);
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".RenderMode", transcodeParams.layout.userPanes[dep1].renderMode);
    setParameter(std::string("TranscodeParams") + ".Layout.UserPanes." + std::to_string(dep1 + 1) + ".Height", transcodeParams.layout.userPanes[dep1].height);
  }
  setParameter(std::string("TranscodeParams") + ".Layout.LayoutMode", transcodeParams.layout.layoutMode);
  setParameter(std::string("TranscodeParams") + ".Layout.MaxVideoUser.StreamType", transcodeParams.layout.maxVideoUser.streamType);
  setParameter(std::string("TranscodeParams") + ".Layout.MaxVideoUser.SourceType", transcodeParams.layout.maxVideoUser.sourceType);
  setParameter(std::string("TranscodeParams") + ".Layout.MaxVideoUser.UserId", transcodeParams.layout.maxVideoUser.userId);
  setParameter(std::string("TranscodeParams") + ".Layout.MaxVideoUser.ChannelId", transcodeParams.layout.maxVideoUser.channelId);
  setParameter(std::string("TranscodeParams") + ".Background.RenderMode", transcodeParams.background.renderMode);
  setParameter(std::string("TranscodeParams") + ".Background.URL", transcodeParams.background.uRL);
  for(int dep1 = 0; dep1 != transcodeParams.userInfos.size(); dep1++) {
    setParameter(std::string("TranscodeParams") + ".UserInfos." + std::to_string(dep1 + 1) + ".StreamType", transcodeParams.userInfos[dep1].streamType);
    setParameter(std::string("TranscodeParams") + ".UserInfos." + std::to_string(dep1 + 1) + ".SourceType", transcodeParams.userInfos[dep1].sourceType);
    setParameter(std::string("TranscodeParams") + ".UserInfos." + std::to_string(dep1 + 1) + ".UserId", transcodeParams.userInfos[dep1].userId);
    setParameter(std::string("TranscodeParams") + ".UserInfos." + std::to_string(dep1 + 1) + ".ChannelId", transcodeParams.userInfos[dep1].channelId);
  }
  setParameter(std::string("TranscodeParams") + ".EncodeParams.AudioOnly", transcodeParams.encodeParams.audioOnly);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.VideoWidth", transcodeParams.encodeParams.videoWidth);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.AudioBitrate", transcodeParams.encodeParams.audioBitrate);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.EnhancedParam", transcodeParams.encodeParams.enhancedParam);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.VideoFramerate", transcodeParams.encodeParams.videoFramerate);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.VideoHeight", transcodeParams.encodeParams.videoHeight);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.AudioSampleRate", transcodeParams.encodeParams.audioSampleRate);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.VideoBitrate", transcodeParams.encodeParams.videoBitrate);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.VideoCodec", transcodeParams.encodeParams.videoCodec);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.AudioChannels", transcodeParams.encodeParams.audioChannels);
  setParameter(std::string("TranscodeParams") + ".EncodeParams.VideoGop", transcodeParams.encodeParams.videoGop);
}

std::string StartLiveMPUTaskRequest::getAppId() const {
  return appId_;
}

void StartLiveMPUTaskRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string StartLiveMPUTaskRequest::getRegion() const {
  return region_;
}

void StartLiveMPUTaskRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string StartLiveMPUTaskRequest::getMixMode() const {
  return mixMode_;
}

void StartLiveMPUTaskRequest::setMixMode(const std::string &mixMode) {
  mixMode_ = mixMode;
  setParameter(std::string("MixMode"), mixMode);
}

std::string StartLiveMPUTaskRequest::getChannelId() const {
  return channelId_;
}

void StartLiveMPUTaskRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

