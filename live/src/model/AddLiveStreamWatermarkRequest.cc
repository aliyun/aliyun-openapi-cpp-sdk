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

#include <alibabacloud/live/model/AddLiveStreamWatermarkRequest.h>

using AlibabaCloud::Live::Model::AddLiveStreamWatermarkRequest;

AddLiveStreamWatermarkRequest::AddLiveStreamWatermarkRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveStreamWatermark") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveStreamWatermarkRequest::~AddLiveStreamWatermarkRequest() {}

float AddLiveStreamWatermarkRequest::getYOffset() const {
  return yOffset_;
}

void AddLiveStreamWatermarkRequest::setYOffset(float yOffset) {
  yOffset_ = yOffset;
  setParameter(std::string("YOffset"), std::to_string(yOffset));
}

std::string AddLiveStreamWatermarkRequest::getPictureUrl() const {
  return pictureUrl_;
}

void AddLiveStreamWatermarkRequest::setPictureUrl(const std::string &pictureUrl) {
  pictureUrl_ = pictureUrl;
  setParameter(std::string("PictureUrl"), pictureUrl);
}

std::string AddLiveStreamWatermarkRequest::getDescription() const {
  return description_;
}

void AddLiveStreamWatermarkRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int AddLiveStreamWatermarkRequest::getType() const {
  return type_;
}

void AddLiveStreamWatermarkRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string AddLiveStreamWatermarkRequest::getRegionId() const {
  return regionId_;
}

void AddLiveStreamWatermarkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int AddLiveStreamWatermarkRequest::getHeight() const {
  return height_;
}

void AddLiveStreamWatermarkRequest::setHeight(int height) {
  height_ = height;
  setParameter(std::string("Height"), std::to_string(height));
}

float AddLiveStreamWatermarkRequest::getXOffset() const {
  return xOffset_;
}

void AddLiveStreamWatermarkRequest::setXOffset(float xOffset) {
  xOffset_ = xOffset;
  setParameter(std::string("XOffset"), std::to_string(xOffset));
}

long AddLiveStreamWatermarkRequest::getOwnerId() const {
  return ownerId_;
}

void AddLiveStreamWatermarkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AddLiveStreamWatermarkRequest::getRefWidth() const {
  return refWidth_;
}

void AddLiveStreamWatermarkRequest::setRefWidth(int refWidth) {
  refWidth_ = refWidth;
  setParameter(std::string("RefWidth"), std::to_string(refWidth));
}

int AddLiveStreamWatermarkRequest::getTransparency() const {
  return transparency_;
}

void AddLiveStreamWatermarkRequest::setTransparency(int transparency) {
  transparency_ = transparency;
  setParameter(std::string("Transparency"), std::to_string(transparency));
}

std::string AddLiveStreamWatermarkRequest::getDomain() const {
  return domain_;
}

void AddLiveStreamWatermarkRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string AddLiveStreamWatermarkRequest::getName() const {
  return name_;
}

void AddLiveStreamWatermarkRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddLiveStreamWatermarkRequest::getOffsetCorner() const {
  return offsetCorner_;
}

void AddLiveStreamWatermarkRequest::setOffsetCorner(const std::string &offsetCorner) {
  offsetCorner_ = offsetCorner;
  setParameter(std::string("OffsetCorner"), offsetCorner);
}

int AddLiveStreamWatermarkRequest::getRefHeight() const {
  return refHeight_;
}

void AddLiveStreamWatermarkRequest::setRefHeight(int refHeight) {
  refHeight_ = refHeight;
  setParameter(std::string("RefHeight"), std::to_string(refHeight));
}

