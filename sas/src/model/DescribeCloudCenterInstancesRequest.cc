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

#include <alibabacloud/sas/model/DescribeCloudCenterInstancesRequest.h>

using AlibabaCloud::Sas::Model::DescribeCloudCenterInstancesRequest;

DescribeCloudCenterInstancesRequest::DescribeCloudCenterInstancesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeCloudCenterInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudCenterInstancesRequest::~DescribeCloudCenterInstancesRequest() {}

std::string DescribeCloudCenterInstancesRequest::getCriteria() const {
  return criteria_;
}

void DescribeCloudCenterInstancesRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

int DescribeCloudCenterInstancesRequest::getImportance() const {
  return importance_;
}

void DescribeCloudCenterInstancesRequest::setImportance(int importance) {
  importance_ = importance;
  setParameter(std::string("Importance"), std::to_string(importance));
}

std::string DescribeCloudCenterInstancesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCloudCenterInstancesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeCloudCenterInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudCenterInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DescribeCloudCenterInstancesRequest::getNoPage() const {
  return noPage_;
}

void DescribeCloudCenterInstancesRequest::setNoPage(bool noPage) {
  noPage_ = noPage;
  setParameter(std::string("NoPage"), noPage ? "true" : "false");
}

std::string DescribeCloudCenterInstancesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeCloudCenterInstancesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeCloudCenterInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCloudCenterInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCloudCenterInstancesRequest::getLogicalExp() const {
  return logicalExp_;
}

void DescribeCloudCenterInstancesRequest::setLogicalExp(const std::string &logicalExp) {
  logicalExp_ = logicalExp;
  setParameter(std::string("LogicalExp"), logicalExp);
}

std::string DescribeCloudCenterInstancesRequest::getLang() const {
  return lang_;
}

void DescribeCloudCenterInstancesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeCloudCenterInstancesRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeCloudCenterInstancesRequest::setResourceDirectoryAccountId(long resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), std::to_string(resourceDirectoryAccountId));
}

bool DescribeCloudCenterInstancesRequest::getUseNextToken() const {
  return useNextToken_;
}

void DescribeCloudCenterInstancesRequest::setUseNextToken(bool useNextToken) {
  useNextToken_ = useNextToken;
  setParameter(std::string("UseNextToken"), useNextToken ? "true" : "false");
}

int DescribeCloudCenterInstancesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeCloudCenterInstancesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeCloudCenterInstancesRequest::getMachineTypes() const {
  return machineTypes_;
}

void DescribeCloudCenterInstancesRequest::setMachineTypes(const std::string &machineTypes) {
  machineTypes_ = machineTypes;
  setParameter(std::string("MachineTypes"), machineTypes);
}

bool DescribeCloudCenterInstancesRequest::getNoGroupTrace() const {
  return noGroupTrace_;
}

void DescribeCloudCenterInstancesRequest::setNoGroupTrace(bool noGroupTrace) {
  noGroupTrace_ = noGroupTrace;
  setParameter(std::string("NoGroupTrace"), noGroupTrace ? "true" : "false");
}

