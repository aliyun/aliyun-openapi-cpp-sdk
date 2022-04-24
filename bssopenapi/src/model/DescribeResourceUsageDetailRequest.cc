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

#include <alibabacloud/bssopenapi/model/DescribeResourceUsageDetailRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeResourceUsageDetailRequest;

DescribeResourceUsageDetailRequest::DescribeResourceUsageDetailRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeResourceUsageDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeResourceUsageDetailRequest::~DescribeResourceUsageDetailRequest() {}

std::string DescribeResourceUsageDetailRequest::getPeriodType() const {
  return periodType_;
}

void DescribeResourceUsageDetailRequest::setPeriodType(const std::string &periodType) {
  periodType_ = periodType;
  setParameter(std::string("PeriodType"), periodType);
}

long DescribeResourceUsageDetailRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void DescribeResourceUsageDetailRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string DescribeResourceUsageDetailRequest::getResourceType() const {
  return resourceType_;
}

void DescribeResourceUsageDetailRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeResourceUsageDetailRequest::getStartPeriod() const {
  return startPeriod_;
}

void DescribeResourceUsageDetailRequest::setStartPeriod(const std::string &startPeriod) {
  startPeriod_ = startPeriod;
  setParameter(std::string("StartPeriod"), startPeriod);
}

std::string DescribeResourceUsageDetailRequest::getEndPeriod() const {
  return endPeriod_;
}

void DescribeResourceUsageDetailRequest::setEndPeriod(const std::string &endPeriod) {
  endPeriod_ = endPeriod;
  setParameter(std::string("EndPeriod"), endPeriod);
}

std::string DescribeResourceUsageDetailRequest::getNextToken() const {
  return nextToken_;
}

void DescribeResourceUsageDetailRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeResourceUsageDetailRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeResourceUsageDetailRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

