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

#include <alibabacloud/live/model/EditShowAndReplaceRequest.h>

using AlibabaCloud::Live::Model::EditShowAndReplaceRequest;

EditShowAndReplaceRequest::EditShowAndReplaceRequest()
    : RpcServiceRequest("live", "2016-11-01", "EditShowAndReplace") {
  setMethod(HttpRequest::Method::Post);
}

EditShowAndReplaceRequest::~EditShowAndReplaceRequest() {}

float EditShowAndReplaceRequest::getStartTime() const {
  return startTime_;
}

void EditShowAndReplaceRequest::setStartTime(float startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string EditShowAndReplaceRequest::getUserData() const {
  return userData_;
}

void EditShowAndReplaceRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string EditShowAndReplaceRequest::getRegionId() const {
  return regionId_;
}

void EditShowAndReplaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EditShowAndReplaceRequest::getStorageInfo() const {
  return storageInfo_;
}

void EditShowAndReplaceRequest::setStorageInfo(const std::string &storageInfo) {
  storageInfo_ = storageInfo;
  setParameter(std::string("StorageInfo"), storageInfo);
}

std::string EditShowAndReplaceRequest::getCasterId() const {
  return casterId_;
}

void EditShowAndReplaceRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

float EditShowAndReplaceRequest::getEndTime() const {
  return endTime_;
}

void EditShowAndReplaceRequest::setEndTime(float endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long EditShowAndReplaceRequest::getOwnerId() const {
  return ownerId_;
}

void EditShowAndReplaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EditShowAndReplaceRequest::getShowId() const {
  return showId_;
}

void EditShowAndReplaceRequest::setShowId(const std::string &showId) {
  showId_ = showId;
  setParameter(std::string("ShowId"), showId);
}

