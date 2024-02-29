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

#include <alibabacloud/sddp/model/DescribeDataObjectColumnDetailRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataObjectColumnDetailRequest;

DescribeDataObjectColumnDetailRequest::DescribeDataObjectColumnDetailRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeDataObjectColumnDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataObjectColumnDetailRequest::~DescribeDataObjectColumnDetailRequest() {}

long DescribeDataObjectColumnDetailRequest::getProductId() const {
  return productId_;
}

void DescribeDataObjectColumnDetailRequest::setProductId(long productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), std::to_string(productId));
}

std::string DescribeDataObjectColumnDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDataObjectColumnDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeDataObjectColumnDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataObjectColumnDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeDataObjectColumnDetailRequest::getId() const {
  return id_;
}

void DescribeDataObjectColumnDetailRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string DescribeDataObjectColumnDetailRequest::getLang() const {
  return lang_;
}

void DescribeDataObjectColumnDetailRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeDataObjectColumnDetailRequest::getFeatureType() const {
  return featureType_;
}

void DescribeDataObjectColumnDetailRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

int DescribeDataObjectColumnDetailRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeDataObjectColumnDetailRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeDataObjectColumnDetailRequest::getTemplateId() const {
  return templateId_;
}

void DescribeDataObjectColumnDetailRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

