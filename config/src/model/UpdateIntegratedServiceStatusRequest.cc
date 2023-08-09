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

#include <alibabacloud/config/model/UpdateIntegratedServiceStatusRequest.h>

using AlibabaCloud::Config::Model::UpdateIntegratedServiceStatusRequest;

UpdateIntegratedServiceStatusRequest::UpdateIntegratedServiceStatusRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateIntegratedServiceStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIntegratedServiceStatusRequest::~UpdateIntegratedServiceStatusRequest() {}

std::string UpdateIntegratedServiceStatusRequest::getServiceCode() const {
  return serviceCode_;
}

void UpdateIntegratedServiceStatusRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

bool UpdateIntegratedServiceStatusRequest::getStatus() const {
  return status_;
}

void UpdateIntegratedServiceStatusRequest::setStatus(bool status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status ? "true" : "false");
}

