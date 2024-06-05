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

#include <alibabacloud/dms-dg/model/ModifyGatewayRequest.h>

using AlibabaCloud::Dms_dg::Model::ModifyGatewayRequest;

ModifyGatewayRequest::ModifyGatewayRequest()
    : RpcServiceRequest("dms-dg", "2023-09-14", "ModifyGateway") {
  setMethod(HttpRequest::Method::Post);
}

ModifyGatewayRequest::~ModifyGatewayRequest() {}

std::string ModifyGatewayRequest::getGatewayDesc() const {
  return gatewayDesc_;
}

void ModifyGatewayRequest::setGatewayDesc(const std::string &gatewayDesc) {
  gatewayDesc_ = gatewayDesc;
  setBodyParameter(std::string("GatewayDesc"), gatewayDesc);
}

std::string ModifyGatewayRequest::getGatewayName() const {
  return gatewayName_;
}

void ModifyGatewayRequest::setGatewayName(const std::string &gatewayName) {
  gatewayName_ = gatewayName;
  setBodyParameter(std::string("GatewayName"), gatewayName);
}

std::string ModifyGatewayRequest::getGatewayId() const {
  return gatewayId_;
}

void ModifyGatewayRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setBodyParameter(std::string("GatewayId"), gatewayId);
}

