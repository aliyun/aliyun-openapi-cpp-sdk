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

#include <alibabacloud/vod/model/DescribeMediaDistributionRequest.h>

using AlibabaCloud::Vod::Model::DescribeMediaDistributionRequest;

DescribeMediaDistributionRequest::DescribeMediaDistributionRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeMediaDistribution") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMediaDistributionRequest::~DescribeMediaDistributionRequest() {}

std::string DescribeMediaDistributionRequest::getEndTime() const {
  return endTime_;
}

void DescribeMediaDistributionRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeMediaDistributionRequest::getStartTime() const {
  return startTime_;
}

void DescribeMediaDistributionRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeMediaDistributionRequest::getStorageClass() const {
  return storageClass_;
}

void DescribeMediaDistributionRequest::setStorageClass(const std::string &storageClass) {
  storageClass_ = storageClass;
  setParameter(std::string("StorageClass"), storageClass);
}

std::string DescribeMediaDistributionRequest::getInterval() const {
  return interval_;
}

void DescribeMediaDistributionRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

