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

#include <alibabacloud/ice/model/SubmitTranscodeJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitTranscodeJobRequest;

SubmitTranscodeJobRequest::SubmitTranscodeJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitTranscodeJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitTranscodeJobRequest::~SubmitTranscodeJobRequest() {}

std::string SubmitTranscodeJobRequest::getClientToken() const {
  return clientToken_;
}

void SubmitTranscodeJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string SubmitTranscodeJobRequest::getSource() const {
  return source_;
}

void SubmitTranscodeJobRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string SubmitTranscodeJobRequest::getUserData() const {
  return userData_;
}

void SubmitTranscodeJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::vector<SubmitTranscodeJobRequest::OutputGroup> SubmitTranscodeJobRequest::getOutputGroup() const {
  return outputGroup_;
}

void SubmitTranscodeJobRequest::setOutputGroup(const std::vector<SubmitTranscodeJobRequest::OutputGroup> &outputGroup) {
  outputGroup_ = outputGroup;
  for(int dep1 = 0; dep1 != outputGroup.size(); dep1++) {
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".Output.OutputUrl", outputGroup[dep1].output.outputUrl);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".Output.Media", outputGroup[dep1].output.media);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".Output.Type", outputGroup[dep1].output.type);
    for(int dep2 = 0; dep2 != outputGroup[dep1].processConfig.textWatermarks.size(); dep2++) {
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.FontAlpha", outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.fontAlpha);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Adaptive", outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.adaptive);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Top", outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.top);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Left", outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.left);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.BorderWidth", std::to_string(outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.borderWidth));
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.FontColor", outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.fontColor);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.FontSize", std::to_string(outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.fontSize));
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.FontName", outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.fontName);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Content", outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.content);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.BorderColor", outputGroup[dep1].processConfig.textWatermarks[dep2].overwriteParams.borderColor);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.TextWatermarks." + std::to_string(dep2 + 1) + ".TemplateId", outputGroup[dep1].processConfig.textWatermarks[dep2].templateId);
    }
    for(int dep2 = 0; dep2 != outputGroup[dep1].processConfig.subtitles.size(); dep2++) {
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Subtitles." + std::to_string(dep2 + 1) + ".OverwriteParams.File.Media", outputGroup[dep1].processConfig.subtitles[dep2].overwriteParams.file.media);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Subtitles." + std::to_string(dep2 + 1) + ".OverwriteParams.File.Type", outputGroup[dep1].processConfig.subtitles[dep2].overwriteParams.file.type);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Subtitles." + std::to_string(dep2 + 1) + ".OverwriteParams.Format", outputGroup[dep1].processConfig.subtitles[dep2].overwriteParams.format);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Subtitles." + std::to_string(dep2 + 1) + ".OverwriteParams.CharEnc", outputGroup[dep1].processConfig.subtitles[dep2].overwriteParams.charEnc);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Subtitles." + std::to_string(dep2 + 1) + ".TemplateId", outputGroup[dep1].processConfig.subtitles[dep2].templateId);
    }
    for(int dep2 = 0; dep2 != outputGroup[dep1].processConfig.combineConfigs.size(); dep2++) {
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.CombineConfigs." + std::to_string(dep2 + 1) + ".Duration", std::to_string(outputGroup[dep1].processConfig.combineConfigs[dep2].duration));
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.CombineConfigs." + std::to_string(dep2 + 1) + ".Start", std::to_string(outputGroup[dep1].processConfig.combineConfigs[dep2].start));
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.CombineConfigs." + std::to_string(dep2 + 1) + ".VideoIndex", outputGroup[dep1].processConfig.combineConfigs[dep2].videoIndex);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.CombineConfigs." + std::to_string(dep2 + 1) + ".AudioIndex", outputGroup[dep1].processConfig.combineConfigs[dep2].audioIndex);
    }
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Encryption.CipherText", outputGroup[dep1].processConfig.encryption.cipherText);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Encryption.DecryptKeyUri", outputGroup[dep1].processConfig.encryption.decryptKeyUri);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Encryption.EncryptType", outputGroup[dep1].processConfig.encryption.encryptType);
    for(int dep2 = 0; dep2 != outputGroup[dep1].processConfig.imageWatermarks.size(); dep2++) {
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.File.Media", outputGroup[dep1].processConfig.imageWatermarks[dep2].overwriteParams.file.media);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.File.Type", outputGroup[dep1].processConfig.imageWatermarks[dep2].overwriteParams.file.type);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Dx", outputGroup[dep1].processConfig.imageWatermarks[dep2].overwriteParams.dx);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Dy", outputGroup[dep1].processConfig.imageWatermarks[dep2].overwriteParams.dy);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Width", outputGroup[dep1].processConfig.imageWatermarks[dep2].overwriteParams.width);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Timeline.Duration", outputGroup[dep1].processConfig.imageWatermarks[dep2].overwriteParams.timeline.duration);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Timeline.Start", outputGroup[dep1].processConfig.imageWatermarks[dep2].overwriteParams.timeline.start);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.ReferPos", outputGroup[dep1].processConfig.imageWatermarks[dep2].overwriteParams.referPos);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".OverwriteParams.Height", outputGroup[dep1].processConfig.imageWatermarks[dep2].overwriteParams.height);
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.ImageWatermarks." + std::to_string(dep2 + 1) + ".TemplateId", outputGroup[dep1].processConfig.imageWatermarks[dep2].templateId);
    }
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Container.Format", outputGroup[dep1].processConfig.transcode.overwriteParams.container.format);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.MuxConfig.Segment.Duration", outputGroup[dep1].processConfig.transcode.overwriteParams.muxConfig.segment.duration);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.MuxConfig.Segment.ForceSegTime", outputGroup[dep1].processConfig.transcode.overwriteParams.muxConfig.segment.forceSegTime);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Profile", outputGroup[dep1].processConfig.transcode.overwriteParams.video.profile);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Fps", outputGroup[dep1].processConfig.transcode.overwriteParams.video.fps);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Bufsize", outputGroup[dep1].processConfig.transcode.overwriteParams.video.bufsize);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Gop", outputGroup[dep1].processConfig.transcode.overwriteParams.video.gop);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Bitrate", outputGroup[dep1].processConfig.transcode.overwriteParams.video.bitrate);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Preset", outputGroup[dep1].processConfig.transcode.overwriteParams.video.preset);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.LongShortMode", outputGroup[dep1].processConfig.transcode.overwriteParams.video.longShortMode);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Remove", outputGroup[dep1].processConfig.transcode.overwriteParams.video.remove);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.PixFmt", outputGroup[dep1].processConfig.transcode.overwriteParams.video.pixFmt);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Codec", outputGroup[dep1].processConfig.transcode.overwriteParams.video.codec);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Pad", outputGroup[dep1].processConfig.transcode.overwriteParams.video.pad);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.AbrMax", outputGroup[dep1].processConfig.transcode.overwriteParams.video.abrMax);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Crf", outputGroup[dep1].processConfig.transcode.overwriteParams.video.crf);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.ScanMode", outputGroup[dep1].processConfig.transcode.overwriteParams.video.scanMode);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Width", outputGroup[dep1].processConfig.transcode.overwriteParams.video.width);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Maxrate", outputGroup[dep1].processConfig.transcode.overwriteParams.video.maxrate);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Crop", outputGroup[dep1].processConfig.transcode.overwriteParams.video.crop);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Video.Height", outputGroup[dep1].processConfig.transcode.overwriteParams.video.height);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Volume.Method", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.volume.method);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Volume.TruePeak", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.volume.truePeak);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Volume.LoudnessRangeTarget", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.volume.loudnessRangeTarget);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Volume.IntegratedLoudnessTarget", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.volume.integratedLoudnessTarget);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Codec", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.codec);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Channels", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.channels);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Profile", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.profile);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Bitrate", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.bitrate);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Remove", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.remove);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Audio.Samplerate", outputGroup[dep1].processConfig.transcode.overwriteParams.audio.samplerate);
    for(auto const &iter2 : outputGroup[dep1].processConfig.transcode.overwriteParams.tags) {
      setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.OverwriteParams.Tags." + iter2.first, iter2.second);
    }
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.Transcode.TemplateId", outputGroup[dep1].processConfig.transcode.templateId);
    setParameter(std::string("OutputGroup") + "." + std::to_string(dep1 + 1) + ".ProcessConfig.IsInheritTags", outputGroup[dep1].processConfig.isInheritTags ? "true" : "false");
  }
}

std::vector<SubmitTranscodeJobRequest::InputGroup> SubmitTranscodeJobRequest::getInputGroup() const {
  return inputGroup_;
}

void SubmitTranscodeJobRequest::setInputGroup(const std::vector<SubmitTranscodeJobRequest::InputGroup> &inputGroup) {
  inputGroup_ = inputGroup;
  for(int dep1 = 0; dep1 != inputGroup.size(); dep1++) {
    setParameter(std::string("InputGroup") + "." + std::to_string(dep1 + 1) + ".Media", inputGroup[dep1].media);
    setParameter(std::string("InputGroup") + "." + std::to_string(dep1 + 1) + ".InputUrl", inputGroup[dep1].inputUrl);
    setParameter(std::string("InputGroup") + "." + std::to_string(dep1 + 1) + ".Type", inputGroup[dep1].type);
  }
}

SubmitTranscodeJobRequest::ScheduleConfig SubmitTranscodeJobRequest::getScheduleConfig() const {
  return scheduleConfig_;
}

void SubmitTranscodeJobRequest::setScheduleConfig(const SubmitTranscodeJobRequest::ScheduleConfig &scheduleConfig) {
  scheduleConfig_ = scheduleConfig;
  setParameter(std::string("ScheduleConfig") + ".Priority", std::to_string(scheduleConfig.priority));
  setParameter(std::string("ScheduleConfig") + ".PipelineId", scheduleConfig.pipelineId);
}

std::string SubmitTranscodeJobRequest::getName() const {
  return name_;
}

void SubmitTranscodeJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

