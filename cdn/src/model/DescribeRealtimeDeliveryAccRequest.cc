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

#include <alibabacloud/cdn/model/DescribeRealtimeDeliveryAccRequest.h>

using AlibabaCloud::Cdn::Model::DescribeRealtimeDeliveryAccRequest;

DescribeRealtimeDeliveryAccRequest::DescribeRealtimeDeliveryAccRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeRealtimeDeliveryAcc") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRealtimeDeliveryAccRequest::~DescribeRealtimeDeliveryAccRequest() {}

std::string DescribeRealtimeDeliveryAccRequest::getProject() const {
  return project_;
}

void DescribeRealtimeDeliveryAccRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string DescribeRealtimeDeliveryAccRequest::getStartTime() const {
  return startTime_;
}

void DescribeRealtimeDeliveryAccRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeRealtimeDeliveryAccRequest::getEndTime() const {
  return endTime_;
}

void DescribeRealtimeDeliveryAccRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeRealtimeDeliveryAccRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRealtimeDeliveryAccRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRealtimeDeliveryAccRequest::getInterval() const {
  return interval_;
}

void DescribeRealtimeDeliveryAccRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeRealtimeDeliveryAccRequest::getLogStore() const {
  return logStore_;
}

void DescribeRealtimeDeliveryAccRequest::setLogStore(const std::string &logStore) {
  logStore_ = logStore;
  setParameter(std::string("LogStore"), logStore);
}

