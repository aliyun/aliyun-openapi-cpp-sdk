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

#include <alibabacloud/cc5g/model/GrantNetLinkRequest.h>

using AlibabaCloud::CC5G::Model::GrantNetLinkRequest;

GrantNetLinkRequest::GrantNetLinkRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "GrantNetLink") {
  setMethod(HttpRequest::Method::Post);
}

GrantNetLinkRequest::~GrantNetLinkRequest() {}

bool GrantNetLinkRequest::getDryRun() const {
  return dryRun_;
}

void GrantNetLinkRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string GrantNetLinkRequest::getNetLinkId() const {
  return netLinkId_;
}

void GrantNetLinkRequest::setNetLinkId(const std::string &netLinkId) {
  netLinkId_ = netLinkId;
  setParameter(std::string("NetLinkId"), netLinkId);
}

std::string GrantNetLinkRequest::getClientToken() const {
  return clientToken_;
}

void GrantNetLinkRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

long GrantNetLinkRequest::getGrantAliUid() const {
  return grantAliUid_;
}

void GrantNetLinkRequest::setGrantAliUid(long grantAliUid) {
  grantAliUid_ = grantAliUid;
  setParameter(std::string("GrantAliUid"), std::to_string(grantAliUid));
}

std::string GrantNetLinkRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void GrantNetLinkRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

