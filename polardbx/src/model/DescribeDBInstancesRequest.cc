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

#include <alibabacloud/polardbx/model/DescribeDBInstancesRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeDBInstancesRequest;

DescribeDBInstancesRequest::DescribeDBInstancesRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeDBInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancesRequest::~DescribeDBInstancesRequest() {}

std::string DescribeDBInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

bool DescribeDBInstancesRequest::getMustHasCdc() const {
  return mustHasCdc_;
}

void DescribeDBInstancesRequest::setMustHasCdc(bool mustHasCdc) {
  mustHasCdc_ = mustHasCdc;
  setParameter(std::string("MustHasCdc"), mustHasCdc ? "true" : "false");
}

std::string DescribeDBInstancesRequest::getTags() const {
  return tags_;
}

void DescribeDBInstancesRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeDBInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDBInstancesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeDBInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
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

std::string DescribeDBInstancesRequest::getSeries() const {
  return series_;
}

void DescribeDBInstancesRequest::setSeries(const std::string &series) {
  series_ = series;
  setParameter(std::string("Series"), series);
}

