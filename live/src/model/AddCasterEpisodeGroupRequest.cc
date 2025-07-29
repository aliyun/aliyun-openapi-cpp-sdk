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

#include <alibabacloud/live/model/AddCasterEpisodeGroupRequest.h>

using AlibabaCloud::Live::Model::AddCasterEpisodeGroupRequest;

AddCasterEpisodeGroupRequest::AddCasterEpisodeGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddCasterEpisodeGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddCasterEpisodeGroupRequest::~AddCasterEpisodeGroupRequest() {}

std::string AddCasterEpisodeGroupRequest::getClientToken() const {
  return clientToken_;
}

void AddCasterEpisodeGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddCasterEpisodeGroupRequest::getStartTime() const {
  return startTime_;
}

void AddCasterEpisodeGroupRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string AddCasterEpisodeGroupRequest::getRegionId() const {
  return regionId_;
}

void AddCasterEpisodeGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddCasterEpisodeGroupRequest::getSideOutputUrl() const {
  return sideOutputUrl_;
}

void AddCasterEpisodeGroupRequest::setSideOutputUrl(const std::string &sideOutputUrl) {
  sideOutputUrl_ = sideOutputUrl;
  setParameter(std::string("SideOutputUrl"), sideOutputUrl);
}

std::vector<AddCasterEpisodeGroupRequest::Item> AddCasterEpisodeGroupRequest::getItem() const {
  return item_;
}

void AddCasterEpisodeGroupRequest::setItem(const std::vector<AddCasterEpisodeGroupRequest::Item> &item) {
  item_ = item;
  for(int dep1 = 0; dep1 != item.size(); dep1++) {
  auto itemObj = item.at(dep1);
  std::string itemObjStr = std::string("Item") + "." + std::to_string(dep1 + 1);
    setParameter(itemObjStr + ".ItemName", itemObj.itemName);
    setParameter(itemObjStr + ".VodUrl", itemObj.vodUrl);
  }
}

std::string AddCasterEpisodeGroupRequest::getDomainName() const {
  return domainName_;
}

void AddCasterEpisodeGroupRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long AddCasterEpisodeGroupRequest::getOwnerId() const {
  return ownerId_;
}

void AddCasterEpisodeGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AddCasterEpisodeGroupRequest::getRepeatNum() const {
  return repeatNum_;
}

void AddCasterEpisodeGroupRequest::setRepeatNum(int repeatNum) {
  repeatNum_ = repeatNum;
  setParameter(std::string("RepeatNum"), std::to_string(repeatNum));
}

std::string AddCasterEpisodeGroupRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void AddCasterEpisodeGroupRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

