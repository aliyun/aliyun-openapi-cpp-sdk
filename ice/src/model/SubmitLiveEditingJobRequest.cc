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

#include <alibabacloud/ice/model/SubmitLiveEditingJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitLiveEditingJobRequest;

SubmitLiveEditingJobRequest::SubmitLiveEditingJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitLiveEditingJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitLiveEditingJobRequest::~SubmitLiveEditingJobRequest() {}

std::string SubmitLiveEditingJobRequest::getLiveStreamConfig() const {
  return liveStreamConfig_;
}

void SubmitLiveEditingJobRequest::setLiveStreamConfig(const std::string &liveStreamConfig) {
  liveStreamConfig_ = liveStreamConfig;
  setParameter(std::string("LiveStreamConfig"), liveStreamConfig);
}

std::string SubmitLiveEditingJobRequest::getClips() const {
  return clips_;
}

void SubmitLiveEditingJobRequest::setClips(const std::string &clips) {
  clips_ = clips;
  setParameter(std::string("Clips"), clips);
}

std::string SubmitLiveEditingJobRequest::getOutputMediaTarget() const {
  return outputMediaTarget_;
}

void SubmitLiveEditingJobRequest::setOutputMediaTarget(const std::string &outputMediaTarget) {
  outputMediaTarget_ = outputMediaTarget;
  setParameter(std::string("OutputMediaTarget"), outputMediaTarget);
}

std::string SubmitLiveEditingJobRequest::getUserData() const {
  return userData_;
}

void SubmitLiveEditingJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitLiveEditingJobRequest::getOutputMediaConfig() const {
  return outputMediaConfig_;
}

void SubmitLiveEditingJobRequest::setOutputMediaConfig(const std::string &outputMediaConfig) {
  outputMediaConfig_ = outputMediaConfig;
  setParameter(std::string("OutputMediaConfig"), outputMediaConfig);
}

std::string SubmitLiveEditingJobRequest::getProjectId() const {
  return projectId_;
}

void SubmitLiveEditingJobRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string SubmitLiveEditingJobRequest::getMediaProduceConfig() const {
  return mediaProduceConfig_;
}

void SubmitLiveEditingJobRequest::setMediaProduceConfig(const std::string &mediaProduceConfig) {
  mediaProduceConfig_ = mediaProduceConfig;
  setParameter(std::string("MediaProduceConfig"), mediaProduceConfig);
}

