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

#include <alibabacloud/bssopenapi/model/DescribeResourceCoverageDetailRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeResourceCoverageDetailRequest;

DescribeResourceCoverageDetailRequest::DescribeResourceCoverageDetailRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeResourceCoverageDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeResourceCoverageDetailRequest::~DescribeResourceCoverageDetailRequest() {}

std::string DescribeResourceCoverageDetailRequest::getPeriodType() const {
  return periodType_;
}

void DescribeResourceCoverageDetailRequest::setPeriodType(const std::string &periodType) {
  periodType_ = periodType;
  setParameter(std::string("PeriodType"), periodType);
}

long DescribeResourceCoverageDetailRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void DescribeResourceCoverageDetailRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string DescribeResourceCoverageDetailRequest::getResourceType() const {
  return resourceType_;
}

void DescribeResourceCoverageDetailRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeResourceCoverageDetailRequest::getStartPeriod() const {
  return startPeriod_;
}

void DescribeResourceCoverageDetailRequest::setStartPeriod(const std::string &startPeriod) {
  startPeriod_ = startPeriod;
  setParameter(std::string("StartPeriod"), startPeriod);
}

std::string DescribeResourceCoverageDetailRequest::getEndPeriod() const {
  return endPeriod_;
}

void DescribeResourceCoverageDetailRequest::setEndPeriod(const std::string &endPeriod) {
  endPeriod_ = endPeriod;
  setParameter(std::string("EndPeriod"), endPeriod);
}

std::string DescribeResourceCoverageDetailRequest::getNextToken() const {
  return nextToken_;
}

void DescribeResourceCoverageDetailRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeResourceCoverageDetailRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeResourceCoverageDetailRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

