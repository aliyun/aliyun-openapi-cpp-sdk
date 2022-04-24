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

#include <alibabacloud/bssopenapi/model/DescribeResourceUsageTotalRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeResourceUsageTotalRequest;

DescribeResourceUsageTotalRequest::DescribeResourceUsageTotalRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeResourceUsageTotal") {
  setMethod(HttpRequest::Method::Post);
}

DescribeResourceUsageTotalRequest::~DescribeResourceUsageTotalRequest() {}

std::string DescribeResourceUsageTotalRequest::getPeriodType() const {
  return periodType_;
}

void DescribeResourceUsageTotalRequest::setPeriodType(const std::string &periodType) {
  periodType_ = periodType;
  setParameter(std::string("PeriodType"), periodType);
}

long DescribeResourceUsageTotalRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void DescribeResourceUsageTotalRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string DescribeResourceUsageTotalRequest::getResourceType() const {
  return resourceType_;
}

void DescribeResourceUsageTotalRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeResourceUsageTotalRequest::getStartPeriod() const {
  return startPeriod_;
}

void DescribeResourceUsageTotalRequest::setStartPeriod(const std::string &startPeriod) {
  startPeriod_ = startPeriod;
  setParameter(std::string("StartPeriod"), startPeriod);
}

std::string DescribeResourceUsageTotalRequest::getEndPeriod() const {
  return endPeriod_;
}

void DescribeResourceUsageTotalRequest::setEndPeriod(const std::string &endPeriod) {
  endPeriod_ = endPeriod;
  setParameter(std::string("EndPeriod"), endPeriod);
}

