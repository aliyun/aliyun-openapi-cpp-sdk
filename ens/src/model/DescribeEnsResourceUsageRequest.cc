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

#include <alibabacloud/ens/model/DescribeEnsResourceUsageRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsResourceUsageRequest;

DescribeEnsResourceUsageRequest::DescribeEnsResourceUsageRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsResourceUsage") {
  setMethod(HttpRequest::Method::Get);
}

DescribeEnsResourceUsageRequest::~DescribeEnsResourceUsageRequest() {}

std::string DescribeEnsResourceUsageRequest::getExpiredStartTime() const {
  return expiredStartTime_;
}

void DescribeEnsResourceUsageRequest::setExpiredStartTime(const std::string &expiredStartTime) {
  expiredStartTime_ = expiredStartTime;
  setParameter(std::string("ExpiredStartTime"), expiredStartTime);
}

std::string DescribeEnsResourceUsageRequest::getExpiredEndTime() const {
  return expiredEndTime_;
}

void DescribeEnsResourceUsageRequest::setExpiredEndTime(const std::string &expiredEndTime) {
  expiredEndTime_ = expiredEndTime;
  setParameter(std::string("ExpiredEndTime"), expiredEndTime);
}

