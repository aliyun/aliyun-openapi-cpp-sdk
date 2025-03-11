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

#include <alibabacloud/drds/model/DescribeBackupSetsRequest.h>

using AlibabaCloud::Drds::Model::DescribeBackupSetsRequest;

DescribeBackupSetsRequest::DescribeBackupSetsRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeBackupSets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupSetsRequest::~DescribeBackupSetsRequest() {}

std::string DescribeBackupSetsRequest::getEndTime() const {
  return endTime_;
}

void DescribeBackupSetsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeBackupSetsRequest::getStartTime() const {
  return startTime_;
}

void DescribeBackupSetsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeBackupSetsRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeBackupSetsRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeBackupSetsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBackupSetsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

