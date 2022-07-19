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

#include <alibabacloud/dataworks-public/model/ListShiftPersonnelsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListShiftPersonnelsRequest;

ListShiftPersonnelsRequest::ListShiftPersonnelsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListShiftPersonnels") {
  setMethod(HttpRequest::Method::Post);
}

ListShiftPersonnelsRequest::~ListShiftPersonnelsRequest() {}

std::string ListShiftPersonnelsRequest::getShiftPersonUID() const {
  return shiftPersonUID_;
}

void ListShiftPersonnelsRequest::setShiftPersonUID(const std::string &shiftPersonUID) {
  shiftPersonUID_ = shiftPersonUID;
  setBodyParameter(std::string("ShiftPersonUID"), shiftPersonUID);
}

std::string ListShiftPersonnelsRequest::getUserType() const {
  return userType_;
}

void ListShiftPersonnelsRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setBodyParameter(std::string("UserType"), userType);
}

long ListShiftPersonnelsRequest::getEndTime() const {
  return endTime_;
}

void ListShiftPersonnelsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListShiftPersonnelsRequest::getBeginTime() const {
  return beginTime_;
}

void ListShiftPersonnelsRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setBodyParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string ListShiftPersonnelsRequest::getShiftScheduleIdentifier() const {
  return shiftScheduleIdentifier_;
}

void ListShiftPersonnelsRequest::setShiftScheduleIdentifier(const std::string &shiftScheduleIdentifier) {
  shiftScheduleIdentifier_ = shiftScheduleIdentifier;
  setBodyParameter(std::string("ShiftScheduleIdentifier"), shiftScheduleIdentifier);
}

