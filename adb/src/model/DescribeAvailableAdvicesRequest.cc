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

#include <alibabacloud/adb/model/DescribeAvailableAdvicesRequest.h>

using AlibabaCloud::Adb::Model::DescribeAvailableAdvicesRequest;

DescribeAvailableAdvicesRequest::DescribeAvailableAdvicesRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeAvailableAdvices") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableAdvicesRequest::~DescribeAvailableAdvicesRequest() {}

std::string DescribeAvailableAdvicesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAvailableAdvicesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

long DescribeAvailableAdvicesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAvailableAdvicesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribeAvailableAdvicesRequest::getAdviceDate() const {
  return adviceDate_;
}

void DescribeAvailableAdvicesRequest::setAdviceDate(long adviceDate) {
  adviceDate_ = adviceDate;
  setParameter(std::string("AdviceDate"), std::to_string(adviceDate));
}

std::string DescribeAvailableAdvicesRequest::getRegionId() const {
  return regionId_;
}

void DescribeAvailableAdvicesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeAvailableAdvicesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAvailableAdvicesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAvailableAdvicesRequest::getLang() const {
  return lang_;
}

void DescribeAvailableAdvicesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

