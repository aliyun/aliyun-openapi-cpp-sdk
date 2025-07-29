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

#include <alibabacloud/live/model/AddCasterLayoutRequest.h>

using AlibabaCloud::Live::Model::AddCasterLayoutRequest;

AddCasterLayoutRequest::AddCasterLayoutRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddCasterLayout") {
  setMethod(HttpRequest::Method::Post);
}

AddCasterLayoutRequest::~AddCasterLayoutRequest() {}

std::vector<std::string> AddCasterLayoutRequest::getBlendList() const {
  return blendList_;
}

void AddCasterLayoutRequest::setBlendList(const std::vector<std::string> &blendList) {
  blendList_ = blendList;
}

std::string AddCasterLayoutRequest::getRegionId() const {
  return regionId_;
}

void AddCasterLayoutRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddCasterLayoutRequest::getCasterId() const {
  return casterId_;
}

void AddCasterLayoutRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

long AddCasterLayoutRequest::getOwnerId() const {
  return ownerId_;
}

void AddCasterLayoutRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<AddCasterLayoutRequest::AudioLayer> AddCasterLayoutRequest::getAudioLayer() const {
  return audioLayer_;
}

void AddCasterLayoutRequest::setAudioLayer(const std::vector<AddCasterLayoutRequest::AudioLayer> &audioLayer) {
  audioLayer_ = audioLayer;
  for(int dep1 = 0; dep1 != audioLayer.size(); dep1++) {
  auto audioLayerObj = audioLayer.at(dep1);
  std::string audioLayerObjStr = std::string("AudioLayer") + "." + std::to_string(dep1 + 1);
    setParameter(audioLayerObjStr + ".FixedDelayDuration", std::to_string(audioLayerObj.fixedDelayDuration));
    setParameter(audioLayerObjStr + ".ValidChannel", audioLayerObj.validChannel);
    setParameter(audioLayerObjStr + ".VolumeRate", std::to_string(audioLayerObj.volumeRate));
  }
}

std::vector<AddCasterLayoutRequest::VideoLayer> AddCasterLayoutRequest::getVideoLayer() const {
  return videoLayer_;
}

void AddCasterLayoutRequest::setVideoLayer(const std::vector<AddCasterLayoutRequest::VideoLayer> &videoLayer) {
  videoLayer_ = videoLayer;
  for(int dep1 = 0; dep1 != videoLayer.size(); dep1++) {
  auto videoLayerObj = videoLayer.at(dep1);
  std::string videoLayerObjStr = std::string("VideoLayer") + "." + std::to_string(dep1 + 1);
    setParameter(videoLayerObjStr + ".FillMode", videoLayerObj.fillMode);
    setParameter(videoLayerObjStr + ".FixedDelayDuration", std::to_string(videoLayerObj.fixedDelayDuration));
    setParameter(videoLayerObjStr + ".HeightNormalized", std::to_string(videoLayerObj.heightNormalized));
    setParameter(videoLayerObjStr + ".PositionRefer", videoLayerObj.positionRefer);
    setParameter(videoLayerObjStr + ".WidthNormalized", std::to_string(videoLayerObj.widthNormalized));
  }
}

std::vector<std::string> AddCasterLayoutRequest::getMixList() const {
  return mixList_;
}

void AddCasterLayoutRequest::setMixList(const std::vector<std::string> &mixList) {
  mixList_ = mixList;
}

