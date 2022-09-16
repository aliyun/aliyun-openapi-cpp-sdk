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

#include <alibabacloud/ecd/model/DescribeGroupedVulRequest.h>

using AlibabaCloud::Ecd::Model::DescribeGroupedVulRequest;

DescribeGroupedVulRequest::DescribeGroupedVulRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeGroupedVul") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupedVulRequest::~DescribeGroupedVulRequest() {}

std::string DescribeGroupedVulRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeGroupedVulRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string DescribeGroupedVulRequest::getDealed() const {
  return dealed_;
}

void DescribeGroupedVulRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

int DescribeGroupedVulRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeGroupedVulRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeGroupedVulRequest::getType() const {
  return type_;
}

void DescribeGroupedVulRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeGroupedVulRequest::getRegionId() const {
  return regionId_;
}

void DescribeGroupedVulRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeGroupedVulRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGroupedVulRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGroupedVulRequest::getLang() const {
  return lang_;
}

void DescribeGroupedVulRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeGroupedVulRequest::getNecessity() const {
  return necessity_;
}

void DescribeGroupedVulRequest::setNecessity(const std::string &necessity) {
  necessity_ = necessity;
  setParameter(std::string("Necessity"), necessity);
}

