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

#include <alibabacloud/oceanbasepro/model/DescribeInstanceRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeInstanceRequest;

DescribeInstanceRequest::DescribeInstanceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeInstance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceRequest::~DescribeInstanceRequest() {}

int DescribeInstanceRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstanceRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInstanceRequest::getMaxConnectionLimit() const {
  return maxConnectionLimit_;
}

void DescribeInstanceRequest::setMaxConnectionLimit(const std::string &maxConnectionLimit) {
  maxConnectionLimit_ = maxConnectionLimit;
  setBodyParameter(std::string("MaxConnectionLimit"), maxConnectionLimit);
}

std::string DescribeInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

