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

#include <alibabacloud/arms/model/ListDashboardsRequest.h>

using AlibabaCloud::ARMS::Model::ListDashboardsRequest;

ListDashboardsRequest::ListDashboardsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListDashboards") {
  setMethod(HttpRequest::Method::Post);
}

ListDashboardsRequest::~ListDashboardsRequest() {}

std::string ListDashboardsRequest::getDashboardName() const {
  return dashboardName_;
}

void ListDashboardsRequest::setDashboardName(const std::string &dashboardName) {
  dashboardName_ = dashboardName;
  setParameter(std::string("DashboardName"), dashboardName);
}

std::string ListDashboardsRequest::getProduct() const {
  return product_;
}

void ListDashboardsRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

bool ListDashboardsRequest::getRecreateSwitch() const {
  return recreateSwitch_;
}

void ListDashboardsRequest::setRecreateSwitch(bool recreateSwitch) {
  recreateSwitch_ = recreateSwitch;
  setParameter(std::string("RecreateSwitch"), recreateSwitch ? "true" : "false");
}

std::string ListDashboardsRequest::getLanguage() const {
  return language_;
}

void ListDashboardsRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string ListDashboardsRequest::getClusterId() const {
  return clusterId_;
}

void ListDashboardsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListDashboardsRequest::getProxyUserId() const {
  return proxyUserId_;
}

void ListDashboardsRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string ListDashboardsRequest::getTitle() const {
  return title_;
}

void ListDashboardsRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string ListDashboardsRequest::getClusterType() const {
  return clusterType_;
}

void ListDashboardsRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string ListDashboardsRequest::getRegionId() const {
  return regionId_;
}

void ListDashboardsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

