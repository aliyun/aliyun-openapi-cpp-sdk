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

#include <alibabacloud/rds/model/DescribeDBMiniEngineVersionsRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBMiniEngineVersionsRequest;

DescribeDBMiniEngineVersionsRequest::DescribeDBMiniEngineVersionsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBMiniEngineVersions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBMiniEngineVersionsRequest::~DescribeDBMiniEngineVersionsRequest() {}

long DescribeDBMiniEngineVersionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBMiniEngineVersionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBMiniEngineVersionsRequest::getNodeType() const {
  return nodeType_;
}

void DescribeDBMiniEngineVersionsRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string DescribeDBMiniEngineVersionsRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeDBMiniEngineVersionsRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeDBMiniEngineVersionsRequest::getStorageType() const {
  return storageType_;
}

void DescribeDBMiniEngineVersionsRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string DescribeDBMiniEngineVersionsRequest::getMinorVersionTag() const {
  return minorVersionTag_;
}

void DescribeDBMiniEngineVersionsRequest::setMinorVersionTag(const std::string &minorVersionTag) {
  minorVersionTag_ = minorVersionTag;
  setParameter(std::string("MinorVersionTag"), minorVersionTag);
}

std::string DescribeDBMiniEngineVersionsRequest::getEngine() const {
  return engine_;
}

void DescribeDBMiniEngineVersionsRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DescribeDBMiniEngineVersionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBMiniEngineVersionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBMiniEngineVersionsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBMiniEngineVersionsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBMiniEngineVersionsRequest::getDedicatedHostGroupId() const {
  return dedicatedHostGroupId_;
}

void DescribeDBMiniEngineVersionsRequest::setDedicatedHostGroupId(const std::string &dedicatedHostGroupId) {
  dedicatedHostGroupId_ = dedicatedHostGroupId;
  setParameter(std::string("DedicatedHostGroupId"), dedicatedHostGroupId);
}

