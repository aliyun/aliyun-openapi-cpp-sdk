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

#include <alibabacloud/ehpc/model/GetIfEcsTypeSupportHtConfigRequest.h>

using AlibabaCloud::EHPC::Model::GetIfEcsTypeSupportHtConfigRequest;

GetIfEcsTypeSupportHtConfigRequest::GetIfEcsTypeSupportHtConfigRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "GetIfEcsTypeSupportHtConfig") {
  setMethod(HttpRequest::Method::Get);
}

GetIfEcsTypeSupportHtConfigRequest::~GetIfEcsTypeSupportHtConfigRequest() {}

std::string GetIfEcsTypeSupportHtConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetIfEcsTypeSupportHtConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetIfEcsTypeSupportHtConfigRequest::getInstanceType() const {
  return instanceType_;
}

void GetIfEcsTypeSupportHtConfigRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

