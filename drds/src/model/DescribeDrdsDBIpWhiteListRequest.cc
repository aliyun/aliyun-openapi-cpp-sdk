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

#include <alibabacloud/drds/model/DescribeDrdsDBIpWhiteListRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsDBIpWhiteListRequest;

DescribeDrdsDBIpWhiteListRequest::DescribeDrdsDBIpWhiteListRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsDBIpWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrdsDBIpWhiteListRequest::~DescribeDrdsDBIpWhiteListRequest() {}

std::string DescribeDrdsDBIpWhiteListRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeDrdsDBIpWhiteListRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeDrdsDBIpWhiteListRequest::getGroupName() const {
  return groupName_;
}

void DescribeDrdsDBIpWhiteListRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string DescribeDrdsDBIpWhiteListRequest::getDbName() const {
  return dbName_;
}

void DescribeDrdsDBIpWhiteListRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string DescribeDrdsDBIpWhiteListRequest::getRegionId() const {
  return regionId_;
}

void DescribeDrdsDBIpWhiteListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

