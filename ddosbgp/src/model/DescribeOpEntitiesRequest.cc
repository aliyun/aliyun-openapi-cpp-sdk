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

#include <alibabacloud/ddosbgp/model/DescribeOpEntitiesRequest.h>

using AlibabaCloud::Ddosbgp::Model::DescribeOpEntitiesRequest;

DescribeOpEntitiesRequest::DescribeOpEntitiesRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "DescribeOpEntities") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOpEntitiesRequest::~DescribeOpEntitiesRequest() {}

long DescribeOpEntitiesRequest::getStartTime() const {
  return startTime_;
}

void DescribeOpEntitiesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeOpEntitiesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeOpEntitiesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeOpEntitiesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeOpEntitiesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeOpEntitiesRequest::getRegionId() const {
  return regionId_;
}

void DescribeOpEntitiesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeOpEntitiesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeOpEntitiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeOpEntitiesRequest::getLang() const {
  return lang_;
}

void DescribeOpEntitiesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeOpEntitiesRequest::getEndTime() const {
  return endTime_;
}

void DescribeOpEntitiesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeOpEntitiesRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeOpEntitiesRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

int DescribeOpEntitiesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeOpEntitiesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeOpEntitiesRequest::getOrderDir() const {
  return orderDir_;
}

void DescribeOpEntitiesRequest::setOrderDir(const std::string &orderDir) {
  orderDir_ = orderDir;
  setParameter(std::string("OrderDir"), orderDir);
}

std::string DescribeOpEntitiesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOpEntitiesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

