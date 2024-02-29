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

#include <alibabacloud/sddp/model/DescribeParentInstanceRequest.h>

using AlibabaCloud::Sddp::Model::DescribeParentInstanceRequest;

DescribeParentInstanceRequest::DescribeParentInstanceRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeParentInstance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeParentInstanceRequest::~DescribeParentInstanceRequest() {}

std::string DescribeParentInstanceRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeParentInstanceRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeParentInstanceRequest::getPageSize() const {
  return pageSize_;
}

void DescribeParentInstanceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeParentInstanceRequest::getCheckStatus() const {
  return checkStatus_;
}

void DescribeParentInstanceRequest::setCheckStatus(int checkStatus) {
  checkStatus_ = checkStatus;
  setParameter(std::string("CheckStatus"), std::to_string(checkStatus));
}

std::string DescribeParentInstanceRequest::getLang() const {
  return lang_;
}

void DescribeParentInstanceRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeParentInstanceRequest::getServiceRegionId() const {
  return serviceRegionId_;
}

void DescribeParentInstanceRequest::setServiceRegionId(const std::string &serviceRegionId) {
  serviceRegionId_ = serviceRegionId;
  setParameter(std::string("ServiceRegionId"), serviceRegionId);
}

std::string DescribeParentInstanceRequest::getEngineType() const {
  return engineType_;
}

void DescribeParentInstanceRequest::setEngineType(const std::string &engineType) {
  engineType_ = engineType;
  setParameter(std::string("EngineType"), engineType);
}

std::string DescribeParentInstanceRequest::getClusterStatus() const {
  return clusterStatus_;
}

void DescribeParentInstanceRequest::setClusterStatus(const std::string &clusterStatus) {
  clusterStatus_ = clusterStatus;
  setParameter(std::string("ClusterStatus"), clusterStatus);
}

int DescribeParentInstanceRequest::getAuthStatus() const {
  return authStatus_;
}

void DescribeParentInstanceRequest::setAuthStatus(int authStatus) {
  authStatus_ = authStatus;
  setParameter(std::string("AuthStatus"), std::to_string(authStatus));
}

int DescribeParentInstanceRequest::getFeatureType() const {
  return featureType_;
}

void DescribeParentInstanceRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

int DescribeParentInstanceRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeParentInstanceRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeParentInstanceRequest::getResourceType() const {
  return resourceType_;
}

void DescribeParentInstanceRequest::setResourceType(long resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), std::to_string(resourceType));
}

std::string DescribeParentInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeParentInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeParentInstanceRequest::getDbName() const {
  return dbName_;
}

void DescribeParentInstanceRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

