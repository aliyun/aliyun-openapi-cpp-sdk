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

#include <alibabacloud/ecd/model/DescribeAlarmEventStackInfoRequest.h>

using AlibabaCloud::Ecd::Model::DescribeAlarmEventStackInfoRequest;

DescribeAlarmEventStackInfoRequest::DescribeAlarmEventStackInfoRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeAlarmEventStackInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlarmEventStackInfoRequest::~DescribeAlarmEventStackInfoRequest() {}

std::string DescribeAlarmEventStackInfoRequest::getUniqueInfo() const {
  return uniqueInfo_;
}

void DescribeAlarmEventStackInfoRequest::setUniqueInfo(const std::string &uniqueInfo) {
  uniqueInfo_ = uniqueInfo;
  setParameter(std::string("UniqueInfo"), uniqueInfo);
}

std::string DescribeAlarmEventStackInfoRequest::getEventName() const {
  return eventName_;
}

void DescribeAlarmEventStackInfoRequest::setEventName(const std::string &eventName) {
  eventName_ = eventName;
  setParameter(std::string("EventName"), eventName);
}

std::string DescribeAlarmEventStackInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeAlarmEventStackInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAlarmEventStackInfoRequest::getDesktopId() const {
  return desktopId_;
}

void DescribeAlarmEventStackInfoRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

std::string DescribeAlarmEventStackInfoRequest::getLang() const {
  return lang_;
}

void DescribeAlarmEventStackInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

