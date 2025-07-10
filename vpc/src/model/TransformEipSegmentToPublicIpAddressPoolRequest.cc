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

#include <alibabacloud/vpc/model/TransformEipSegmentToPublicIpAddressPoolRequest.h>

using AlibabaCloud::Vpc::Model::TransformEipSegmentToPublicIpAddressPoolRequest;

TransformEipSegmentToPublicIpAddressPoolRequest::TransformEipSegmentToPublicIpAddressPoolRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "TransformEipSegmentToPublicIpAddressPool") {
  setMethod(HttpRequest::Method::Post);
}

TransformEipSegmentToPublicIpAddressPoolRequest::~TransformEipSegmentToPublicIpAddressPoolRequest() {}

std::string TransformEipSegmentToPublicIpAddressPoolRequest::getClientToken() const {
  return clientToken_;
}

void TransformEipSegmentToPublicIpAddressPoolRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string TransformEipSegmentToPublicIpAddressPoolRequest::getDescription() const {
  return description_;
}

void TransformEipSegmentToPublicIpAddressPoolRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string TransformEipSegmentToPublicIpAddressPoolRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void TransformEipSegmentToPublicIpAddressPoolRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string TransformEipSegmentToPublicIpAddressPoolRequest::getRegionId() const {
  return regionId_;
}

void TransformEipSegmentToPublicIpAddressPoolRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string TransformEipSegmentToPublicIpAddressPoolRequest::getInstanceId() const {
  return instanceId_;
}

void TransformEipSegmentToPublicIpAddressPoolRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string TransformEipSegmentToPublicIpAddressPoolRequest::getName() const {
  return name_;
}

void TransformEipSegmentToPublicIpAddressPoolRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

