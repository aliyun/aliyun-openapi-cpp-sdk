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

#include <alibabacloud/cdn/model/DescribeCdnUserBillHistoryRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnUserBillHistoryRequest;

DescribeCdnUserBillHistoryRequest::DescribeCdnUserBillHistoryRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnUserBillHistory") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnUserBillHistoryRequest::~DescribeCdnUserBillHistoryRequest() {}

std::string DescribeCdnUserBillHistoryRequest::getStartTime() const {
  return startTime_;
}

void DescribeCdnUserBillHistoryRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeCdnUserBillHistoryRequest::getEndTime() const {
  return endTime_;
}

void DescribeCdnUserBillHistoryRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeCdnUserBillHistoryRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnUserBillHistoryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

