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

#include <alibabacloud/cdn/model/SetWaitingRoomConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetWaitingRoomConfigRequest;

SetWaitingRoomConfigRequest::SetWaitingRoomConfigRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "SetWaitingRoomConfig") {
  setMethod(HttpRequest::Method::Post);
}

SetWaitingRoomConfigRequest::~SetWaitingRoomConfigRequest() {}

std::string SetWaitingRoomConfigRequest::getWaitUrl() const {
  return waitUrl_;
}

void SetWaitingRoomConfigRequest::setWaitUrl(const std::string &waitUrl) {
  waitUrl_ = waitUrl;
  setParameter(std::string("WaitUrl"), waitUrl);
}

std::string SetWaitingRoomConfigRequest::getWaitUri() const {
  return waitUri_;
}

void SetWaitingRoomConfigRequest::setWaitUri(const std::string &waitUri) {
  waitUri_ = waitUri;
  setParameter(std::string("WaitUri"), waitUri);
}

int SetWaitingRoomConfigRequest::getMaxTimeWait() const {
  return maxTimeWait_;
}

void SetWaitingRoomConfigRequest::setMaxTimeWait(int maxTimeWait) {
  maxTimeWait_ = maxTimeWait;
  setParameter(std::string("MaxTimeWait"), std::to_string(maxTimeWait));
}

std::string SetWaitingRoomConfigRequest::getDomainName() const {
  return domainName_;
}

void SetWaitingRoomConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int SetWaitingRoomConfigRequest::getAllowPct() const {
  return allowPct_;
}

void SetWaitingRoomConfigRequest::setAllowPct(int allowPct) {
  allowPct_ = allowPct;
  setParameter(std::string("AllowPct"), std::to_string(allowPct));
}

int SetWaitingRoomConfigRequest::getGapTime() const {
  return gapTime_;
}

void SetWaitingRoomConfigRequest::setGapTime(int gapTime) {
  gapTime_ = gapTime;
  setParameter(std::string("GapTime"), std::to_string(gapTime));
}

long SetWaitingRoomConfigRequest::getOwnerId() const {
  return ownerId_;
}

void SetWaitingRoomConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

