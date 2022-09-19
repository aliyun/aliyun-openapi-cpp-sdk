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

#include <alibabacloud/viapi-regen/model/EnableDataReflowRequest.h>

using AlibabaCloud::Viapi_regen::Model::EnableDataReflowRequest;

EnableDataReflowRequest::EnableDataReflowRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "EnableDataReflow") {
  setMethod(HttpRequest::Method::Post);
}

EnableDataReflowRequest::~EnableDataReflowRequest() {}

long EnableDataReflowRequest::getDataReflowRate() const {
  return dataReflowRate_;
}

void EnableDataReflowRequest::setDataReflowRate(long dataReflowRate) {
  dataReflowRate_ = dataReflowRate;
  setBodyParameter(std::string("DataReflowRate"), std::to_string(dataReflowRate));
}

std::string EnableDataReflowRequest::getDataReflowOssPath() const {
  return dataReflowOssPath_;
}

void EnableDataReflowRequest::setDataReflowOssPath(const std::string &dataReflowOssPath) {
  dataReflowOssPath_ = dataReflowOssPath;
  setBodyParameter(std::string("DataReflowOssPath"), dataReflowOssPath);
}

long EnableDataReflowRequest::getServiceId() const {
  return serviceId_;
}

void EnableDataReflowRequest::setServiceId(long serviceId) {
  serviceId_ = serviceId;
  setBodyParameter(std::string("ServiceId"), std::to_string(serviceId));
}

