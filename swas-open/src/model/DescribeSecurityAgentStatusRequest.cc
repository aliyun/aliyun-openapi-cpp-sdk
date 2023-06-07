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

#include <alibabacloud/swas-open/model/DescribeSecurityAgentStatusRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeSecurityAgentStatusRequest;

DescribeSecurityAgentStatusRequest::DescribeSecurityAgentStatusRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeSecurityAgentStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecurityAgentStatusRequest::~DescribeSecurityAgentStatusRequest() {}

std::string DescribeSecurityAgentStatusRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSecurityAgentStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeSecurityAgentStatusRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSecurityAgentStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeSecurityAgentStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeSecurityAgentStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

