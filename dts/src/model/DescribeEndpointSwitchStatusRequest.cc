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

#include <alibabacloud/dts/model/DescribeEndpointSwitchStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribeEndpointSwitchStatusRequest;

DescribeEndpointSwitchStatusRequest::DescribeEndpointSwitchStatusRequest()
    : RpcServiceRequest("dts", "2019-09-01", "DescribeEndpointSwitchStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEndpointSwitchStatusRequest::~DescribeEndpointSwitchStatusRequest() {}

std::string DescribeEndpointSwitchStatusRequest::getClientToken() const {
  return clientToken_;
}

void DescribeEndpointSwitchStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeEndpointSwitchStatusRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEndpointSwitchStatusRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeEndpointSwitchStatusRequest::getTaskId() const {
  return taskId_;
}

void DescribeEndpointSwitchStatusRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

