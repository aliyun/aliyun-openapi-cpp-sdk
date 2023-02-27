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

#include <alibabacloud/ice/model/CreateLiveTranscodeTemplateRequest.h>

using AlibabaCloud::ICE::Model::CreateLiveTranscodeTemplateRequest;

CreateLiveTranscodeTemplateRequest::CreateLiveTranscodeTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "CreateLiveTranscodeTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateLiveTranscodeTemplateRequest::~CreateLiveTranscodeTemplateRequest() {}

std::string CreateLiveTranscodeTemplateRequest::getType() const {
  return type_;
}

void CreateLiveTranscodeTemplateRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

CreateLiveTranscodeTemplateRequest::TemplateConfig CreateLiveTranscodeTemplateRequest::getTemplateConfig() const {
  return templateConfig_;
}

void CreateLiveTranscodeTemplateRequest::setTemplateConfig(const CreateLiveTranscodeTemplateRequest::TemplateConfig &templateConfig) {
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

std::string CreateLiveTranscodeTemplateRequest::getName() const {
  return name_;
}

void CreateLiveTranscodeTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

