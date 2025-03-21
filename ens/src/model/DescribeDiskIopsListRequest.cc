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

#include <alibabacloud/ens/model/DescribeDiskIopsListRequest.h>

using AlibabaCloud::Ens::Model::DescribeDiskIopsListRequest;

DescribeDiskIopsListRequest::DescribeDiskIopsListRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeDiskIopsList") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDiskIopsListRequest::~DescribeDiskIopsListRequest() {}

std::string DescribeDiskIopsListRequest::getStartTime() const {
  return startTime_;
}

void DescribeDiskIopsListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDiskIopsListRequest::getDiskId() const {
  return diskId_;
}

void DescribeDiskIopsListRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::string DescribeDiskIopsListRequest::getEndTime() const {
  return endTime_;
}

void DescribeDiskIopsListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

