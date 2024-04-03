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

#include <alibabacloud/cloudauth/model/DescribeSmartStatisticsPageListRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeSmartStatisticsPageListRequest;

DescribeSmartStatisticsPageListRequest::DescribeSmartStatisticsPageListRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DescribeSmartStatisticsPageList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSmartStatisticsPageListRequest::~DescribeSmartStatisticsPageListRequest() {}

std::string DescribeSmartStatisticsPageListRequest::getStartDate() const {
  return startDate_;
}

void DescribeSmartStatisticsPageListRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string DescribeSmartStatisticsPageListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSmartStatisticsPageListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSmartStatisticsPageListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSmartStatisticsPageListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeSmartStatisticsPageListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeSmartStatisticsPageListRequest::setCurrentPage(const std::string &currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), currentPage);
}

std::string DescribeSmartStatisticsPageListRequest::getEndDate() const {
  return endDate_;
}

void DescribeSmartStatisticsPageListRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeSmartStatisticsPageListRequest::getServiceCode() const {
  return serviceCode_;
}

void DescribeSmartStatisticsPageListRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setParameter(std::string("ServiceCode"), serviceCode);
}

std::string DescribeSmartStatisticsPageListRequest::getSceneId() const {
  return sceneId_;
}

void DescribeSmartStatisticsPageListRequest::setSceneId(const std::string &sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), sceneId);
}

