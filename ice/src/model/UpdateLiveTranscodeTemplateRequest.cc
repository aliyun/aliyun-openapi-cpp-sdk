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

#include <alibabacloud/ice/model/UpdateLiveTranscodeTemplateRequest.h>

using AlibabaCloud::ICE::Model::UpdateLiveTranscodeTemplateRequest;

UpdateLiveTranscodeTemplateRequest::UpdateLiveTranscodeTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UpdateLiveTranscodeTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveTranscodeTemplateRequest::~UpdateLiveTranscodeTemplateRequest() {}

std::string UpdateLiveTranscodeTemplateRequest::getTemplateId() const {
  return templateId_;
}

void UpdateLiveTranscodeTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

UpdateLiveTranscodeTemplateRequest::TemplateConfig UpdateLiveTranscodeTemplateRequest::getTemplateConfig() const {
  return templateConfig_;
}

void UpdateLiveTranscodeTemplateRequest::setTemplateConfig(const UpdateLiveTranscodeTemplateRequest::TemplateConfig &templateConfig) {
  templateConfig_ = templateConfig;
  setParameter(std::string("TemplateConfig") + ".AudioParams.Codec", templateConfig.audioParams.codec);
  setParameter(std::string("TemplateConfig") + ".AudioParams.Channels", templateConfig.audioParams.channels);
  setParameter(std::string("TemplateConfig") + ".AudioParams.Profile", templateConfig.audioParams.profile);
  setParameter(std::string("TemplateConfig") + ".AudioParams.Bitrate", templateConfig.audioParams.bitrate);
  setParameter(std::string("TemplateConfig") + ".AudioParams.Samplerate", templateConfig.audioParams.samplerate);
  setParameter(std::string("TemplateConfig") + ".VideoParams.Codec", templateConfig.videoParams.codec);
  setParameter(std::string("TemplateConfig") + ".VideoParams.Profile", templateConfig.videoParams.profile);
  setParameter(std::string("TemplateConfig") + ".VideoParams.Width", templateConfig.videoParams.width);
  setParameter(std::string("TemplateConfig") + ".VideoParams.Fps", templateConfig.videoParams.fps);
  setParameter(std::string("TemplateConfig") + ".VideoParams.Gop", templateConfig.videoParams.gop);
  setParameter(std::string("TemplateConfig") + ".VideoParams.Bitrate", templateConfig.videoParams.bitrate);
  setParameter(std::string("TemplateConfig") + ".VideoParams.Height", templateConfig.videoParams.height);
}

std::string UpdateLiveTranscodeTemplateRequest::getName() const {
  return name_;
}

void UpdateLiveTranscodeTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

