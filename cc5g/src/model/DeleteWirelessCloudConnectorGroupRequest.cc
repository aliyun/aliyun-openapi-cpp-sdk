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

#include <alibabacloud/cc5g/model/DeleteWirelessCloudConnectorGroupRequest.h>

using AlibabaCloud::CC5G::Model::DeleteWirelessCloudConnectorGroupRequest;

DeleteWirelessCloudConnectorGroupRequest::DeleteWirelessCloudConnectorGroupRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "DeleteWirelessCloudConnectorGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteWirelessCloudConnectorGroupRequest::~DeleteWirelessCloudConnectorGroupRequest() {}

std::string DeleteWirelessCloudConnectorGroupRequest::getWirelessCloudConnectorGroupId() const {
  return wirelessCloudConnectorGroupId_;
}

void DeleteWirelessCloudConnectorGroupRequest::setWirelessCloudConnectorGroupId(const std::string &wirelessCloudConnectorGroupId) {
  wirelessCloudConnectorGroupId_ = wirelessCloudConnectorGroupId;
  setParameter(std::string("WirelessCloudConnectorGroupId"), wirelessCloudConnectorGroupId);
}

bool DeleteWirelessCloudConnectorGroupRequest::getDryRun() const {
  return dryRun_;
}

void DeleteWirelessCloudConnectorGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteWirelessCloudConnectorGroupRequest::getClientToken() const {
  return clientToken_;
}

void DeleteWirelessCloudConnectorGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

