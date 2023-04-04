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

#include <alibabacloud/imm/model/QueryLocationDateClustersRequest.h>

using AlibabaCloud::Imm::Model::QueryLocationDateClustersRequest;

QueryLocationDateClustersRequest::QueryLocationDateClustersRequest()
    : RpcServiceRequest("imm", "2020-09-30", "QueryLocationDateClusters") {
  setMethod(HttpRequest::Method::Post);
}

QueryLocationDateClustersRequest::~QueryLocationDateClustersRequest() {}

std::string QueryLocationDateClustersRequest::getCustomLabels() const {
  return customLabels_;
}

void QueryLocationDateClustersRequest::setCustomLabels(const std::string &customLabels) {
  customLabels_ = customLabels;
  setParameter(std::string("CustomLabels"), customLabels);
}

std::string QueryLocationDateClustersRequest::getOrder() const {
  return order_;
}

void QueryLocationDateClustersRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string QueryLocationDateClustersRequest::getProjectName() const {
  return projectName_;
}

void QueryLocationDateClustersRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::vector<QueryLocationDateClustersRequest::std::string> QueryLocationDateClustersRequest::getLocationDateClusterLevels() const {
  return locationDateClusterLevels_;
}

void QueryLocationDateClustersRequest::setLocationDateClusterLevels(const std::vector<QueryLocationDateClustersRequest::std::string> &locationDateClusterLevels) {
  locationDateClusterLevels_ = locationDateClusterLevels;
  for(int dep1 = 0; dep1 != locationDateClusterLevels.size(); dep1++) {
    setParameter(std::string("LocationDateClusterLevels") + "." + std::to_string(dep1 + 1), locationDateClusterLevels[dep1]);
  }
}

std::string QueryLocationDateClustersRequest::getSort() const {
  return sort_;
}

void QueryLocationDateClustersRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

int QueryLocationDateClustersRequest::getMaxResults() const {
  return maxResults_;
}

void QueryLocationDateClustersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

QueryLocationDateClustersRequest::LocationDateClusterEndTimeRange QueryLocationDateClustersRequest::getLocationDateClusterEndTimeRange() const {
  return locationDateClusterEndTimeRange_;
}

void QueryLocationDateClustersRequest::setLocationDateClusterEndTimeRange(const QueryLocationDateClustersRequest::LocationDateClusterEndTimeRange &locationDateClusterEndTimeRange) {
  locationDateClusterEndTimeRange_ = locationDateClusterEndTimeRange;
  setParameter(std::string("LocationDateClusterEndTimeRange") + ".Start", locationDateClusterEndTimeRange.start);
  setParameter(std::string("LocationDateClusterEndTimeRange") + ".End", locationDateClusterEndTimeRange.end);
}

std::string QueryLocationDateClustersRequest::getTitle() const {
  return title_;
}

void QueryLocationDateClustersRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string QueryLocationDateClustersRequest::getNextToken() const {
  return nextToken_;
}

void QueryLocationDateClustersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string QueryLocationDateClustersRequest::getDatasetName() const {
  return datasetName_;
}

void QueryLocationDateClustersRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

QueryLocationDateClustersRequest::LocationDateClusterStartTimeRange QueryLocationDateClustersRequest::getLocationDateClusterStartTimeRange() const {
  return locationDateClusterStartTimeRange_;
}

void QueryLocationDateClustersRequest::setLocationDateClusterStartTimeRange(const QueryLocationDateClustersRequest::LocationDateClusterStartTimeRange &locationDateClusterStartTimeRange) {
  locationDateClusterStartTimeRange_ = locationDateClusterStartTimeRange;
  setParameter(std::string("LocationDateClusterStartTimeRange") + ".Start", locationDateClusterStartTimeRange.start);
  setParameter(std::string("LocationDateClusterStartTimeRange") + ".End", locationDateClusterStartTimeRange.end);
}

QueryLocationDateClustersRequest::Address QueryLocationDateClustersRequest::getAddress() const {
  return address_;
}

void QueryLocationDateClustersRequest::setAddress(const QueryLocationDateClustersRequest::Address &address) {
  address_ = address;
  setParameter(std::string("Address") + ".Country", address.country);
  setParameter(std::string("Address") + ".Province", address.province);
  setParameter(std::string("Address") + ".City", address.city);
  setParameter(std::string("Address") + ".District", address.district);
  setParameter(std::string("Address") + ".Language", address.language);
  setParameter(std::string("Address") + ".AddressLine", address.addressLine);
  setParameter(std::string("Address") + ".Township", address.township);
}

QueryLocationDateClustersRequest::CreateTimeRange QueryLocationDateClustersRequest::getCreateTimeRange() const {
  return createTimeRange_;
}

void QueryLocationDateClustersRequest::setCreateTimeRange(const QueryLocationDateClustersRequest::CreateTimeRange &createTimeRange) {
  createTimeRange_ = createTimeRange;
  setParameter(std::string("CreateTimeRange") + ".Start", createTimeRange.start);
  setParameter(std::string("CreateTimeRange") + ".End", createTimeRange.end);
}

QueryLocationDateClustersRequest::UpdateTimeRange QueryLocationDateClustersRequest::getUpdateTimeRange() const {
  return updateTimeRange_;
}

void QueryLocationDateClustersRequest::setUpdateTimeRange(const QueryLocationDateClustersRequest::UpdateTimeRange &updateTimeRange) {
  updateTimeRange_ = updateTimeRange;
  setParameter(std::string("UpdateTimeRange") + ".Start", updateTimeRange.start);
  setParameter(std::string("UpdateTimeRange") + ".End", updateTimeRange.end);
}

std::string QueryLocationDateClustersRequest::getObjectId() const {
  return objectId_;
}

void QueryLocationDateClustersRequest::setObjectId(const std::string &objectId) {
  objectId_ = objectId;
  setParameter(std::string("ObjectId"), objectId);
}

