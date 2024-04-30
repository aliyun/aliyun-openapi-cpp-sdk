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

#include <alibabacloud/dcdn/model/DescribeDcdnUserBillTypeRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnUserBillTypeRequest;

DescribeDcdnUserBillTypeRequest::DescribeDcdnUserBillTypeRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnUserBillType") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnUserBillTypeRequest::~DescribeDcdnUserBillTypeRequest() {}

std::string DescribeDcdnUserBillTypeRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnUserBillTypeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnUserBillTypeRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnUserBillTypeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

