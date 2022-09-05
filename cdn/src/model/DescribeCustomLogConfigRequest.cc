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

#include <alibabacloud/cdn/model/DescribeCustomLogConfigRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCustomLogConfigRequest;

DescribeCustomLogConfigRequest::DescribeCustomLogConfigRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCustomLogConfig") {
  setMethod(HttpRequest::Method::Get);
}

DescribeCustomLogConfigRequest::~DescribeCustomLogConfigRequest() {}

long DescribeCustomLogConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCustomLogConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCustomLogConfigRequest::getConfigId() const {
  return configId_;
}

void DescribeCustomLogConfigRequest::setConfigId(const std::string &configId) {
  configId_ = configId;
  setParameter(std::string("ConfigId"), configId);
}

