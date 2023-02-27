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

#include <alibabacloud/ice/model/SubmitLiveTranscodeJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitLiveTranscodeJobRequest;

SubmitLiveTranscodeJobRequest::SubmitLiveTranscodeJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitLiveTranscodeJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitLiveTranscodeJobRequest::~SubmitLiveTranscodeJobRequest() {}

SubmitLiveTranscodeJobRequest::StreamInput SubmitLiveTranscodeJobRequest::getStreamInput() const {
  return streamInput_;
}

void SubmitLiveTranscodeJobRequest::setStreamInput(const SubmitLiveTranscodeJobRequest::StreamInput &streamInput) {
  streamInput_ = streamInput;
  setParameter(std::string("StreamInput") + ".InputUrl", streamInput.inputUrl);
  setParameter(std::string("StreamInput") + ".Type", streamInput.type);
}

SubmitLiveTranscodeJobRequest::TranscodeOutput SubmitLiveTranscodeJobRequest::getTranscodeOutput() const {
  return transcodeOutput_;
}

void SubmitLiveTranscodeJobRequest::setTranscodeOutput(const SubmitLiveTranscodeJobRequest::TranscodeOutput &transcodeOutput) {
  transcodeOutput_ = transcodeOutput;
  setParameter(std::string("TranscodeOutput") + ".DomainName", transcodeOutput.domainName);
  setParameter(std::string("TranscodeOutput") + ".Type", transcodeOutput.type);
}

SubmitLiveTranscodeJobRequest::TimedConfig SubmitLiveTranscodeJobRequest::getTimedConfig() const {
  return timedConfig_;
}

void SubmitLiveTranscodeJobRequest::setTimedConfig(const SubmitLiveTranscodeJobRequest::TimedConfig &timedConfig) {
  timedConfig_ = timedConfig;
  setParameter(std::string("TimedConfig") + ".EndTime", timedConfig.endTime);
  setParameter(std::string("TimedConfig") + ".StartTime", timedConfig.startTime);
}

int SubmitLiveTranscodeJobRequest::getStartMode() const {
  return startMode_;
}

void SubmitLiveTranscodeJobRequest::setStartMode(int startMode) {
  startMode_ = startMode;
  setParameter(std::string("StartMode"), std::to_string(startMode));
}

std::string SubmitLiveTranscodeJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitLiveTranscodeJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string SubmitLiveTranscodeJobRequest::getName() const {
  return name_;
}

void SubmitLiveTranscodeJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

