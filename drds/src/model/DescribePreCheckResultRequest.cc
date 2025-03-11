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

#include <alibabacloud/drds/model/DescribePreCheckResultRequest.h>

using AlibabaCloud::Drds::Model::DescribePreCheckResultRequest;

DescribePreCheckResultRequest::DescribePreCheckResultRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribePreCheckResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribePreCheckResultRequest::~DescribePreCheckResultRequest() {}

std::string DescribePreCheckResultRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribePreCheckResultRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribePreCheckResultRequest::getRegionId() const {
  return regionId_;
}

void DescribePreCheckResultRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePreCheckResultRequest::getTaskId() const {
  return taskId_;
}

void DescribePreCheckResultRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

