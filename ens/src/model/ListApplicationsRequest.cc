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

#include <alibabacloud/ens/model/ListApplicationsRequest.h>

using AlibabaCloud::Ens::Model::ListApplicationsRequest;

ListApplicationsRequest::ListApplicationsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ListApplications") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationsRequest::~ListApplicationsRequest() {}

std::string ListApplicationsRequest::getClusterNames() const {
  return clusterNames_;
}

void ListApplicationsRequest::setClusterNames(const std::string &clusterNames) {
  clusterNames_ = clusterNames;
  setParameter(std::string("ClusterNames"), clusterNames);
}

std::string ListApplicationsRequest::getLevel() const {
  return level_;
}

void ListApplicationsRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string ListApplicationsRequest::getOutAppInfoParams() const {
  return outAppInfoParams_;
}

void ListApplicationsRequest::setOutAppInfoParams(const std::string &outAppInfoParams) {
  outAppInfoParams_ = outAppInfoParams;
  setParameter(std::string("OutAppInfoParams"), outAppInfoParams);
}

std::string ListApplicationsRequest::getMaxDate() const {
  return maxDate_;
}

void ListApplicationsRequest::setMaxDate(const std::string &maxDate) {
  maxDate_ = maxDate;
  setParameter(std::string("MaxDate"), maxDate);
}

int ListApplicationsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApplicationsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListApplicationsRequest::getAppVersions() const {
  return appVersions_;
}

void ListApplicationsRequest::setAppVersions(const std::string &appVersions) {
  appVersions_ = appVersions;
  setParameter(std::string("AppVersions"), appVersions);
}

int ListApplicationsRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApplicationsRequest::getMinDate() const {
  return minDate_;
}

void ListApplicationsRequest::setMinDate(const std::string &minDate) {
  minDate_ = minDate;
  setParameter(std::string("MinDate"), minDate);
}

