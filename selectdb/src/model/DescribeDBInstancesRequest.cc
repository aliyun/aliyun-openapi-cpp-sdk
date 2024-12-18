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

#include <alibabacloud/selectdb/model/DescribeDBInstancesRequest.h>

using AlibabaCloud::Selectdb::Model::DescribeDBInstancesRequest;

DescribeDBInstancesRequest::DescribeDBInstancesRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "DescribeDBInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancesRequest::~DescribeDBInstancesRequest() {}

long DescribeDBInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long DescribeDBInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstancesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
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

long DescribeDBInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBInstancesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBInstancesRequest::getDBInstanceStatus() const {
  return dBInstanceStatus_;
}

void DescribeDBInstancesRequest::setDBInstanceStatus(const std::string &dBInstanceStatus) {
  dBInstanceStatus_ = dBInstanceStatus;
  setParameter(std::string("DBInstanceStatus"), dBInstanceStatus);
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
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string DescribeDBInstancesRequest::getDBInstanceIds() const {
  return dBInstanceIds_;
}

void DescribeDBInstancesRequest::setDBInstanceIds(const std::string &dBInstanceIds) {
  dBInstanceIds_ = dBInstanceIds;
  setParameter(std::string("DBInstanceIds"), dBInstanceIds);
}

