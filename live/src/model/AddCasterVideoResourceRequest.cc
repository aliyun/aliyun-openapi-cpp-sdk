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

#include <alibabacloud/live/model/AddCasterVideoResourceRequest.h>

using AlibabaCloud::Live::Model::AddCasterVideoResourceRequest;

AddCasterVideoResourceRequest::AddCasterVideoResourceRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddCasterVideoResource") {
  setMethod(HttpRequest::Method::Post);
}

AddCasterVideoResourceRequest::~AddCasterVideoResourceRequest() {}

std::string AddCasterVideoResourceRequest::getImageId() const {
  return imageId_;
}

void AddCasterVideoResourceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

int AddCasterVideoResourceRequest::getInputType() const {
  return inputType_;
}

void AddCasterVideoResourceRequest::setInputType(int inputType) {
  inputType_ = inputType;
  setParameter(std::string("InputType"), std::to_string(inputType));
}

int AddCasterVideoResourceRequest::getEndOffset() const {
  return endOffset_;
}

void AddCasterVideoResourceRequest::setEndOffset(int endOffset) {
  endOffset_ = endOffset;
  setParameter(std::string("EndOffset"), std::to_string(endOffset));
}

std::string AddCasterVideoResourceRequest::getMaterialId() const {
  return materialId_;
}

void AddCasterVideoResourceRequest::setMaterialId(const std::string &materialId) {
  materialId_ = materialId;
  setParameter(std::string("MaterialId"), materialId);
}

std::string AddCasterVideoResourceRequest::getRegionId() const {
  return regionId_;
}

void AddCasterVideoResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddCasterVideoResourceRequest::getVodUrl() const {
  return vodUrl_;
}

void AddCasterVideoResourceRequest::setVodUrl(const std::string &vodUrl) {
  vodUrl_ = vodUrl;
  setParameter(std::string("VodUrl"), vodUrl);
}

std::string AddCasterVideoResourceRequest::getStreamId() const {
  return streamId_;
}

void AddCasterVideoResourceRequest::setStreamId(const std::string &streamId) {
  streamId_ = streamId;
  setParameter(std::string("StreamId"), streamId);
}

std::string AddCasterVideoResourceRequest::getCasterId() const {
  return casterId_;
}

void AddCasterVideoResourceRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

long AddCasterVideoResourceRequest::getOwnerId() const {
  return ownerId_;
}

void AddCasterVideoResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AddCasterVideoResourceRequest::getStreamMonitor() const {
  return streamMonitor_;
}

void AddCasterVideoResourceRequest::setStreamMonitor(int streamMonitor) {
  streamMonitor_ = streamMonitor;
  setParameter(std::string("StreamMonitor"), std::to_string(streamMonitor));
}

int AddCasterVideoResourceRequest::getBeginOffset() const {
  return beginOffset_;
}

void AddCasterVideoResourceRequest::setBeginOffset(int beginOffset) {
  beginOffset_ = beginOffset;
  setParameter(std::string("BeginOffset"), std::to_string(beginOffset));
}

int AddCasterVideoResourceRequest::getFixedDelayDuration() const {
  return fixedDelayDuration_;
}

void AddCasterVideoResourceRequest::setFixedDelayDuration(int fixedDelayDuration) {
  fixedDelayDuration_ = fixedDelayDuration;
  setParameter(std::string("FixedDelayDuration"), std::to_string(fixedDelayDuration));
}

std::string AddCasterVideoResourceRequest::getLiveStreamUrl() const {
  return liveStreamUrl_;
}

void AddCasterVideoResourceRequest::setLiveStreamUrl(const std::string &liveStreamUrl) {
  liveStreamUrl_ = liveStreamUrl;
  setParameter(std::string("LiveStreamUrl"), liveStreamUrl);
}

std::string AddCasterVideoResourceRequest::getLocationId() const {
  return locationId_;
}

void AddCasterVideoResourceRequest::setLocationId(const std::string &locationId) {
  locationId_ = locationId;
  setParameter(std::string("LocationId"), locationId);
}

std::string AddCasterVideoResourceRequest::getImageUrl() const {
  return imageUrl_;
}

void AddCasterVideoResourceRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

int AddCasterVideoResourceRequest::getPtsCallbackInterval() const {
  return ptsCallbackInterval_;
}

void AddCasterVideoResourceRequest::setPtsCallbackInterval(int ptsCallbackInterval) {
  ptsCallbackInterval_ = ptsCallbackInterval;
  setParameter(std::string("PtsCallbackInterval"), std::to_string(ptsCallbackInterval));
}

std::string AddCasterVideoResourceRequest::getResourceName() const {
  return resourceName_;
}

void AddCasterVideoResourceRequest::setResourceName(const std::string &resourceName) {
  resourceName_ = resourceName;
  setParameter(std::string("ResourceName"), resourceName);
}

int AddCasterVideoResourceRequest::getRepeatNum() const {
  return repeatNum_;
}

void AddCasterVideoResourceRequest::setRepeatNum(int repeatNum) {
  repeatNum_ = repeatNum;
  setParameter(std::string("RepeatNum"), std::to_string(repeatNum));
}

