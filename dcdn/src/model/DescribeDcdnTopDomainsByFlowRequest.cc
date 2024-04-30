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

#include <alibabacloud/dcdn/model/DescribeDcdnTopDomainsByFlowRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnTopDomainsByFlowRequest;

DescribeDcdnTopDomainsByFlowRequest::DescribeDcdnTopDomainsByFlowRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnTopDomainsByFlow") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnTopDomainsByFlowRequest::~DescribeDcdnTopDomainsByFlowRequest() {}

long DescribeDcdnTopDomainsByFlowRequest::getLimit() const {
  return limit_;
}

void DescribeDcdnTopDomainsByFlowRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string DescribeDcdnTopDomainsByFlowRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnTopDomainsByFlowRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnTopDomainsByFlowRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnTopDomainsByFlowRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

