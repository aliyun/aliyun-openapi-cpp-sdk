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

#include <alibabacloud/selectdb/model/RestartDBClusterRequest.h>

using AlibabaCloud::Selectdb::Model::RestartDBClusterRequest;

RestartDBClusterRequest::RestartDBClusterRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "RestartDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

RestartDBClusterRequest::~RestartDBClusterRequest() {}

long RestartDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestartDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestartDBClusterRequest::getDBClusterId() const {
  return dBClusterId_;
}

void RestartDBClusterRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string RestartDBClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void RestartDBClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string RestartDBClusterRequest::getRegionId() const {
  return regionId_;
}

void RestartDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string RestartDBClusterRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RestartDBClusterRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setBodyParameter(std::string("DBInstanceId"), dBInstanceId);
}

