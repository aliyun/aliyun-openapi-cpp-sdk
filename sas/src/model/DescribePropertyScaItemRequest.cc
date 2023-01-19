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

#include <alibabacloud/sas/model/DescribePropertyScaItemRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyScaItemRequest;

DescribePropertyScaItemRequest::DescribePropertyScaItemRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribePropertyScaItem") {
  setMethod(HttpRequest::Method::Post);
}

DescribePropertyScaItemRequest::~DescribePropertyScaItemRequest() {}

std::string DescribePropertyScaItemRequest::getSearchItem() const {
  return searchItem_;
}

void DescribePropertyScaItemRequest::setSearchItem(const std::string &searchItem) {
  searchItem_ = searchItem;
  setParameter(std::string("SearchItem"), searchItem);
}

std::string DescribePropertyScaItemRequest::getType() const {
  return type_;
}

void DescribePropertyScaItemRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribePropertyScaItemRequest::getBiz() const {
  return biz_;
}

void DescribePropertyScaItemRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

std::string DescribePropertyScaItemRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePropertyScaItemRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribePropertyScaItemRequest::getPageSize() const {
  return pageSize_;
}

void DescribePropertyScaItemRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePropertyScaItemRequest::getLang() const {
  return lang_;
}

void DescribePropertyScaItemRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool DescribePropertyScaItemRequest::getForceFlush() const {
  return forceFlush_;
}

void DescribePropertyScaItemRequest::setForceFlush(bool forceFlush) {
  forceFlush_ = forceFlush;
  setParameter(std::string("ForceFlush"), forceFlush ? "true" : "false");
}

std::string DescribePropertyScaItemRequest::getSearchInfo() const {
  return searchInfo_;
}

void DescribePropertyScaItemRequest::setSearchInfo(const std::string &searchInfo) {
  searchInfo_ = searchInfo;
  setParameter(std::string("SearchInfo"), searchInfo);
}

int DescribePropertyScaItemRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePropertyScaItemRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribePropertyScaItemRequest::getName() const {
  return name_;
}

void DescribePropertyScaItemRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

