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

#include <alibabacloud/ga/model/AttachLogStoreToEndpointGroupRequest.h>

using AlibabaCloud::Ga::Model::AttachLogStoreToEndpointGroupRequest;

AttachLogStoreToEndpointGroupRequest::AttachLogStoreToEndpointGroupRequest()
    : RpcServiceRequest("ga", "2019-11-20", "AttachLogStoreToEndpointGroup") {
  setMethod(HttpRequest::Method::Post);
}

AttachLogStoreToEndpointGroupRequest::~AttachLogStoreToEndpointGroupRequest() {}

std::string AttachLogStoreToEndpointGroupRequest::getClientToken() const {
  return clientToken_;
}

void AttachLogStoreToEndpointGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AttachLogStoreToEndpointGroupRequest::getSlsLogStoreName() const {
  return slsLogStoreName_;
}

void AttachLogStoreToEndpointGroupRequest::setSlsLogStoreName(const std::string &slsLogStoreName) {
  slsLogStoreName_ = slsLogStoreName;
  setParameter(std::string("SlsLogStoreName"), slsLogStoreName);
}

std::string AttachLogStoreToEndpointGroupRequest::getListenerId() const {
  return listenerId_;
}

void AttachLogStoreToEndpointGroupRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::vector<std::string> AttachLogStoreToEndpointGroupRequest::getEndpointGroupIds() const {
  return endpointGroupIds_;
}

void AttachLogStoreToEndpointGroupRequest::setEndpointGroupIds(const std::vector<std::string> &endpointGroupIds) {
  endpointGroupIds_ = endpointGroupIds;
}

std::string AttachLogStoreToEndpointGroupRequest::getRegionId() const {
  return regionId_;
}

void AttachLogStoreToEndpointGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachLogStoreToEndpointGroupRequest::getSlsProjectName() const {
  return slsProjectName_;
}

void AttachLogStoreToEndpointGroupRequest::setSlsProjectName(const std::string &slsProjectName) {
  slsProjectName_ = slsProjectName;
  setParameter(std::string("SlsProjectName"), slsProjectName);
}

std::string AttachLogStoreToEndpointGroupRequest::getSlsRegionId() const {
  return slsRegionId_;
}

void AttachLogStoreToEndpointGroupRequest::setSlsRegionId(const std::string &slsRegionId) {
  slsRegionId_ = slsRegionId;
  setParameter(std::string("SlsRegionId"), slsRegionId);
}

std::string AttachLogStoreToEndpointGroupRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void AttachLogStoreToEndpointGroupRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

