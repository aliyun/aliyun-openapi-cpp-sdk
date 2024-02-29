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

#include <alibabacloud/sddp/model/DescribeDataObjectsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataObjectsRequest;

DescribeDataObjectsRequest::DescribeDataObjectsRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeDataObjects") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataObjectsRequest::~DescribeDataObjectsRequest() {}

long DescribeDataObjectsRequest::getFileType() const {
  return fileType_;
}

void DescribeDataObjectsRequest::setFileType(long fileType) {
  fileType_ = fileType;
  setParameter(std::string("FileType"), std::to_string(fileType));
}

std::string DescribeDataObjectsRequest::getRiskLevels() const {
  return riskLevels_;
}

void DescribeDataObjectsRequest::setRiskLevels(const std::string &riskLevels) {
  riskLevels_ = riskLevels;
  setParameter(std::string("RiskLevels"), riskLevels);
}

std::string DescribeDataObjectsRequest::getQueryName() const {
  return queryName_;
}

void DescribeDataObjectsRequest::setQueryName(const std::string &queryName) {
  queryName_ = queryName;
  setParameter(std::string("QueryName"), queryName);
}

long DescribeDataObjectsRequest::getDomainId() const {
  return domainId_;
}

void DescribeDataObjectsRequest::setDomainId(long domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), std::to_string(domainId));
}

std::string DescribeDataObjectsRequest::getParentCategoryIds() const {
  return parentCategoryIds_;
}

void DescribeDataObjectsRequest::setParentCategoryIds(const std::string &parentCategoryIds) {
  parentCategoryIds_ = parentCategoryIds;
  setParameter(std::string("ParentCategoryIds"), parentCategoryIds);
}

std::string DescribeDataObjectsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDataObjectsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDataObjectsRequest::getProductIds() const {
  return productIds_;
}

void DescribeDataObjectsRequest::setProductIds(const std::string &productIds) {
  productIds_ = productIds;
  setParameter(std::string("ProductIds"), productIds);
}

int DescribeDataObjectsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataObjectsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataObjectsRequest::getLang() const {
  return lang_;
}

void DescribeDataObjectsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDataObjectsRequest::getServiceRegionId() const {
  return serviceRegionId_;
}

void DescribeDataObjectsRequest::setServiceRegionId(const std::string &serviceRegionId) {
  serviceRegionId_ = serviceRegionId;
  setParameter(std::string("ServiceRegionId"), serviceRegionId);
}

std::string DescribeDataObjectsRequest::getModelTagIds() const {
  return modelTagIds_;
}

void DescribeDataObjectsRequest::setModelTagIds(const std::string &modelTagIds) {
  modelTagIds_ = modelTagIds;
  setParameter(std::string("ModelTagIds"), modelTagIds);
}

int DescribeDataObjectsRequest::getFeatureType() const {
  return featureType_;
}

void DescribeDataObjectsRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

long DescribeDataObjectsRequest::getFileCategoryCode() const {
  return fileCategoryCode_;
}

void DescribeDataObjectsRequest::setFileCategoryCode(long fileCategoryCode) {
  fileCategoryCode_ = fileCategoryCode;
  setParameter(std::string("FileCategoryCode"), std::to_string(fileCategoryCode));
}

int DescribeDataObjectsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeDataObjectsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeDataObjectsRequest::getTemplateId() const {
  return templateId_;
}

void DescribeDataObjectsRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string DescribeDataObjectsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDataObjectsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDataObjectsRequest::getModelIds() const {
  return modelIds_;
}

void DescribeDataObjectsRequest::setModelIds(const std::string &modelIds) {
  modelIds_ = modelIds;
  setParameter(std::string("ModelIds"), modelIds);
}

