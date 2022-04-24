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

#include <alibabacloud/bssopenapi/model/DescribeSavingsPlansCoverageDetailRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeSavingsPlansCoverageDetailRequest;

DescribeSavingsPlansCoverageDetailRequest::DescribeSavingsPlansCoverageDetailRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeSavingsPlansCoverageDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSavingsPlansCoverageDetailRequest::~DescribeSavingsPlansCoverageDetailRequest() {}

std::string DescribeSavingsPlansCoverageDetailRequest::getPeriodType() const {
  return periodType_;
}

void DescribeSavingsPlansCoverageDetailRequest::setPeriodType(const std::string &periodType) {
  periodType_ = periodType;
  setParameter(std::string("PeriodType"), periodType);
}

long DescribeSavingsPlansCoverageDetailRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void DescribeSavingsPlansCoverageDetailRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string DescribeSavingsPlansCoverageDetailRequest::getStartPeriod() const {
  return startPeriod_;
}

void DescribeSavingsPlansCoverageDetailRequest::setStartPeriod(const std::string &startPeriod) {
  startPeriod_ = startPeriod;
  setParameter(std::string("StartPeriod"), startPeriod);
}

std::string DescribeSavingsPlansCoverageDetailRequest::getEndPeriod() const {
  return endPeriod_;
}

void DescribeSavingsPlansCoverageDetailRequest::setEndPeriod(const std::string &endPeriod) {
  endPeriod_ = endPeriod;
  setParameter(std::string("EndPeriod"), endPeriod);
}

std::string DescribeSavingsPlansCoverageDetailRequest::getToken() const {
  return token_;
}

void DescribeSavingsPlansCoverageDetailRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

int DescribeSavingsPlansCoverageDetailRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeSavingsPlansCoverageDetailRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

