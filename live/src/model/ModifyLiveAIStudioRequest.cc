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

#include <alibabacloud/live/model/ModifyLiveAIStudioRequest.h>

using AlibabaCloud::Live::Model::ModifyLiveAIStudioRequest;

ModifyLiveAIStudioRequest::ModifyLiveAIStudioRequest()
    : RpcServiceRequest("live", "2016-11-01", "ModifyLiveAIStudio") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLiveAIStudioRequest::~ModifyLiveAIStudioRequest() {}

std::string ModifyLiveAIStudioRequest::getBackgroundResourceId() const {
  return backgroundResourceId_;
}

void ModifyLiveAIStudioRequest::setBackgroundResourceId(const std::string &backgroundResourceId) {
  backgroundResourceId_ = backgroundResourceId;
  setParameter(std::string("BackgroundResourceId"), backgroundResourceId);
}

std::string ModifyLiveAIStudioRequest::getDescription() const {
  return description_;
}

void ModifyLiveAIStudioRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

ModifyLiveAIStudioRequest::MediaLayout ModifyLiveAIStudioRequest::getMediaLayout() const {
  return mediaLayout_;
}

void ModifyLiveAIStudioRequest::setMediaLayout(const ModifyLiveAIStudioRequest::MediaLayout &mediaLayout) {
  mediaLayout_ = mediaLayout;
  setParameter(std::string("MediaLayout") + ".PositionX", std::to_string(mediaLayout.positionX));
  setParameter(std::string("MediaLayout") + ".PositionY", std::to_string(mediaLayout.positionY));
  setParameter(std::string("MediaLayout") + ".HeightNormalized", std::to_string(mediaLayout.heightNormalized));
}

std::string ModifyLiveAIStudioRequest::getBackgroundType() const {
  return backgroundType_;
}

void ModifyLiveAIStudioRequest::setBackgroundType(const std::string &backgroundType) {
  backgroundType_ = backgroundType;
  setParameter(std::string("BackgroundType"), backgroundType);
}

std::string ModifyLiveAIStudioRequest::getMattingType() const {
  return mattingType_;
}

void ModifyLiveAIStudioRequest::setMattingType(const std::string &mattingType) {
  mattingType_ = mattingType;
  setParameter(std::string("MattingType"), mattingType);
}

std::string ModifyLiveAIStudioRequest::getMediaResourceUrl() const {
  return mediaResourceUrl_;
}

void ModifyLiveAIStudioRequest::setMediaResourceUrl(const std::string &mediaResourceUrl) {
  mediaResourceUrl_ = mediaResourceUrl;
  setParameter(std::string("MediaResourceUrl"), mediaResourceUrl);
}

std::string ModifyLiveAIStudioRequest::getRegionId() const {
  return regionId_;
}

void ModifyLiveAIStudioRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ModifyLiveAIStudioRequest::getHeight() const {
  return height_;
}

void ModifyLiveAIStudioRequest::setHeight(int height) {
  height_ = height;
  setParameter(std::string("Height"), std::to_string(height));
}

std::string ModifyLiveAIStudioRequest::getBackgroundResourceUrl() const {
  return backgroundResourceUrl_;
}

void ModifyLiveAIStudioRequest::setBackgroundResourceUrl(const std::string &backgroundResourceUrl) {
  backgroundResourceUrl_ = backgroundResourceUrl;
  setParameter(std::string("BackgroundResourceUrl"), backgroundResourceUrl);
}

std::string ModifyLiveAIStudioRequest::getMediaResourceId() const {
  return mediaResourceId_;
}

void ModifyLiveAIStudioRequest::setMediaResourceId(const std::string &mediaResourceId) {
  mediaResourceId_ = mediaResourceId;
  setParameter(std::string("MediaResourceId"), mediaResourceId);
}

ModifyLiveAIStudioRequest::MattingLayout ModifyLiveAIStudioRequest::getMattingLayout() const {
  return mattingLayout_;
}

void ModifyLiveAIStudioRequest::setMattingLayout(const ModifyLiveAIStudioRequest::MattingLayout &mattingLayout) {
  mattingLayout_ = mattingLayout;
  setParameter(std::string("MattingLayout") + ".PositionX", std::to_string(mattingLayout.positionX));
  setParameter(std::string("MattingLayout") + ".PositionY", std::to_string(mattingLayout.positionY));
  setParameter(std::string("MattingLayout") + ".HeightNormalized", std::to_string(mattingLayout.heightNormalized));
}

long ModifyLiveAIStudioRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyLiveAIStudioRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyLiveAIStudioRequest::getStudioName() const {
  return studioName_;
}

void ModifyLiveAIStudioRequest::setStudioName(const std::string &studioName) {
  studioName_ = studioName;
  setParameter(std::string("StudioName"), studioName);
}

int ModifyLiveAIStudioRequest::getWidth() const {
  return width_;
}

void ModifyLiveAIStudioRequest::setWidth(int width) {
  width_ = width;
  setParameter(std::string("Width"), std::to_string(width));
}

std::string ModifyLiveAIStudioRequest::getMediaType() const {
  return mediaType_;
}

void ModifyLiveAIStudioRequest::setMediaType(const std::string &mediaType) {
  mediaType_ = mediaType;
  setParameter(std::string("MediaType"), mediaType);
}

