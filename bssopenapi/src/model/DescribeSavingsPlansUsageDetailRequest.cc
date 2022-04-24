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

#include <alibabacloud/bssopenapi/model/DescribeSavingsPlansUsageDetailRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeSavingsPlansUsageDetailRequest;

DescribeSavingsPlansUsageDetailRequest::DescribeSavingsPlansUsageDetailRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeSavingsPlansUsageDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSavingsPlansUsageDetailRequest::~DescribeSavingsPlansUsageDetailRequest() {}

std::string DescribeSavingsPlansUsageDetailRequest::getPeriodType() const {
  return periodType_;
}

void DescribeSavingsPlansUsageDetailRequest::setPeriodType(const std::string &periodType) {
  periodType_ = periodType;
  setParameter(std::string("PeriodType"), periodType);
}

long DescribeSavingsPlansUsageDetailRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void DescribeSavingsPlansUsageDetailRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string DescribeSavingsPlansUsageDetailRequest::getStartPeriod() const {
  return startPeriod_;
}

void DescribeSavingsPlansUsageDetailRequest::setStartPeriod(const std::string &startPeriod) {
  startPeriod_ = startPeriod;
  setParameter(std::string("StartPeriod"), startPeriod);
}

std::string DescribeSavingsPlansUsageDetailRequest::getEndPeriod() const {
  return endPeriod_;
}

void DescribeSavingsPlansUsageDetailRequest::setEndPeriod(const std::string &endPeriod) {
  endPeriod_ = endPeriod;
  setParameter(std::string("EndPeriod"), endPeriod);
}

std::string DescribeSavingsPlansUsageDetailRequest::getToken() const {
  return token_;
}

void DescribeSavingsPlansUsageDetailRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

int DescribeSavingsPlansUsageDetailRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeSavingsPlansUsageDetailRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

