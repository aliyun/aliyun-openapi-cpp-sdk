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

#include <alibabacloud/selectdb/model/DescribeDBClusterConfigRequest.h>

using AlibabaCloud::Selectdb::Model::DescribeDBClusterConfigRequest;

DescribeDBClusterConfigRequest::DescribeDBClusterConfigRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "DescribeDBClusterConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterConfigRequest::~DescribeDBClusterConfigRequest() {}

std::string DescribeDBClusterConfigRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterConfigRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterConfigRequest::getConfigKey() const {
  return configKey_;
}

void DescribeDBClusterConfigRequest::setConfigKey(const std::string &configKey) {
  configKey_ = configKey;
  setParameter(std::string("ConfigKey"), configKey);
}

std::string DescribeDBClusterConfigRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClusterConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBClusterConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBClusterConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

