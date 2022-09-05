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

#include <alibabacloud/cdn/model/DescribeCdnUserConfigsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnUserConfigsRequest;

DescribeCdnUserConfigsRequest::DescribeCdnUserConfigsRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnUserConfigs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnUserConfigsRequest::~DescribeCdnUserConfigsRequest() {}

std::string DescribeCdnUserConfigsRequest::getFunctionName() const {
  return functionName_;
}

void DescribeCdnUserConfigsRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("FunctionName"), functionName);
}

long DescribeCdnUserConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnUserConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

