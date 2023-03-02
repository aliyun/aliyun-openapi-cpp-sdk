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

#include <alibabacloud/swas-open/model/DescribeInvocationResultRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeInvocationResultRequest;

DescribeInvocationResultRequest::DescribeInvocationResultRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeInvocationResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInvocationResultRequest::~DescribeInvocationResultRequest() {}

std::string DescribeInvocationResultRequest::getInvokeId() const {
  return invokeId_;
}

void DescribeInvocationResultRequest::setInvokeId(const std::string &invokeId) {
  invokeId_ = invokeId;
  setParameter(std::string("InvokeId"), invokeId);
}

std::string DescribeInvocationResultRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInvocationResultRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInvocationResultRequest::getRegionId() const {
  return regionId_;
}

void DescribeInvocationResultRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

