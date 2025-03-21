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

#include <alibabacloud/eiam/model/EnableApplicationApiInvokeRequest.h>

using AlibabaCloud::Eiam::Model::EnableApplicationApiInvokeRequest;

EnableApplicationApiInvokeRequest::EnableApplicationApiInvokeRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "EnableApplicationApiInvoke") {
  setMethod(HttpRequest::Method::Post);
}

EnableApplicationApiInvokeRequest::~EnableApplicationApiInvokeRequest() {}

std::string EnableApplicationApiInvokeRequest::getInstanceId() const {
  return instanceId_;
}

void EnableApplicationApiInvokeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string EnableApplicationApiInvokeRequest::getApplicationId() const {
  return applicationId_;
}

void EnableApplicationApiInvokeRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

