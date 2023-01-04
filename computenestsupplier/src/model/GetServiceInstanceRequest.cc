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

#include <alibabacloud/computenestsupplier/model/GetServiceInstanceRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::GetServiceInstanceRequest;

GetServiceInstanceRequest::GetServiceInstanceRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "GetServiceInstance") {
  setMethod(HttpRequest::Method::Post);
}

GetServiceInstanceRequest::~GetServiceInstanceRequest() {}

std::string GetServiceInstanceRequest::getRegionId() const {
  return regionId_;
}

void GetServiceInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetServiceInstanceRequest::getServiceInstanceId() const {
  return serviceInstanceId_;
}

void GetServiceInstanceRequest::setServiceInstanceId(const std::string &serviceInstanceId) {
  serviceInstanceId_ = serviceInstanceId;
  setParameter(std::string("ServiceInstanceId"), serviceInstanceId);
}

