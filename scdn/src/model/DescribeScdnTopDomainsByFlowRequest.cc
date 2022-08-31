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

#include <alibabacloud/scdn/model/DescribeScdnTopDomainsByFlowRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnTopDomainsByFlowRequest;

DescribeScdnTopDomainsByFlowRequest::DescribeScdnTopDomainsByFlowRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnTopDomainsByFlow") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnTopDomainsByFlowRequest::~DescribeScdnTopDomainsByFlowRequest() {}

std::string DescribeScdnTopDomainsByFlowRequest::getProduct() const {
  return product_;
}

void DescribeScdnTopDomainsByFlowRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

long DescribeScdnTopDomainsByFlowRequest::getLimit() const {
  return limit_;
}

void DescribeScdnTopDomainsByFlowRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string DescribeScdnTopDomainsByFlowRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnTopDomainsByFlowRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnTopDomainsByFlowRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnTopDomainsByFlowRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

