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

#include <alibabacloud/ecd/model/DescribeVulListRequest.h>

using AlibabaCloud::Ecd::Model::DescribeVulListRequest;

DescribeVulListRequest::DescribeVulListRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeVulList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVulListRequest::~DescribeVulListRequest() {}

std::string DescribeVulListRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeVulListRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string DescribeVulListRequest::getType() const {
  return type_;
}

void DescribeVulListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeVulListRequest::getRegionId() const {
  return regionId_;
}

void DescribeVulListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVulListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVulListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVulListRequest::getLang() const {
  return lang_;
}

void DescribeVulListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeVulListRequest::getDealed() const {
  return dealed_;
}

void DescribeVulListRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

int DescribeVulListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeVulListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeVulListRequest::getAliasName() const {
  return aliasName_;
}

void DescribeVulListRequest::setAliasName(const std::string &aliasName) {
  aliasName_ = aliasName;
  setParameter(std::string("AliasName"), aliasName);
}

std::string DescribeVulListRequest::getName() const {
  return name_;
}

void DescribeVulListRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeVulListRequest::getNecessity() const {
  return necessity_;
}

void DescribeVulListRequest::setNecessity(const std::string &necessity) {
  necessity_ = necessity;
  setParameter(std::string("Necessity"), necessity);
}

