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

#include <alibabacloud/cc5g/model/UpdateCardRequest.h>

using AlibabaCloud::CC5G::Model::UpdateCardRequest;

UpdateCardRequest::UpdateCardRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "UpdateCard") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCardRequest::~UpdateCardRequest() {}

std::string UpdateCardRequest::getClientToken() const {
  return clientToken_;
}

void UpdateCardRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateCardRequest::getDescription() const {
  return description_;
}

void UpdateCardRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateCardRequest::getIccid() const {
  return iccid_;
}

void UpdateCardRequest::setIccid(const std::string &iccid) {
  iccid_ = iccid;
  setParameter(std::string("Iccid"), iccid);
}

bool UpdateCardRequest::getDryRun() const {
  return dryRun_;
}

void UpdateCardRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateCardRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void UpdateCardRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

std::string UpdateCardRequest::getName() const {
  return name_;
}

void UpdateCardRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

