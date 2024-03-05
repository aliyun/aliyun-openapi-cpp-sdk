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

#include <alibabacloud/ehpc/model/InitializeEHPCRequest.h>

using AlibabaCloud::EHPC::Model::InitializeEHPCRequest;

InitializeEHPCRequest::InitializeEHPCRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "InitializeEHPC") {
  setMethod(HttpRequest::Method::Get);
}

InitializeEHPCRequest::~InitializeEHPCRequest() {}

std::string InitializeEHPCRequest::getRegionId() const {
  return regionId_;
}

void InitializeEHPCRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string InitializeEHPCRequest::getServiceName() const {
  return serviceName_;
}

void InitializeEHPCRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

