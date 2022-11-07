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

#include <alibabacloud/cc5g/model/CreateIoTCloudConnectorBackhaulRouteRequest.h>

using AlibabaCloud::CC5G::Model::CreateIoTCloudConnectorBackhaulRouteRequest;

CreateIoTCloudConnectorBackhaulRouteRequest::CreateIoTCloudConnectorBackhaulRouteRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "CreateIoTCloudConnectorBackhaulRoute") {
  setMethod(HttpRequest::Method::Post);
}

CreateIoTCloudConnectorBackhaulRouteRequest::~CreateIoTCloudConnectorBackhaulRouteRequest() {}

bool CreateIoTCloudConnectorBackhaulRouteRequest::getDryRun() const {
  return dryRun_;
}

void CreateIoTCloudConnectorBackhaulRouteRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateIoTCloudConnectorBackhaulRouteRequest::getNetLinkId() const {
  return netLinkId_;
}

void CreateIoTCloudConnectorBackhaulRouteRequest::setNetLinkId(const std::string &netLinkId) {
  netLinkId_ = netLinkId;
  setParameter(std::string("NetLinkId"), netLinkId);
}

std::string CreateIoTCloudConnectorBackhaulRouteRequest::getClientToken() const {
  return clientToken_;
}

void CreateIoTCloudConnectorBackhaulRouteRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateIoTCloudConnectorBackhaulRouteRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void CreateIoTCloudConnectorBackhaulRouteRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

