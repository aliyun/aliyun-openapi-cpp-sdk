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

#include <alibabacloud/dms-dg/model/CreateGatewayRequest.h>

using AlibabaCloud::Dms_dg::Model::CreateGatewayRequest;

CreateGatewayRequest::CreateGatewayRequest()
    : RpcServiceRequest("dms-dg", "2023-09-14", "CreateGateway") {
  setMethod(HttpRequest::Method::Post);
}

CreateGatewayRequest::~CreateGatewayRequest() {}

std::string CreateGatewayRequest::getGatewayDesc() const {
  return gatewayDesc_;
}

void CreateGatewayRequest::setGatewayDesc(const std::string &gatewayDesc) {
  gatewayDesc_ = gatewayDesc;
  setBodyParameter(std::string("GatewayDesc"), gatewayDesc);
}

std::string CreateGatewayRequest::getRegionId() const {
  return regionId_;
}

void CreateGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateGatewayRequest::getGatewayName() const {
  return gatewayName_;
}

void CreateGatewayRequest::setGatewayName(const std::string &gatewayName) {
  gatewayName_ = gatewayName;
  setBodyParameter(std::string("GatewayName"), gatewayName);
}

