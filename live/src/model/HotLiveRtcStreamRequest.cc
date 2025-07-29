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

#include <alibabacloud/live/model/HotLiveRtcStreamRequest.h>

using AlibabaCloud::Live::Model::HotLiveRtcStreamRequest;

HotLiveRtcStreamRequest::HotLiveRtcStreamRequest()
    : RpcServiceRequest("live", "2016-11-01", "HotLiveRtcStream") {
  setMethod(HttpRequest::Method::Post);
}

HotLiveRtcStreamRequest::~HotLiveRtcStreamRequest() {}

std::string HotLiveRtcStreamRequest::getVideoMsid() const {
  return videoMsid_;
}

void HotLiveRtcStreamRequest::setVideoMsid(const std::string &videoMsid) {
  videoMsid_ = videoMsid;
  setParameter(std::string("VideoMsid"), videoMsid);
}

std::string HotLiveRtcStreamRequest::getRegionCode() const {
  return regionCode_;
}

void HotLiveRtcStreamRequest::setRegionCode(const std::string &regionCode) {
  regionCode_ = regionCode;
  setParameter(std::string("RegionCode"), regionCode);
}

std::string HotLiveRtcStreamRequest::getConnectionTimeout() const {
  return connectionTimeout_;
}

void HotLiveRtcStreamRequest::setConnectionTimeout(const std::string &connectionTimeout) {
  connectionTimeout_ = connectionTimeout;
  setParameter(std::string("ConnectionTimeout"), connectionTimeout);
}

std::string HotLiveRtcStreamRequest::getAppName() const {
  return appName_;
}

void HotLiveRtcStreamRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string HotLiveRtcStreamRequest::getAudioMsid() const {
  return audioMsid_;
}

void HotLiveRtcStreamRequest::setAudioMsid(const std::string &audioMsid) {
  audioMsid_ = audioMsid;
  setParameter(std::string("AudioMsid"), audioMsid);
}

std::string HotLiveRtcStreamRequest::getRegionId() const {
  return regionId_;
}

void HotLiveRtcStreamRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string HotLiveRtcStreamRequest::getMediaTimeout() const {
  return mediaTimeout_;
}

void HotLiveRtcStreamRequest::setMediaTimeout(const std::string &mediaTimeout) {
  mediaTimeout_ = mediaTimeout;
  setParameter(std::string("MediaTimeout"), mediaTimeout);
}

std::string HotLiveRtcStreamRequest::getStreamName() const {
  return streamName_;
}

void HotLiveRtcStreamRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string HotLiveRtcStreamRequest::getDomainName() const {
  return domainName_;
}

void HotLiveRtcStreamRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long HotLiveRtcStreamRequest::getOwnerId() const {
  return ownerId_;
}

void HotLiveRtcStreamRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

