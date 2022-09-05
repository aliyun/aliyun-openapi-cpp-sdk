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

#include <alibabacloud/arms/model/ListDashboardsByNameRequest.h>

using AlibabaCloud::ARMS::Model::ListDashboardsByNameRequest;

ListDashboardsByNameRequest::ListDashboardsByNameRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListDashboardsByName") {
  setMethod(HttpRequest::Method::Post);
}

ListDashboardsByNameRequest::~ListDashboardsByNameRequest() {}

std::string ListDashboardsByNameRequest::getDataSourceType() const {
  return dataSourceType_;
}

void ListDashboardsByNameRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string ListDashboardsByNameRequest::getDashBoardName() const {
  return dashBoardName_;
}

void ListDashboardsByNameRequest::setDashBoardName(const std::string &dashBoardName) {
  dashBoardName_ = dashBoardName;
  setParameter(std::string("DashBoardName"), dashBoardName);
}

std::string ListDashboardsByNameRequest::getProductCode() const {
  return productCode_;
}

void ListDashboardsByNameRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string ListDashboardsByNameRequest::getClusterId() const {
  return clusterId_;
}

void ListDashboardsByNameRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

bool ListDashboardsByNameRequest::getOnlyQuery() const {
  return onlyQuery_;
}

void ListDashboardsByNameRequest::setOnlyQuery(bool onlyQuery) {
  onlyQuery_ = onlyQuery;
  setParameter(std::string("OnlyQuery"), onlyQuery ? "true" : "false");
}

std::string ListDashboardsByNameRequest::getGroupName() const {
  return groupName_;
}

void ListDashboardsByNameRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ListDashboardsByNameRequest::getClusterType() const {
  return clusterType_;
}

void ListDashboardsByNameRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string ListDashboardsByNameRequest::getRegionId() const {
  return regionId_;
}

void ListDashboardsByNameRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListDashboardsByNameRequest::getDashBoardVersion() const {
  return dashBoardVersion_;
}

void ListDashboardsByNameRequest::setDashBoardVersion(const std::string &dashBoardVersion) {
  dashBoardVersion_ = dashBoardVersion;
  setParameter(std::string("DashBoardVersion"), dashBoardVersion);
}

