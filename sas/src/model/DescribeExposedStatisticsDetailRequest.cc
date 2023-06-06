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

#include <alibabacloud/sas/model/DescribeExposedStatisticsDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribeExposedStatisticsDetailRequest;

DescribeExposedStatisticsDetailRequest::DescribeExposedStatisticsDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeExposedStatisticsDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExposedStatisticsDetailRequest::~DescribeExposedStatisticsDetailRequest() {}

std::string DescribeExposedStatisticsDetailRequest::getStatisticsTypeGatewayType() const {
  return statisticsTypeGatewayType_;
}

void DescribeExposedStatisticsDetailRequest::setStatisticsTypeGatewayType(const std::string &statisticsTypeGatewayType) {
  statisticsTypeGatewayType_ = statisticsTypeGatewayType;
  setParameter(std::string("StatisticsTypeGatewayType"), statisticsTypeGatewayType);
}

std::string DescribeExposedStatisticsDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeExposedStatisticsDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeExposedStatisticsDetailRequest::getStatisticsTypeInstanceValue() const {
  return statisticsTypeInstanceValue_;
}

void DescribeExposedStatisticsDetailRequest::setStatisticsTypeInstanceValue(const std::string &statisticsTypeInstanceValue) {
  statisticsTypeInstanceValue_ = statisticsTypeInstanceValue;
  setParameter(std::string("StatisticsTypeInstanceValue"), statisticsTypeInstanceValue);
}

int DescribeExposedStatisticsDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribeExposedStatisticsDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeExposedStatisticsDetailRequest::getStatisticsType() const {
  return statisticsType_;
}

void DescribeExposedStatisticsDetailRequest::setStatisticsType(const std::string &statisticsType) {
  statisticsType_ = statisticsType;
  setParameter(std::string("StatisticsType"), statisticsType);
}

int DescribeExposedStatisticsDetailRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeExposedStatisticsDetailRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

