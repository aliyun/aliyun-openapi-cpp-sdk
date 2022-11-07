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

#include <alibabacloud/cc5g/model/RemoveWirelessCloudConnectorFromGroupRequest.h>

using AlibabaCloud::CC5G::Model::RemoveWirelessCloudConnectorFromGroupRequest;

RemoveWirelessCloudConnectorFromGroupRequest::RemoveWirelessCloudConnectorFromGroupRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "RemoveWirelessCloudConnectorFromGroup") {
  setMethod(HttpRequest::Method::Post);
}

RemoveWirelessCloudConnectorFromGroupRequest::~RemoveWirelessCloudConnectorFromGroupRequest() {}

std::vector<std::string> RemoveWirelessCloudConnectorFromGroupRequest::getWirelessCloudConnectorIds() const {
  return wirelessCloudConnectorIds_;
}

void RemoveWirelessCloudConnectorFromGroupRequest::setWirelessCloudConnectorIds(const std::vector<std::string> &wirelessCloudConnectorIds) {
  wirelessCloudConnectorIds_ = wirelessCloudConnectorIds;
}

std::string RemoveWirelessCloudConnectorFromGroupRequest::getWirelessCloudConnectorGroupId() const {
  return wirelessCloudConnectorGroupId_;
}

void RemoveWirelessCloudConnectorFromGroupRequest::setWirelessCloudConnectorGroupId(const std::string &wirelessCloudConnectorGroupId) {
  wirelessCloudConnectorGroupId_ = wirelessCloudConnectorGroupId;
  setParameter(std::string("WirelessCloudConnectorGroupId"), wirelessCloudConnectorGroupId);
}

bool RemoveWirelessCloudConnectorFromGroupRequest::getDryRun() const {
  return dryRun_;
}

void RemoveWirelessCloudConnectorFromGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RemoveWirelessCloudConnectorFromGroupRequest::getClientToken() const {
  return clientToken_;
}

void RemoveWirelessCloudConnectorFromGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RemoveWirelessCloudConnectorFromGroupRequest::getRegionId() const {
  return regionId_;
}

void RemoveWirelessCloudConnectorFromGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

