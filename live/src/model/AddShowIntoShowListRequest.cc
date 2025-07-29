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

#include <alibabacloud/live/model/AddShowIntoShowListRequest.h>

using AlibabaCloud::Live::Model::AddShowIntoShowListRequest;

AddShowIntoShowListRequest::AddShowIntoShowListRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddShowIntoShowList") {
  setMethod(HttpRequest::Method::Post);
}

AddShowIntoShowListRequest::~AddShowIntoShowListRequest() {}

std::vector<AddShowIntoShowListRequest::ShowList> AddShowIntoShowListRequest::getShowList() const {
  return showList_;
}

void AddShowIntoShowListRequest::setShowList(const std::vector<AddShowIntoShowListRequest::ShowList> &showList) {
  showList_ = showList;
  for(int dep1 = 0; dep1 != showList.size(); dep1++) {
  auto showListObj = showList.at(dep1);
  std::string showListObjStr = std::string("showList") + "." + std::to_string(dep1 + 1);
    setParameter(showListObjStr + ".duration", std::to_string(showListObj.duration));
    setParameter(showListObjStr + ".liveInputType", std::to_string(showListObj.liveInputType));
    setParameter(showListObjStr + ".repeatTimes", std::to_string(showListObj.repeatTimes));
    setParameter(showListObjStr + ".resourceId", showListObj.resourceId);
    setParameter(showListObjStr + ".resourceType", showListObj.resourceType);
    setParameter(showListObjStr + ".resourceUrl", showListObj.resourceUrl);
    setParameter(showListObjStr + ".showName", showListObj.showName);
  }
}

int AddShowIntoShowListRequest::getLiveInputType() const {
  return liveInputType_;
}

void AddShowIntoShowListRequest::setLiveInputType(int liveInputType) {
  liveInputType_ = liveInputType;
  setParameter(std::string("LiveInputType"), std::to_string(liveInputType));
}

bool AddShowIntoShowListRequest::getIsBatchMode() const {
  return isBatchMode_;
}

void AddShowIntoShowListRequest::setIsBatchMode(bool isBatchMode) {
  isBatchMode_ = isBatchMode;
  setParameter(std::string("isBatchMode"), isBatchMode ? "true" : "false");
}

long AddShowIntoShowListRequest::getDuration() const {
  return duration_;
}

void AddShowIntoShowListRequest::setDuration(long duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

int AddShowIntoShowListRequest::getRepeatTimes() const {
  return repeatTimes_;
}

void AddShowIntoShowListRequest::setRepeatTimes(int repeatTimes) {
  repeatTimes_ = repeatTimes;
  setParameter(std::string("RepeatTimes"), std::to_string(repeatTimes));
}

std::string AddShowIntoShowListRequest::getShowName() const {
  return showName_;
}

void AddShowIntoShowListRequest::setShowName(const std::string &showName) {
  showName_ = showName;
  setParameter(std::string("ShowName"), showName);
}

std::string AddShowIntoShowListRequest::getRegionId() const {
  return regionId_;
}

void AddShowIntoShowListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddShowIntoShowListRequest::getResourceId() const {
  return resourceId_;
}

void AddShowIntoShowListRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string AddShowIntoShowListRequest::getCasterId() const {
  return casterId_;
}

void AddShowIntoShowListRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

long AddShowIntoShowListRequest::getOwnerId() const {
  return ownerId_;
}

void AddShowIntoShowListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddShowIntoShowListRequest::getResourceType() const {
  return resourceType_;
}

void AddShowIntoShowListRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string AddShowIntoShowListRequest::getResourceUrl() const {
  return resourceUrl_;
}

void AddShowIntoShowListRequest::setResourceUrl(const std::string &resourceUrl) {
  resourceUrl_ = resourceUrl;
  setParameter(std::string("ResourceUrl"), resourceUrl);
}

int AddShowIntoShowListRequest::getSpot() const {
  return spot_;
}

void AddShowIntoShowListRequest::setSpot(int spot) {
  spot_ = spot;
  setParameter(std::string("Spot"), std::to_string(spot));
}

