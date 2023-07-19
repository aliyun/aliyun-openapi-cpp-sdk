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

#include <alibabacloud/dts/model/DescribeDtsJobsRequest.h>

using AlibabaCloud::Dts::Model::DescribeDtsJobsRequest;

DescribeDtsJobsRequest::DescribeDtsJobsRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeDtsJobs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDtsJobsRequest::~DescribeDtsJobsRequest() {}

bool DescribeDtsJobsRequest::getWithoutDbList() const {
  return withoutDbList_;
}

void DescribeDtsJobsRequest::setWithoutDbList(bool withoutDbList) {
  withoutDbList_ = withoutDbList;
  setParameter(std::string("WithoutDbList"), withoutDbList ? "true" : "false");
}

std::string DescribeDtsJobsRequest::getOrderDirection() const {
  return orderDirection_;
}

void DescribeDtsJobsRequest::setOrderDirection(const std::string &orderDirection) {
  orderDirection_ = orderDirection;
  setParameter(std::string("OrderDirection"), orderDirection);
}

std::string DescribeDtsJobsRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void DescribeDtsJobsRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

std::string DescribeDtsJobsRequest::getType() const {
  return type_;
}

void DescribeDtsJobsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int DescribeDtsJobsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDtsJobsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDtsJobsRequest::getOrderColumn() const {
  return orderColumn_;
}

void DescribeDtsJobsRequest::setOrderColumn(const std::string &orderColumn) {
  orderColumn_ = orderColumn;
  setParameter(std::string("OrderColumn"), orderColumn);
}

std::string DescribeDtsJobsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDtsJobsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDtsJobsRequest::getDtsBisLabel() const {
  return dtsBisLabel_;
}

void DescribeDtsJobsRequest::setDtsBisLabel(const std::string &dtsBisLabel) {
  dtsBisLabel_ = dtsBisLabel;
  setParameter(std::string("DtsBisLabel"), dtsBisLabel);
}

std::string DescribeDtsJobsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDtsJobsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDtsJobsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDtsJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDtsJobsRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeDtsJobsRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribeDtsJobsRequest::getOriginType() const {
  return originType_;
}

void DescribeDtsJobsRequest::setOriginType(const std::string &originType) {
  originType_ = originType;
  setParameter(std::string("OriginType"), originType);
}

std::string DescribeDtsJobsRequest::getGroupId() const {
  return groupId_;
}

void DescribeDtsJobsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeDtsJobsRequest::getParams() const {
  return params_;
}

void DescribeDtsJobsRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string DescribeDtsJobsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDtsJobsRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeDtsJobsRequest::getJobType() const {
  return jobType_;
}

void DescribeDtsJobsRequest::setJobType(const std::string &jobType) {
  jobType_ = jobType;
  setParameter(std::string("JobType"), jobType);
}

std::string DescribeDtsJobsRequest::getTags() const {
  return tags_;
}

void DescribeDtsJobsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeDtsJobsRequest::getRegion() const {
  return region_;
}

void DescribeDtsJobsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string DescribeDtsJobsRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void DescribeDtsJobsRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

std::string DescribeDtsJobsRequest::getStatus() const {
  return status_;
}

void DescribeDtsJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

