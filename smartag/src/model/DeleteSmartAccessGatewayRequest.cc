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

#include <alibabacloud/smartag/model/DeleteSmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::DeleteSmartAccessGatewayRequest;

DeleteSmartAccessGatewayRequest::DeleteSmartAccessGatewayRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteSmartAccessGateway") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSmartAccessGatewayRequest::~DeleteSmartAccessGatewayRequest() {}

long DeleteSmartAccessGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteSmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteSmartAccessGatewayRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteSmartAccessGatewayRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteSmartAccessGatewayRequest::getRegionId() const {
  return regionId_;
}

void DeleteSmartAccessGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

