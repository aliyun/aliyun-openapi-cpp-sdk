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

#include <alibabacloud/appstream-center/model/ModifyAppInstanceGroupAttributeRequest.h>

using AlibabaCloud::Appstream_center::Model::ModifyAppInstanceGroupAttributeRequest;

ModifyAppInstanceGroupAttributeRequest::ModifyAppInstanceGroupAttributeRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "ModifyAppInstanceGroupAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAppInstanceGroupAttributeRequest::~ModifyAppInstanceGroupAttributeRequest() {}

ModifyAppInstanceGroupAttributeRequest::NodePool ModifyAppInstanceGroupAttributeRequest::getNodePool() const {
  return nodePool_;
}

void ModifyAppInstanceGroupAttributeRequest::setNodePool(const ModifyAppInstanceGroupAttributeRequest::NodePool &nodePool) {
  nodePool_ = nodePool;
  setParameter(std::string("NodePool") + ".NodePoolId", nodePool.nodePoolId);
  setParameter(std::string("NodePool") + ".NodeCapacity", std::to_string(nodePool.nodeCapacity));
}

std::string ModifyAppInstanceGroupAttributeRequest::getProductType() const {
  return productType_;
}

void ModifyAppInstanceGroupAttributeRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string ModifyAppInstanceGroupAttributeRequest::getAppInstanceGroupName() const {
  return appInstanceGroupName_;
}

void ModifyAppInstanceGroupAttributeRequest::setAppInstanceGroupName(const std::string &appInstanceGroupName) {
  appInstanceGroupName_ = appInstanceGroupName;
  setParameter(std::string("AppInstanceGroupName"), appInstanceGroupName);
}

int ModifyAppInstanceGroupAttributeRequest::getSessionTimeout() const {
  return sessionTimeout_;
}

void ModifyAppInstanceGroupAttributeRequest::setSessionTimeout(int sessionTimeout) {
  sessionTimeout_ = sessionTimeout;
  setParameter(std::string("SessionTimeout"), std::to_string(sessionTimeout));
}

std::string ModifyAppInstanceGroupAttributeRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void ModifyAppInstanceGroupAttributeRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

