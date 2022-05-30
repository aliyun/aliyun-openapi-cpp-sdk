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

#include <alibabacloud/dataworks-public/model/GetDutyRosterRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDutyRosterRequest;

GetDutyRosterRequest::GetDutyRosterRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetDutyRoster") {
  setMethod(HttpRequest::Method::Post);
}

GetDutyRosterRequest::~GetDutyRosterRequest() {}

std::string GetDutyRosterRequest::getDutyRosterIdentifier() const {
  return dutyRosterIdentifier_;
}

void GetDutyRosterRequest::setDutyRosterIdentifier(const std::string &dutyRosterIdentifier) {
  dutyRosterIdentifier_ = dutyRosterIdentifier;
  setBodyParameter(std::string("DutyRosterIdentifier"), dutyRosterIdentifier);
}

std::string GetDutyRosterRequest::getWatchkeeper() const {
  return watchkeeper_;
}

void GetDutyRosterRequest::setWatchkeeper(const std::string &watchkeeper) {
  watchkeeper_ = watchkeeper;
  setBodyParameter(std::string("Watchkeeper"), watchkeeper);
}

std::string GetDutyRosterRequest::getUserType() const {
  return userType_;
}

void GetDutyRosterRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setBodyParameter(std::string("UserType"), userType);
}

long GetDutyRosterRequest::getEndTime() const {
  return endTime_;
}

void GetDutyRosterRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetDutyRosterRequest::getBeginTime() const {
  return beginTime_;
}

void GetDutyRosterRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setBodyParameter(std::string("BeginTime"), std::to_string(beginTime));
}

