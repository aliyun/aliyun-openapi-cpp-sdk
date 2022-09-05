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

#include <alibabacloud/cdn/model/DescribeConfigGroupDetailRequest.h>

using AlibabaCloud::Cdn::Model::DescribeConfigGroupDetailRequest;

DescribeConfigGroupDetailRequest::DescribeConfigGroupDetailRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeConfigGroupDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeConfigGroupDetailRequest::~DescribeConfigGroupDetailRequest() {}

std::string DescribeConfigGroupDetailRequest::getConfigGroupName() const {
  return configGroupName_;
}

void DescribeConfigGroupDetailRequest::setConfigGroupName(const std::string &configGroupName) {
  configGroupName_ = configGroupName;
  setParameter(std::string("ConfigGroupName"), configGroupName);
}

long DescribeConfigGroupDetailRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeConfigGroupDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeConfigGroupDetailRequest::getConfigGroupId() const {
  return configGroupId_;
}

void DescribeConfigGroupDetailRequest::setConfigGroupId(const std::string &configGroupId) {
  configGroupId_ = configGroupId;
  setParameter(std::string("ConfigGroupId"), configGroupId);
}

