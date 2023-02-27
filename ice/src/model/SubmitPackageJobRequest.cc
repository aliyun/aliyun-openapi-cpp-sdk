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

#include <alibabacloud/ice/model/SubmitPackageJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitPackageJobRequest;

SubmitPackageJobRequest::SubmitPackageJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitPackageJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitPackageJobRequest::~SubmitPackageJobRequest() {}

std::vector<SubmitPackageJobRequest::Inputs> SubmitPackageJobRequest::getInputs() const {
  return inputs_;
}

void SubmitPackageJobRequest::setInputs(const std::vector<SubmitPackageJobRequest::Inputs> &inputs) {
  inputs_ = inputs;
  for(int dep1 = 0; dep1 != inputs.size(); dep1++) {
    setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Input.Media", inputs[dep1].input.media);
    setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Input.Type", inputs[dep1].input.type);
    for(int dep2 = 0; dep2 != inputs[dep1].subtitles.size(); dep2++) {
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Subtitles." + std::to_string(dep2 + 1) + ".Input.Media", inputs[dep1].subtitles[dep2].input.media);
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Subtitles." + std::to_string(dep2 + 1) + ".Input.Type", inputs[dep1].subtitles[dep2].input.type);
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Subtitles." + std::to_string(dep2 + 1) + ".Name", inputs[dep1].subtitles[dep2].name);
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Subtitles." + std::to_string(dep2 + 1) + ".Language", inputs[dep1].subtitles[dep2].language);
    }
    for(int dep2 = 0; dep2 != inputs[dep1].audios.size(); dep2++) {
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Audios." + std::to_string(dep2 + 1) + ".Input.Media", inputs[dep1].audios[dep2].input.media);
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Audios." + std::to_string(dep2 + 1) + ".Input.Type", inputs[dep1].audios[dep2].input.type);
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Audios." + std::to_string(dep2 + 1) + ".Codec", inputs[dep1].audios[dep2].codec);
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Audios." + std::to_string(dep2 + 1) + ".Bandwidth", std::to_string(inputs[dep1].audios[dep2].bandwidth));
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Audios." + std::to_string(dep2 + 1) + ".Name", inputs[dep1].audios[dep2].name);
      setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".Audios." + std::to_string(dep2 + 1) + ".Bitrate", std::to_string(inputs[dep1].audios[dep2].bitrate));
    }
    setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".PackageConfig.Codec", inputs[dep1].packageConfig.codec);
    setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".PackageConfig.Bandwidth", std::to_string(inputs[dep1].packageConfig.bandwidth));
    setParameter(std::string("Inputs") + "." + std::to_string(dep1 + 1) + ".PackageConfig.Bitrate", std::to_string(inputs[dep1].packageConfig.bitrate));
  }
}

long SubmitPackageJobRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void SubmitPackageJobRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string SubmitPackageJobRequest::getSource() const {
  return source_;
}

void SubmitPackageJobRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

SubmitPackageJobRequest::Output SubmitPackageJobRequest::getOutput() const {
  return output_;
}

void SubmitPackageJobRequest::setOutput(const SubmitPackageJobRequest::Output &output) {
  output_ = output;
  setParameter(std::string("Output") + ".Media", output.media);
  setParameter(std::string("Output") + ".Type", output.type);
}

std::string SubmitPackageJobRequest::getUserData() const {
  return userData_;
}

void SubmitPackageJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

SubmitPackageJobRequest::TemplateConfig SubmitPackageJobRequest::getTemplateConfig() const {
  return templateConfig_;
}

void SubmitPackageJobRequest::setTemplateConfig(const SubmitPackageJobRequest::TemplateConfig &templateConfig) {
  templateConfig_ = templateConfig;
  setParameter(std::string("TemplateConfig") + ".OverwriteParams", templateConfig.overwriteParams);
  setParameter(std::string("TemplateConfig") + ".TemplateId", templateConfig.templateId);
}

SubmitPackageJobRequest::ScheduleConfig SubmitPackageJobRequest::getScheduleConfig() const {
  return scheduleConfig_;
}

void SubmitPackageJobRequest::setScheduleConfig(const SubmitPackageJobRequest::ScheduleConfig &scheduleConfig) {
  scheduleConfig_ = scheduleConfig;
  setParameter(std::string("ScheduleConfig") + ".Priority", std::to_string(scheduleConfig.priority));
  setParameter(std::string("ScheduleConfig") + ".PipelineId", scheduleConfig.pipelineId);
}

std::string SubmitPackageJobRequest::getName() const {
  return name_;
}

void SubmitPackageJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

