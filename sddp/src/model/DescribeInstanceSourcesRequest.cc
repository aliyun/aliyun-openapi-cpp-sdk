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

#include <alibabacloud/sddp/model/DescribeInstanceSourcesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeInstanceSourcesRequest;

DescribeInstanceSourcesRequest::DescribeInstanceSourcesRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeInstanceSources") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceSourcesRequest::~DescribeInstanceSourcesRequest() {}

std::string DescribeInstanceSourcesRequest::getProductCode() const {
  return productCode_;
}

void DescribeInstanceSourcesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

long DescribeInstanceSourcesRequest::getProductId() const {
  return productId_;
}

void DescribeInstanceSourcesRequest::setProductId(long productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), std::to_string(productId));
}

std::string DescribeInstanceSourcesRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeInstanceSourcesRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string DescribeInstanceSourcesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstanceSourcesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeInstanceSourcesRequest::getSearchType() const {
  return searchType_;
}

void DescribeInstanceSourcesRequest::setSearchType(const std::string &searchType) {
  searchType_ = searchType;
  setParameter(std::string("SearchType"), searchType);
}

int DescribeInstanceSourcesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceSourcesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceSourcesRequest::getLang() const {
  return lang_;
}

void DescribeInstanceSourcesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeInstanceSourcesRequest::getServiceRegionId() const {
  return serviceRegionId_;
}

void DescribeInstanceSourcesRequest::setServiceRegionId(const std::string &serviceRegionId) {
  serviceRegionId_ = serviceRegionId;
  setParameter(std::string("ServiceRegionId"), serviceRegionId);
}

std::string DescribeInstanceSourcesRequest::getEngineType() const {
  return engineType_;
}

void DescribeInstanceSourcesRequest::setEngineType(const std::string &engineType) {
  engineType_ = engineType;
  setParameter(std::string("EngineType"), engineType);
}

int DescribeInstanceSourcesRequest::getAuditStatus() const {
  return auditStatus_;
}

void DescribeInstanceSourcesRequest::setAuditStatus(int auditStatus) {
  auditStatus_ = auditStatus;
  setParameter(std::string("AuditStatus"), std::to_string(auditStatus));
}

int DescribeInstanceSourcesRequest::getAuthStatus() const {
  return authStatus_;
}

void DescribeInstanceSourcesRequest::setAuthStatus(int authStatus) {
  authStatus_ = authStatus;
  setParameter(std::string("AuthStatus"), std::to_string(authStatus));
}

int DescribeInstanceSourcesRequest::getFeatureType() const {
  return featureType_;
}

void DescribeInstanceSourcesRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

int DescribeInstanceSourcesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeInstanceSourcesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

bool DescribeInstanceSourcesRequest::getAuthed() const {
  return authed_;
}

void DescribeInstanceSourcesRequest::setAuthed(bool authed) {
  authed_ = authed;
  setParameter(std::string("Authed"), authed ? "true" : "false");
}

std::string DescribeInstanceSourcesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceSourcesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceSourcesRequest::getDbName() const {
  return dbName_;
}

void DescribeInstanceSourcesRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

