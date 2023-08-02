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

#include <alibabacloud/gpdb/model/DescribeDBInstancesRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBInstancesRequest;

DescribeDBInstancesRequest::DescribeDBInstancesRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancesRequest::~DescribeDBInstancesRequest() {}

std::vector<DescribeDBInstancesRequest::std::string> DescribeDBInstancesRequest::getDBInstanceModes() const {
  return dBInstanceModes_;
}

void DescribeDBInstancesRequest::setDBInstanceModes(const std::vector<DescribeDBInstancesRequest::std::string> &dBInstanceModes) {
  dBInstanceModes_ = dBInstanceModes;
  for(int dep1 = 0; dep1 != dBInstanceModes.size(); dep1++) {
    setParameter(std::string("DBInstanceModes") + "." + std::to_string(dep1 + 1), dBInstanceModes[dep1]);
  }
}

std::vector<DescribeDBInstancesRequest::std::string> DescribeDBInstancesRequest::getDBInstanceStatuses() const {
  return dBInstanceStatuses_;
}

void DescribeDBInstancesRequest::setDBInstanceStatuses(const std::vector<DescribeDBInstancesRequest::std::string> &dBInstanceStatuses) {
  dBInstanceStatuses_ = dBInstanceStatuses;
  for(int dep1 = 0; dep1 != dBInstanceStatuses.size(); dep1++) {
    setParameter(std::string("DBInstanceStatuses") + "." + std::to_string(dep1 + 1), dBInstanceStatuses[dep1]);
  }
}

int DescribeDBInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDBInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBInstancesRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void DescribeDBInstancesRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::vector<DescribeDBInstancesRequest::Tag> DescribeDBInstancesRequest::getTag() const {
  return tag_;
}

void DescribeDBInstancesRequest::setTag(const std::vector<DescribeDBInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeDBInstancesRequest::getDBInstanceIds() const {
  return dBInstanceIds_;
}

void DescribeDBInstancesRequest::setDBInstanceIds(const std::string &dBInstanceIds) {
  dBInstanceIds_ = dBInstanceIds;
  setParameter(std::string("DBInstanceIds"), dBInstanceIds);
}

long DescribeDBInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribeDBInstancesRequest::std::string> DescribeDBInstancesRequest::getDBInstanceCategories() const {
  return dBInstanceCategories_;
}

void DescribeDBInstancesRequest::setDBInstanceCategories(const std::vector<DescribeDBInstancesRequest::std::string> &dBInstanceCategories) {
  dBInstanceCategories_ = dBInstanceCategories;
  for(int dep1 = 0; dep1 != dBInstanceCategories.size(); dep1++) {
    setParameter(std::string("DBInstanceCategories") + "." + std::to_string(dep1 + 1), dBInstanceCategories[dep1]);
  }
}

std::vector<DescribeDBInstancesRequest::std::string> DescribeDBInstancesRequest::getInstanceDeployTypes() const {
  return instanceDeployTypes_;
}

void DescribeDBInstancesRequest::setInstanceDeployTypes(const std::vector<DescribeDBInstancesRequest::std::string> &instanceDeployTypes) {
  instanceDeployTypes_ = instanceDeployTypes;
  for(int dep1 = 0; dep1 != instanceDeployTypes.size(); dep1++) {
    setParameter(std::string("InstanceDeployTypes") + "." + std::to_string(dep1 + 1), instanceDeployTypes[dep1]);
  }
}

std::string DescribeDBInstancesRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void DescribeDBInstancesRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

