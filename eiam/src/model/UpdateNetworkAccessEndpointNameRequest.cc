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

#include <alibabacloud/eiam/model/UpdateNetworkAccessEndpointNameRequest.h>

using AlibabaCloud::Eiam::Model::UpdateNetworkAccessEndpointNameRequest;

UpdateNetworkAccessEndpointNameRequest::UpdateNetworkAccessEndpointNameRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateNetworkAccessEndpointName") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNetworkAccessEndpointNameRequest::~UpdateNetworkAccessEndpointNameRequest() {}

std::string UpdateNetworkAccessEndpointNameRequest::getNetworkAccessEndpointId() const {
  return networkAccessEndpointId_;
}

void UpdateNetworkAccessEndpointNameRequest::setNetworkAccessEndpointId(const std::string &networkAccessEndpointId) {
  networkAccessEndpointId_ = networkAccessEndpointId;
  setParameter(std::string("NetworkAccessEndpointId"), networkAccessEndpointId);
}

std::string UpdateNetworkAccessEndpointNameRequest::getNetworkAccessEndpointName() const {
  return networkAccessEndpointName_;
}

void UpdateNetworkAccessEndpointNameRequest::setNetworkAccessEndpointName(const std::string &networkAccessEndpointName) {
  networkAccessEndpointName_ = networkAccessEndpointName;
  setParameter(std::string("NetworkAccessEndpointName"), networkAccessEndpointName);
}

std::string UpdateNetworkAccessEndpointNameRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateNetworkAccessEndpointNameRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

