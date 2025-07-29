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

#include <alibabacloud/live/model/CreateLiveAIStudioRequest.h>

using AlibabaCloud::Live::Model::CreateLiveAIStudioRequest;

CreateLiveAIStudioRequest::CreateLiveAIStudioRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateLiveAIStudio") {
  setMethod(HttpRequest::Method::Post);
}

CreateLiveAIStudioRequest::~CreateLiveAIStudioRequest() {}

std::string CreateLiveAIStudioRequest::getBackgroundResourceId() const {
  return backgroundResourceId_;
}

void CreateLiveAIStudioRequest::setBackgroundResourceId(const std::string &backgroundResourceId) {
  backgroundResourceId_ = backgroundResourceId;
  setParameter(std::string("BackgroundResourceId"), backgroundResourceId);
}

std::string CreateLiveAIStudioRequest::getDescription() const {
  return description_;
}

void CreateLiveAIStudioRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

CreateLiveAIStudioRequest::MediaLayout CreateLiveAIStudioRequest::getMediaLayout() const {
  return mediaLayout_;
}

void CreateLiveAIStudioRequest::setMediaLayout(const CreateLiveAIStudioRequest::MediaLayout &mediaLayout) {
  mediaLayout_ = mediaLayout;
  setParameter(std::string("MediaLayout") + ".PositionX", std::to_string(mediaLayout.positionX));
  setParameter(std::string("MediaLayout") + ".PositionY", std::to_string(mediaLayout.positionY));
  setParameter(std::string("MediaLayout") + ".HeightNormalized", std::to_string(mediaLayout.heightNormalized));
}

std::string CreateLiveAIStudioRequest::getBackgroundType() const {
  return backgroundType_;
}

void CreateLiveAIStudioRequest::setBackgroundType(const std::string &backgroundType) {
  backgroundType_ = backgroundType;
  setParameter(std::string("BackgroundType"), backgroundType);
}

std::string CreateLiveAIStudioRequest::getMattingType() const {
  return mattingType_;
}

void CreateLiveAIStudioRequest::setMattingType(const std::string &mattingType) {
  mattingType_ = mattingType;
  setParameter(std::string("MattingType"), mattingType);
}

std::string CreateLiveAIStudioRequest::getMediaResourceUrl() const {
  return mediaResourceUrl_;
}

void CreateLiveAIStudioRequest::setMediaResourceUrl(const std::string &mediaResourceUrl) {
  mediaResourceUrl_ = mediaResourceUrl;
  setParameter(std::string("MediaResourceUrl"), mediaResourceUrl);
}

std::string CreateLiveAIStudioRequest::getRegionId() const {
  return regionId_;
}

void CreateLiveAIStudioRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateLiveAIStudioRequest::getHeight() const {
  return height_;
}

void CreateLiveAIStudioRequest::setHeight(int height) {
  height_ = height;
  setParameter(std::string("Height"), std::to_string(height));
}

std::string CreateLiveAIStudioRequest::getBackgroundResourceUrl() const {
  return backgroundResourceUrl_;
}

void CreateLiveAIStudioRequest::setBackgroundResourceUrl(const std::string &backgroundResourceUrl) {
  backgroundResourceUrl_ = backgroundResourceUrl;
  setParameter(std::string("BackgroundResourceUrl"), backgroundResourceUrl);
}

std::string CreateLiveAIStudioRequest::getMediaResourceId() const {
  return mediaResourceId_;
}

void CreateLiveAIStudioRequest::setMediaResourceId(const std::string &mediaResourceId) {
  mediaResourceId_ = mediaResourceId;
  setParameter(std::string("MediaResourceId"), mediaResourceId);
}

CreateLiveAIStudioRequest::MattingLayout CreateLiveAIStudioRequest::getMattingLayout() const {
  return mattingLayout_;
}

void CreateLiveAIStudioRequest::setMattingLayout(const CreateLiveAIStudioRequest::MattingLayout &mattingLayout) {
  mattingLayout_ = mattingLayout;
  setParameter(std::string("MattingLayout") + ".PositionX", std::to_string(mattingLayout.positionX));
  setParameter(std::string("MattingLayout") + ".PositionY", std::to_string(mattingLayout.positionY));
  setParameter(std::string("MattingLayout") + ".HeightNormalized", std::to_string(mattingLayout.heightNormalized));
}

long CreateLiveAIStudioRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLiveAIStudioRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLiveAIStudioRequest::getStudioName() const {
  return studioName_;
}

void CreateLiveAIStudioRequest::setStudioName(const std::string &studioName) {
  studioName_ = studioName;
  setParameter(std::string("StudioName"), studioName);
}

int CreateLiveAIStudioRequest::getWidth() const {
  return width_;
}

void CreateLiveAIStudioRequest::setWidth(int width) {
  width_ = width;
  setParameter(std::string("Width"), std::to_string(width));
}

std::string CreateLiveAIStudioRequest::getMediaType() const {
  return mediaType_;
}

void CreateLiveAIStudioRequest::setMediaType(const std::string &mediaType) {
  mediaType_ = mediaType;
  setParameter(std::string("MediaType"), mediaType);
}

