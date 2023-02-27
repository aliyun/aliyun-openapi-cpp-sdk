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

#include <alibabacloud/ice/model/UpdateLiveTranscodeJobRequest.h>

using AlibabaCloud::ICE::Model::UpdateLiveTranscodeJobRequest;

UpdateLiveTranscodeJobRequest::UpdateLiveTranscodeJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UpdateLiveTranscodeJob") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveTranscodeJobRequest::~UpdateLiveTranscodeJobRequest() {}

UpdateLiveTranscodeJobRequest::StreamInput UpdateLiveTranscodeJobRequest::getStreamInput() const {
  return streamInput_;
}

void UpdateLiveTranscodeJobRequest::setStreamInput(const UpdateLiveTranscodeJobRequest::StreamInput &streamInput) {
  streamInput_ = streamInput;
  setParameter(std::string("StreamInput") + ".InputUrl", streamInput.inputUrl);
  setParameter(std::string("StreamInput") + ".Type", streamInput.type);
}

UpdateLiveTranscodeJobRequest::TranscodeOutput UpdateLiveTranscodeJobRequest::getTranscodeOutput() const {
  return transcodeOutput_;
}

void UpdateLiveTranscodeJobRequest::setTranscodeOutput(const UpdateLiveTranscodeJobRequest::TranscodeOutput &transcodeOutput) {
  transcodeOutput_ = transcodeOutput;
  setParameter(std::string("TranscodeOutput") + ".DomainName", transcodeOutput.domainName);
  setParameter(std::string("TranscodeOutput") + ".Type", transcodeOutput.type);
}

UpdateLiveTranscodeJobRequest::TimedConfig UpdateLiveTranscodeJobRequest::getTimedConfig() const {
  return timedConfig_;
}

void UpdateLiveTranscodeJobRequest::setTimedConfig(const UpdateLiveTranscodeJobRequest::TimedConfig &timedConfig) {
  timedConfig_ = timedConfig;
  setParameter(std::string("TimedConfig") + ".EndTime", timedConfig.endTime);
  setParameter(std::string("TimedConfig") + ".StartTime", timedConfig.startTime);
}

std::string UpdateLiveTranscodeJobRequest::getJobId() const {
  return jobId_;
}

void UpdateLiveTranscodeJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string UpdateLiveTranscodeJobRequest::getName() const {
  return name_;
}

void UpdateLiveTranscodeJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

