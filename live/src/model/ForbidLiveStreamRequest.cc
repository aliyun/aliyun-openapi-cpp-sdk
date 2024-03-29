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

#include <alibabacloud/live/model/ForbidLiveStreamRequest.h>

using AlibabaCloud::Live::Model::ForbidLiveStreamRequest;

ForbidLiveStreamRequest::ForbidLiveStreamRequest()
    : RpcServiceRequest("live", "2016-11-01", "ForbidLiveStream") {
  setMethod(HttpRequest::Method::Post);
}

ForbidLiveStreamRequest::~ForbidLiveStreamRequest() {}

std::string ForbidLiveStreamRequest::getAppName() const {
  return appName_;
}

void ForbidLiveStreamRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ForbidLiveStreamRequest::getStreamName() const {
  return streamName_;
}

void ForbidLiveStreamRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string ForbidLiveStreamRequest::getControlStreamAction() const {
  return controlStreamAction_;
}

void ForbidLiveStreamRequest::setControlStreamAction(const std::string &controlStreamAction) {
  controlStreamAction_ = controlStreamAction;
  setParameter(std::string("ControlStreamAction"), controlStreamAction);
}

std::string ForbidLiveStreamRequest::getResumeTime() const {
  return resumeTime_;
}

void ForbidLiveStreamRequest::setResumeTime(const std::string &resumeTime) {
  resumeTime_ = resumeTime;
  setParameter(std::string("ResumeTime"), resumeTime);
}

std::string ForbidLiveStreamRequest::getLiveStreamType() const {
  return liveStreamType_;
}

void ForbidLiveStreamRequest::setLiveStreamType(const std::string &liveStreamType) {
  liveStreamType_ = liveStreamType;
  setParameter(std::string("LiveStreamType"), liveStreamType);
}

std::string ForbidLiveStreamRequest::getDomainName() const {
  return domainName_;
}

void ForbidLiveStreamRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long ForbidLiveStreamRequest::getOwnerId() const {
  return ownerId_;
}

void ForbidLiveStreamRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ForbidLiveStreamRequest::getOneshot() const {
  return oneshot_;
}

void ForbidLiveStreamRequest::setOneshot(const std::string &oneshot) {
  oneshot_ = oneshot;
  setParameter(std::string("Oneshot"), oneshot);
}

