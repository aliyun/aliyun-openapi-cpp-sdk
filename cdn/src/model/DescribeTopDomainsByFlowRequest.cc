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

#include <alibabacloud/cdn/model/DescribeTopDomainsByFlowRequest.h>

using AlibabaCloud::Cdn::Model::DescribeTopDomainsByFlowRequest;

DescribeTopDomainsByFlowRequest::DescribeTopDomainsByFlowRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeTopDomainsByFlow") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTopDomainsByFlowRequest::~DescribeTopDomainsByFlowRequest() {}

std::string DescribeTopDomainsByFlowRequest::getStartTime() const {
  return startTime_;
}

void DescribeTopDomainsByFlowRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeTopDomainsByFlowRequest::getLimit() const {
  return limit_;
}

void DescribeTopDomainsByFlowRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string DescribeTopDomainsByFlowRequest::getProduct() const {
  return product_;
}

void DescribeTopDomainsByFlowRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeTopDomainsByFlowRequest::getEndTime() const {
  return endTime_;
}

void DescribeTopDomainsByFlowRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeTopDomainsByFlowRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTopDomainsByFlowRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

