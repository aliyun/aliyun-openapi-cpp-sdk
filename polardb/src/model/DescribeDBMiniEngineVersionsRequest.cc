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

#include <alibabacloud/polardb/model/DescribeDBMiniEngineVersionsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBMiniEngineVersionsRequest;

DescribeDBMiniEngineVersionsRequest::DescribeDBMiniEngineVersionsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBMiniEngineVersions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBMiniEngineVersionsRequest::~DescribeDBMiniEngineVersionsRequest() {}

std::string DescribeDBMiniEngineVersionsRequest::getCreationCategory() const {
  return creationCategory_;
}

void DescribeDBMiniEngineVersionsRequest::setCreationCategory(const std::string &creationCategory) {
  creationCategory_ = creationCategory;
  setParameter(std::string("CreationCategory"), creationCategory);
}

std::string DescribeDBMiniEngineVersionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBMiniEngineVersionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBMiniEngineVersionsRequest::getArchitecture() const {
  return architecture_;
}

void DescribeDBMiniEngineVersionsRequest::setArchitecture(const std::string &architecture) {
  architecture_ = architecture;
  setParameter(std::string("Architecture"), architecture);
}

std::string DescribeDBMiniEngineVersionsRequest::getDBMinorVersion() const {
  return dBMinorVersion_;
}

void DescribeDBMiniEngineVersionsRequest::setDBMinorVersion(const std::string &dBMinorVersion) {
  dBMinorVersion_ = dBMinorVersion;
  setParameter(std::string("DBMinorVersion"), dBMinorVersion);
}

std::string DescribeDBMiniEngineVersionsRequest::getDBType() const {
  return dBType_;
}

void DescribeDBMiniEngineVersionsRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string DescribeDBMiniEngineVersionsRequest::getDBVersion() const {
  return dBVersion_;
}

void DescribeDBMiniEngineVersionsRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

std::string DescribeDBMiniEngineVersionsRequest::getZoneId() const {
  return zoneId_;
}

void DescribeDBMiniEngineVersionsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

