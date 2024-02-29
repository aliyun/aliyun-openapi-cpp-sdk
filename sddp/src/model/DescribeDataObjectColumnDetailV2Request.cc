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

#include <alibabacloud/sddp/model/DescribeDataObjectColumnDetailV2Request.h>

using AlibabaCloud::Sddp::Model::DescribeDataObjectColumnDetailV2Request;

DescribeDataObjectColumnDetailV2Request::DescribeDataObjectColumnDetailV2Request()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeDataObjectColumnDetailV2") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataObjectColumnDetailV2Request::~DescribeDataObjectColumnDetailV2Request() {}

long DescribeDataObjectColumnDetailV2Request::getProductId() const {
  return productId_;
}

void DescribeDataObjectColumnDetailV2Request::setProductId(long productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), std::to_string(productId));
}

std::string DescribeDataObjectColumnDetailV2Request::getSourceIp() const {
  return sourceIp_;
}

void DescribeDataObjectColumnDetailV2Request::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeDataObjectColumnDetailV2Request::getPageSize() const {
  return pageSize_;
}

void DescribeDataObjectColumnDetailV2Request::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataObjectColumnDetailV2Request::getId() const {
  return id_;
}

void DescribeDataObjectColumnDetailV2Request::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string DescribeDataObjectColumnDetailV2Request::getLang() const {
  return lang_;
}

void DescribeDataObjectColumnDetailV2Request::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeDataObjectColumnDetailV2Request::getFeatureType() const {
  return featureType_;
}

void DescribeDataObjectColumnDetailV2Request::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

int DescribeDataObjectColumnDetailV2Request::getCurrentPage() const {
  return currentPage_;
}

void DescribeDataObjectColumnDetailV2Request::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeDataObjectColumnDetailV2Request::getTemplateId() const {
  return templateId_;
}

void DescribeDataObjectColumnDetailV2Request::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

