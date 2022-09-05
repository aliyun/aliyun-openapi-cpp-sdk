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

#include <alibabacloud/arms/model/AddPrometheusGlobalViewByAliClusterIdsRequest.h>

using AlibabaCloud::ARMS::Model::AddPrometheusGlobalViewByAliClusterIdsRequest;

AddPrometheusGlobalViewByAliClusterIdsRequest::AddPrometheusGlobalViewByAliClusterIdsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "AddPrometheusGlobalViewByAliClusterIds") {
  setMethod(HttpRequest::Method::Post);
}

AddPrometheusGlobalViewByAliClusterIdsRequest::~AddPrometheusGlobalViewByAliClusterIdsRequest() {}

std::string AddPrometheusGlobalViewByAliClusterIdsRequest::getProductCode() const {
  return productCode_;
}

void AddPrometheusGlobalViewByAliClusterIdsRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string AddPrometheusGlobalViewByAliClusterIdsRequest::getRegionId() const {
  return regionId_;
}

void AddPrometheusGlobalViewByAliClusterIdsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddPrometheusGlobalViewByAliClusterIdsRequest::getClusterIds() const {
  return clusterIds_;
}

void AddPrometheusGlobalViewByAliClusterIdsRequest::setClusterIds(const std::string &clusterIds) {
  clusterIds_ = clusterIds;
  setParameter(std::string("ClusterIds"), clusterIds);
}

std::string AddPrometheusGlobalViewByAliClusterIdsRequest::getGroupName() const {
  return groupName_;
}

void AddPrometheusGlobalViewByAliClusterIdsRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

