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

#include <alibabacloud/eiam/model/UpdateNetworkZoneDescriptionRequest.h>

using AlibabaCloud::Eiam::Model::UpdateNetworkZoneDescriptionRequest;

UpdateNetworkZoneDescriptionRequest::UpdateNetworkZoneDescriptionRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateNetworkZoneDescription") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNetworkZoneDescriptionRequest::~UpdateNetworkZoneDescriptionRequest() {}

std::string UpdateNetworkZoneDescriptionRequest::getClientToken() const {
  return clientToken_;
}

void UpdateNetworkZoneDescriptionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateNetworkZoneDescriptionRequest::getDescription() const {
  return description_;
}

void UpdateNetworkZoneDescriptionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateNetworkZoneDescriptionRequest::getNetworkZoneId() const {
  return networkZoneId_;
}

void UpdateNetworkZoneDescriptionRequest::setNetworkZoneId(const std::string &networkZoneId) {
  networkZoneId_ = networkZoneId;
  setParameter(std::string("NetworkZoneId"), networkZoneId);
}

std::string UpdateNetworkZoneDescriptionRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateNetworkZoneDescriptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

