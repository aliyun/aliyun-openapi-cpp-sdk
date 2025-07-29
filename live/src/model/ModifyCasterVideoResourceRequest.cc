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

#include <alibabacloud/live/model/ModifyCasterVideoResourceRequest.h>

using AlibabaCloud::Live::Model::ModifyCasterVideoResourceRequest;

ModifyCasterVideoResourceRequest::ModifyCasterVideoResourceRequest()
    : RpcServiceRequest("live", "2016-11-01", "ModifyCasterVideoResource") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCasterVideoResourceRequest::~ModifyCasterVideoResourceRequest() {}

std::string ModifyCasterVideoResourceRequest::getImageId() const {
  return imageId_;
}

void ModifyCasterVideoResourceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

int ModifyCasterVideoResourceRequest::getInputType() const {
  return inputType_;
}

void ModifyCasterVideoResourceRequest::setInputType(int inputType) {
  inputType_ = inputType;
  setParameter(std::string("InputType"), std::to_string(inputType));
}

int ModifyCasterVideoResourceRequest::getEndOffset() const {
  return endOffset_;
}

void ModifyCasterVideoResourceRequest::setEndOffset(int endOffset) {
  endOffset_ = endOffset;
  setParameter(std::string("EndOffset"), std::to_string(endOffset));
}

std::string ModifyCasterVideoResourceRequest::getMaterialId() const {
  return materialId_;
}

void ModifyCasterVideoResourceRequest::setMaterialId(const std::string &materialId) {
  materialId_ = materialId;
  setParameter(std::string("MaterialId"), materialId);
}

std::string ModifyCasterVideoResourceRequest::getRegionId() const {
  return regionId_;
}

void ModifyCasterVideoResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCasterVideoResourceRequest::getResourceId() const {
  return resourceId_;
}

void ModifyCasterVideoResourceRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ModifyCasterVideoResourceRequest::getVodUrl() const {
  return vodUrl_;
}

void ModifyCasterVideoResourceRequest::setVodUrl(const std::string &vodUrl) {
  vodUrl_ = vodUrl;
  setParameter(std::string("VodUrl"), vodUrl);
}

std::string ModifyCasterVideoResourceRequest::getCasterId() const {
  return casterId_;
}

void ModifyCasterVideoResourceRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

long ModifyCasterVideoResourceRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCasterVideoResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyCasterVideoResourceRequest::getBeginOffset() const {
  return beginOffset_;
}

void ModifyCasterVideoResourceRequest::setBeginOffset(int beginOffset) {
  beginOffset_ = beginOffset;
  setParameter(std::string("BeginOffset"), std::to_string(beginOffset));
}

std::string ModifyCasterVideoResourceRequest::getLiveStreamUrl() const {
  return liveStreamUrl_;
}

void ModifyCasterVideoResourceRequest::setLiveStreamUrl(const std::string &liveStreamUrl) {
  liveStreamUrl_ = liveStreamUrl;
  setParameter(std::string("LiveStreamUrl"), liveStreamUrl);
}

std::string ModifyCasterVideoResourceRequest::getImageUrl() const {
  return imageUrl_;
}

void ModifyCasterVideoResourceRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

int ModifyCasterVideoResourceRequest::getPtsCallbackInterval() const {
  return ptsCallbackInterval_;
}

void ModifyCasterVideoResourceRequest::setPtsCallbackInterval(int ptsCallbackInterval) {
  ptsCallbackInterval_ = ptsCallbackInterval;
  setParameter(std::string("PtsCallbackInterval"), std::to_string(ptsCallbackInterval));
}

std::string ModifyCasterVideoResourceRequest::getResourceName() const {
  return resourceName_;
}

void ModifyCasterVideoResourceRequest::setResourceName(const std::string &resourceName) {
  resourceName_ = resourceName;
  setParameter(std::string("ResourceName"), resourceName);
}

int ModifyCasterVideoResourceRequest::getRepeatNum() const {
  return repeatNum_;
}

void ModifyCasterVideoResourceRequest::setRepeatNum(int repeatNum) {
  repeatNum_ = repeatNum;
  setParameter(std::string("RepeatNum"), std::to_string(repeatNum));
}

