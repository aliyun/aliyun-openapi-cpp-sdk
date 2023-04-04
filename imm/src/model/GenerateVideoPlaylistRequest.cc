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

#include <alibabacloud/imm/model/GenerateVideoPlaylistRequest.h>

using AlibabaCloud::Imm::Model::GenerateVideoPlaylistRequest;

GenerateVideoPlaylistRequest::GenerateVideoPlaylistRequest()
    : RpcServiceRequest("imm", "2020-09-30", "GenerateVideoPlaylist") {
  setMethod(HttpRequest::Method::Post);
}

GenerateVideoPlaylistRequest::~GenerateVideoPlaylistRequest() {}

float GenerateVideoPlaylistRequest::getSourceDuration() const {
  return sourceDuration_;
}

void GenerateVideoPlaylistRequest::setSourceDuration(float sourceDuration) {
  sourceDuration_ = sourceDuration;
  setParameter(std::string("SourceDuration"), std::to_string(sourceDuration));
}

std::vector<GenerateVideoPlaylistRequest::Targets> GenerateVideoPlaylistRequest::getTargets() const {
  return targets_;
}

void GenerateVideoPlaylistRequest::setTargets(const std::vector<GenerateVideoPlaylistRequest::Targets> &targets) {
  targets_ = targets;
  for(int dep1 = 0; dep1 != targets.size(); dep1++) {
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Duration", std::to_string(targets[dep1].duration));
    for(int dep2 = 0; dep2 != targets[dep1].initialSegments.size(); dep2++) {
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".InitialSegments." + std::to_string(dep2 + 1), std::to_string(targets[dep1].initialSegments[dep2]));
    }
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Subtitle.DisableSubtitle", targets[dep1].subtitle.disableSubtitle ? "true" : "false");
    for(int dep2 = 0; dep2 != targets[dep1].subtitle.stream.size(); dep2++) {
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Subtitle.Stream." + std::to_string(dep2 + 1), std::to_string(targets[dep1].subtitle.stream[dep2]));
    }
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Subtitle.ExtractSubtitle.Format", targets[dep1].subtitle.extractSubtitle.format);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Subtitle.ExtractSubtitle.URI", targets[dep1].subtitle.extractSubtitle.uRI);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".TranscodeAhead", std::to_string(targets[dep1].transcodeAhead));
    for(int dep2 = 0; dep2 != targets[dep1].video.filterVideo.delogos.size(); dep2++) {
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Delogos." + std::to_string(dep2 + 1) + ".Duration", std::to_string(targets[dep1].video.filterVideo.delogos[dep2].duration));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Delogos." + std::to_string(dep2 + 1) + ".Dx", std::to_string(targets[dep1].video.filterVideo.delogos[dep2].dx));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Delogos." + std::to_string(dep2 + 1) + ".Dy", std::to_string(targets[dep1].video.filterVideo.delogos[dep2].dy));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Delogos." + std::to_string(dep2 + 1) + ".Width", std::to_string(targets[dep1].video.filterVideo.delogos[dep2].width));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Delogos." + std::to_string(dep2 + 1) + ".ReferPos", targets[dep1].video.filterVideo.delogos[dep2].referPos);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Delogos." + std::to_string(dep2 + 1) + ".StartTime", std::to_string(targets[dep1].video.filterVideo.delogos[dep2].startTime));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Delogos." + std::to_string(dep2 + 1) + ".Height", std::to_string(targets[dep1].video.filterVideo.delogos[dep2].height));
    }
    for(int dep2 = 0; dep2 != targets[dep1].video.filterVideo.watermarks.size(); dep2++) {
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".FontApha", std::to_string(targets[dep1].video.filterVideo.watermarks[dep2].fontApha));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".FontSize", std::to_string(targets[dep1].video.filterVideo.watermarks[dep2].fontSize));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".StartTime", std::to_string(targets[dep1].video.filterVideo.watermarks[dep2].startTime));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".Type", targets[dep1].video.filterVideo.watermarks[dep2].type);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".FontName", targets[dep1].video.filterVideo.watermarks[dep2].fontName);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".URI", targets[dep1].video.filterVideo.watermarks[dep2].uRI);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".Content", targets[dep1].video.filterVideo.watermarks[dep2].content);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".BorderColor", targets[dep1].video.filterVideo.watermarks[dep2].borderColor);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".Duration", std::to_string(targets[dep1].video.filterVideo.watermarks[dep2].duration));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".Dx", std::to_string(targets[dep1].video.filterVideo.watermarks[dep2].dx));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".Dy", std::to_string(targets[dep1].video.filterVideo.watermarks[dep2].dy));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".BorderWidth", std::to_string(targets[dep1].video.filterVideo.watermarks[dep2].borderWidth));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".Width", std::to_string(targets[dep1].video.filterVideo.watermarks[dep2].width));
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".FontColor", targets[dep1].video.filterVideo.watermarks[dep2].fontColor);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".ReferPos", targets[dep1].video.filterVideo.watermarks[dep2].referPos);
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.FilterVideo.Watermarks." + std::to_string(dep2 + 1) + ".Height", std::to_string(targets[dep1].video.filterVideo.watermarks[dep2].height));
    }
    for(int dep2 = 0; dep2 != targets[dep1].video.stream.size(); dep2++) {
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.Stream." + std::to_string(dep2 + 1), std::to_string(targets[dep1].video.stream[dep2]));
    }
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.DisableVideo", targets[dep1].video.disableVideo ? "true" : "false");
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.ResolutionOption", targets[dep1].video.transcodeVideo.resolutionOption);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.GOPSize", std::to_string(targets[dep1].video.transcodeVideo.gOPSize));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.PixelFormat", targets[dep1].video.transcodeVideo.pixelFormat);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.FrameRate", std::to_string(targets[dep1].video.transcodeVideo.frameRate));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.Rotation", std::to_string(targets[dep1].video.transcodeVideo.rotation));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.Bitrate", std::to_string(targets[dep1].video.transcodeVideo.bitrate));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.BufferSize", std::to_string(targets[dep1].video.transcodeVideo.bufferSize));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.Resolution", targets[dep1].video.transcodeVideo.resolution);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.BFrames", std::to_string(targets[dep1].video.transcodeVideo.bFrames));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.MaxBitrate", std::to_string(targets[dep1].video.transcodeVideo.maxBitrate));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.Codec", targets[dep1].video.transcodeVideo.codec);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.BitrateOption", targets[dep1].video.transcodeVideo.bitrateOption);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.Refs", std::to_string(targets[dep1].video.transcodeVideo.refs));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.CRF", std::to_string(targets[dep1].video.transcodeVideo.cRF));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.ScaleType", targets[dep1].video.transcodeVideo.scaleType);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.FrameRateOption", targets[dep1].video.transcodeVideo.frameRateOption);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Video.TranscodeVideo.AdaptiveResolutionDirection", targets[dep1].video.transcodeVideo.adaptiveResolutionDirection ? "true" : "false");
    for(int dep2 = 0; dep2 != targets[dep1].audio.stream.size(); dep2++) {
      setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.Stream." + std::to_string(dep2 + 1), std::to_string(targets[dep1].audio.stream[dep2]));
    }
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.DisableAudio", targets[dep1].audio.disableAudio ? "true" : "false");
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.TranscodeAudio.Codec", targets[dep1].audio.transcodeAudio.codec);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.TranscodeAudio.BitrateOption", targets[dep1].audio.transcodeAudio.bitrateOption);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.TranscodeAudio.Channel", std::to_string(targets[dep1].audio.transcodeAudio.channel));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.TranscodeAudio.Bitrate", std::to_string(targets[dep1].audio.transcodeAudio.bitrate));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.TranscodeAudio.SampleRateOption", targets[dep1].audio.transcodeAudio.sampleRateOption);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.TranscodeAudio.Quality", std::to_string(targets[dep1].audio.transcodeAudio.quality));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.TranscodeAudio.SampleRate", std::to_string(targets[dep1].audio.transcodeAudio.sampleRate));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Audio.FilterAudio.Mixing", targets[dep1].audio.filterAudio.mixing ? "true" : "false");
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".URI", targets[dep1].uRI);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Speed", std::to_string(targets[dep1].speed));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".InitialTranscode", std::to_string(targets[dep1].initialTranscode));
  }
}

std::string GenerateVideoPlaylistRequest::getMasterURI() const {
  return masterURI_;
}

void GenerateVideoPlaylistRequest::setMasterURI(const std::string &masterURI) {
  masterURI_ = masterURI;
  setParameter(std::string("MasterURI"), masterURI);
}

std::string GenerateVideoPlaylistRequest::getProjectName() const {
  return projectName_;
}

void GenerateVideoPlaylistRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

GenerateVideoPlaylistRequest::CredentialConfig GenerateVideoPlaylistRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void GenerateVideoPlaylistRequest::setCredentialConfig(const GenerateVideoPlaylistRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

std::map<std::string, std::string> GenerateVideoPlaylistRequest::getTags() const {
  return tags_;
}

void GenerateVideoPlaylistRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

float GenerateVideoPlaylistRequest::getSourceStartTime() const {
  return sourceStartTime_;
}

void GenerateVideoPlaylistRequest::setSourceStartTime(float sourceStartTime) {
  sourceStartTime_ = sourceStartTime;
  setParameter(std::string("SourceStartTime"), std::to_string(sourceStartTime));
}

std::string GenerateVideoPlaylistRequest::getSourceURI() const {
  return sourceURI_;
}

void GenerateVideoPlaylistRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

std::vector<GenerateVideoPlaylistRequest::SourceSubtitles> GenerateVideoPlaylistRequest::getSourceSubtitles() const {
  return sourceSubtitles_;
}

void GenerateVideoPlaylistRequest::setSourceSubtitles(const std::vector<GenerateVideoPlaylistRequest::SourceSubtitles> &sourceSubtitles) {
  sourceSubtitles_ = sourceSubtitles;
  for(int dep1 = 0; dep1 != sourceSubtitles.size(); dep1++) {
    setParameter(std::string("SourceSubtitles") + "." + std::to_string(dep1 + 1) + ".Language", sourceSubtitles[dep1].language);
    setParameter(std::string("SourceSubtitles") + "." + std::to_string(dep1 + 1) + ".URI", sourceSubtitles[dep1].uRI);
  }
}

