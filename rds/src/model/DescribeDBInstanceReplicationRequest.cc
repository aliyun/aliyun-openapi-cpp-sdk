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

#include <alibabacloud/rds/model/DescribeDBInstanceReplicationRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceReplicationRequest;

DescribeDBInstanceReplicationRequest::DescribeDBInstanceReplicationRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceReplication") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDBInstanceReplicationRequest::~DescribeDBInstanceReplicationRequest() {}

std::string DescribeDBInstanceReplicationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstanceReplicationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstanceReplicationRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceReplicationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceReplicationRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceReplicationRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

