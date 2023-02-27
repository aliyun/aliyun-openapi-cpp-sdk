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

#include <alibabacloud/ice/model/SubmitSnapshotJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitSnapshotJobRequest;

SubmitSnapshotJobRequest::SubmitSnapshotJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitSnapshotJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSnapshotJobRequest::~SubmitSnapshotJobRequest() {}

std::string SubmitSnapshotJobRequest::getSource() const {
  return source_;
}

void SubmitSnapshotJobRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

SubmitSnapshotJobRequest::Output SubmitSnapshotJobRequest::getOutput() const {
  return output_;
}

void SubmitSnapshotJobRequest::setOutput(const SubmitSnapshotJobRequest::Output &output) {
  output_ = output;
  setParameter(std::string("Output") + ".Media", output.media);
  setParameter(std::string("Output") + ".Type", output.type);
}

std::string SubmitSnapshotJobRequest::getUserData() const {
  return userData_;
}

void SubmitSnapshotJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

SubmitSnapshotJobRequest::TemplateConfig SubmitSnapshotJobRequest::getTemplateConfig() const {
  return templateConfig_;
}

void SubmitSnapshotJobRequest::setTemplateConfig(const SubmitSnapshotJobRequest::TemplateConfig &templateConfig) {
  templateConfig_ = templateConfig;
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.PixelBlackThreshold", std::to_string(templateConfig.overwriteParams.pixelBlackThreshold));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Count", std::to_string(templateConfig.overwriteParams.count));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Width", std::to_string(templateConfig.overwriteParams.width));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.IsSptFrag", templateConfig.overwriteParams.isSptFrag ? "true" : "false");
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Interval", std::to_string(templateConfig.overwriteParams.interval));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.BlackLevel", std::to_string(templateConfig.overwriteParams.blackLevel));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.FrameType", templateConfig.overwriteParams.frameType);
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Time", std::to_string(templateConfig.overwriteParams.time));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Type", templateConfig.overwriteParams.type);
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.SpriteSnapshotConfig.Padding", std::to_string(templateConfig.overwriteParams.spriteSnapshotConfig.padding));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.SpriteSnapshotConfig.Margin", std::to_string(templateConfig.overwriteParams.spriteSnapshotConfig.margin));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.SpriteSnapshotConfig.Color", templateConfig.overwriteParams.spriteSnapshotConfig.color);
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.SpriteSnapshotConfig.CellHeight", std::to_string(templateConfig.overwriteParams.spriteSnapshotConfig.cellHeight));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.SpriteSnapshotConfig.Columns", std::to_string(templateConfig.overwriteParams.spriteSnapshotConfig.columns));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.SpriteSnapshotConfig.CellWidth", std::to_string(templateConfig.overwriteParams.spriteSnapshotConfig.cellWidth));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.SpriteSnapshotConfig.Lines", std::to_string(templateConfig.overwriteParams.spriteSnapshotConfig.lines));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Height", std::to_string(templateConfig.overwriteParams.height));
  setParameter(std::string("TemplateConfig") + ".TemplateId", templateConfig.templateId);
}

SubmitSnapshotJobRequest::ScheduleConfig SubmitSnapshotJobRequest::getScheduleConfig() const {
  return scheduleConfig_;
}

void SubmitSnapshotJobRequest::setScheduleConfig(const SubmitSnapshotJobRequest::ScheduleConfig &scheduleConfig) {
  scheduleConfig_ = scheduleConfig;
  setParameter(std::string("ScheduleConfig") + ".Priority", std::to_string(scheduleConfig.priority));
  setParameter(std::string("ScheduleConfig") + ".PipelineId", scheduleConfig.pipelineId);
}

SubmitSnapshotJobRequest::Input SubmitSnapshotJobRequest::getInput() const {
  return input_;
}

void SubmitSnapshotJobRequest::setInput(const SubmitSnapshotJobRequest::Input &input) {
  input_ = input;
  setParameter(std::string("Input") + ".Media", input.media);
  setParameter(std::string("Input") + ".Type", input.type);
}

std::string SubmitSnapshotJobRequest::getName() const {
  return name_;
}

void SubmitSnapshotJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

