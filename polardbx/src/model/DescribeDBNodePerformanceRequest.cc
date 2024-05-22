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

#include <alibabacloud/polardbx/model/DescribeDBNodePerformanceRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeDBNodePerformanceRequest;

DescribeDBNodePerformanceRequest::DescribeDBNodePerformanceRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeDBNodePerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBNodePerformanceRequest::~DescribeDBNodePerformanceRequest() {}

std::string DescribeDBNodePerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBNodePerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDBNodePerformanceRequest::getDBNodeRole() const {
  return dBNodeRole_;
}

void DescribeDBNodePerformanceRequest::setDBNodeRole(const std::string &dBNodeRole) {
  dBNodeRole_ = dBNodeRole;
  setParameter(std::string("DBNodeRole"), dBNodeRole);
}

std::string DescribeDBNodePerformanceRequest::getCharacterType() const {
  return characterType_;
}

void DescribeDBNodePerformanceRequest::setCharacterType(const std::string &characterType) {
  characterType_ = characterType;
  setParameter(std::string("CharacterType"), characterType);
}

std::string DescribeDBNodePerformanceRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeDBNodePerformanceRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string DescribeDBNodePerformanceRequest::getDBNodeIds() const {
  return dBNodeIds_;
}

void DescribeDBNodePerformanceRequest::setDBNodeIds(const std::string &dBNodeIds) {
  dBNodeIds_ = dBNodeIds;
  setParameter(std::string("DBNodeIds"), dBNodeIds);
}

std::string DescribeDBNodePerformanceRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBNodePerformanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBNodePerformanceRequest::getKey() const {
  return key_;
}

void DescribeDBNodePerformanceRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string DescribeDBNodePerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBNodePerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

