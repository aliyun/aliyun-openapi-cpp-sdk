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

#include <alibabacloud/dms-dg/model/DeleteGatewayInstanceRequest.h>

using AlibabaCloud::Dms_dg::Model::DeleteGatewayInstanceRequest;

DeleteGatewayInstanceRequest::DeleteGatewayInstanceRequest()
    : RpcServiceRequest("dms-dg", "2023-09-14", "DeleteGatewayInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGatewayInstanceRequest::~DeleteGatewayInstanceRequest() {}

std::string DeleteGatewayInstanceRequest::getGatewayInstanceId() const {
  return gatewayInstanceId_;
}

void DeleteGatewayInstanceRequest::setGatewayInstanceId(const std::string &gatewayInstanceId) {
  gatewayInstanceId_ = gatewayInstanceId;
  setBodyParameter(std::string("GatewayInstanceId"), gatewayInstanceId);
}

std::string DeleteGatewayInstanceRequest::getRegionId() const {
  return regionId_;
}

void DeleteGatewayInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DeleteGatewayInstanceRequest::getGatewayId() const {
  return gatewayId_;
}

void DeleteGatewayInstanceRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setBodyParameter(std::string("GatewayId"), gatewayId);
}

