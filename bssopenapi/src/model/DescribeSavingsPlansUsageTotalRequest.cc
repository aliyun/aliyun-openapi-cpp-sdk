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

#include <alibabacloud/bssopenapi/model/DescribeSavingsPlansUsageTotalRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeSavingsPlansUsageTotalRequest;

DescribeSavingsPlansUsageTotalRequest::DescribeSavingsPlansUsageTotalRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeSavingsPlansUsageTotal") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSavingsPlansUsageTotalRequest::~DescribeSavingsPlansUsageTotalRequest() {}

std::string DescribeSavingsPlansUsageTotalRequest::getPeriodType() const {
  return periodType_;
}

void DescribeSavingsPlansUsageTotalRequest::setPeriodType(const std::string &periodType) {
  periodType_ = periodType;
  setParameter(std::string("PeriodType"), periodType);
}

long DescribeSavingsPlansUsageTotalRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void DescribeSavingsPlansUsageTotalRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string DescribeSavingsPlansUsageTotalRequest::getStartPeriod() const {
  return startPeriod_;
}

void DescribeSavingsPlansUsageTotalRequest::setStartPeriod(const std::string &startPeriod) {
  startPeriod_ = startPeriod;
  setParameter(std::string("StartPeriod"), startPeriod);
}

std::string DescribeSavingsPlansUsageTotalRequest::getEndPeriod() const {
  return endPeriod_;
}

void DescribeSavingsPlansUsageTotalRequest::setEndPeriod(const std::string &endPeriod) {
  endPeriod_ = endPeriod;
  setParameter(std::string("EndPeriod"), endPeriod);
}

