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

#include <alibabacloud/cdn/model/DescribeEsExceptionDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeEsExceptionDataRequest;

DescribeEsExceptionDataRequest::DescribeEsExceptionDataRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeEsExceptionData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEsExceptionDataRequest::~DescribeEsExceptionDataRequest() {}

std::string DescribeEsExceptionDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeEsExceptionDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeEsExceptionDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeEsExceptionDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeEsExceptionDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEsExceptionDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeEsExceptionDataRequest::getRuleId() const {
  return ruleId_;
}

void DescribeEsExceptionDataRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

