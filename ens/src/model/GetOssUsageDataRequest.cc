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

#include <alibabacloud/ens/model/GetOssUsageDataRequest.h>

using AlibabaCloud::Ens::Model::GetOssUsageDataRequest;

GetOssUsageDataRequest::GetOssUsageDataRequest()
    : RpcServiceRequest("ens", "2017-11-10", "GetOssUsageData") {
  setMethod(HttpRequest::Method::Get);
}

GetOssUsageDataRequest::~GetOssUsageDataRequest() {}

std::string GetOssUsageDataRequest::getStartTime() const {
  return startTime_;
}

void GetOssUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string GetOssUsageDataRequest::getPeriod() const {
  return period_;
}

void GetOssUsageDataRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string GetOssUsageDataRequest::getEndTime() const {
  return endTime_;
}

void GetOssUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string GetOssUsageDataRequest::getBucket() const {
  return bucket_;
}

void GetOssUsageDataRequest::setBucket(const std::string &bucket) {
  bucket_ = bucket;
  setParameter(std::string("Bucket"), bucket);
}

