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

#include <alibabacloud/paifeaturestore/model/ListDatasourceFeatureViewsRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListDatasourceFeatureViewsRequest;

ListDatasourceFeatureViewsRequest::ListDatasourceFeatureViewsRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/datasources/[DatasourceId]/featureviews"};
  setMethod(HttpRequest::Method::Get);
}

ListDatasourceFeatureViewsRequest::~ListDatasourceFeatureViewsRequest() {}

std::string ListDatasourceFeatureViewsRequest::getType() const {
  return type_;
}

void ListDatasourceFeatureViewsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListDatasourceFeatureViewsRequest::getStartDate() const {
  return startDate_;
}

void ListDatasourceFeatureViewsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

int ListDatasourceFeatureViewsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDatasourceFeatureViewsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListDatasourceFeatureViewsRequest::getPageSize() const {
  return pageSize_;
}

void ListDatasourceFeatureViewsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDatasourceFeatureViewsRequest::getProjectId() const {
  return projectId_;
}

void ListDatasourceFeatureViewsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string ListDatasourceFeatureViewsRequest::getOrder() const {
  return order_;
}

void ListDatasourceFeatureViewsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

bool ListDatasourceFeatureViewsRequest::getAll() const {
  return all_;
}

void ListDatasourceFeatureViewsRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::string ListDatasourceFeatureViewsRequest::getProjectName() const {
  return projectName_;
}

void ListDatasourceFeatureViewsRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

bool ListDatasourceFeatureViewsRequest::getShowStorageUsage() const {
  return showStorageUsage_;
}

void ListDatasourceFeatureViewsRequest::setShowStorageUsage(bool showStorageUsage) {
  showStorageUsage_ = showStorageUsage;
  setParameter(std::string("ShowStorageUsage"), showStorageUsage ? "true" : "false");
}

bool ListDatasourceFeatureViewsRequest::getVerbose() const {
  return verbose_;
}

void ListDatasourceFeatureViewsRequest::setVerbose(bool verbose) {
  verbose_ = verbose;
  setParameter(std::string("Verbose"), verbose ? "true" : "false");
}

std::string ListDatasourceFeatureViewsRequest::getInstanceId() const {
  return instanceId_;
}

void ListDatasourceFeatureViewsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListDatasourceFeatureViewsRequest::getEndDate() const {
  return endDate_;
}

void ListDatasourceFeatureViewsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string ListDatasourceFeatureViewsRequest::getDatasourceId() const {
  return datasourceId_;
}

void ListDatasourceFeatureViewsRequest::setDatasourceId(const std::string &datasourceId) {
  datasourceId_ = datasourceId;
  setParameter(std::string("DatasourceId"), datasourceId);
}

std::string ListDatasourceFeatureViewsRequest::getName() const {
  return name_;
}

void ListDatasourceFeatureViewsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListDatasourceFeatureViewsRequest::getSortBy() const {
  return sortBy_;
}

void ListDatasourceFeatureViewsRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

