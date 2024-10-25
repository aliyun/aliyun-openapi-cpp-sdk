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

#include <alibabacloud/ens/model/AttachNetworkInterfaceRequest.h>

using AlibabaCloud::Ens::Model::AttachNetworkInterfaceRequest;

AttachNetworkInterfaceRequest::AttachNetworkInterfaceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "AttachNetworkInterface") {
  setMethod(HttpRequest::Method::Post);
}

AttachNetworkInterfaceRequest::~AttachNetworkInterfaceRequest() {}

std::string AttachNetworkInterfaceRequest::getInstanceId() const {
  return instanceId_;
}

void AttachNetworkInterfaceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AttachNetworkInterfaceRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void AttachNetworkInterfaceRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

