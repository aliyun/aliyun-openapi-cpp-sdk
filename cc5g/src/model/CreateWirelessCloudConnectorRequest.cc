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

#include <alibabacloud/cc5g/model/CreateWirelessCloudConnectorRequest.h>

using AlibabaCloud::CC5G::Model::CreateWirelessCloudConnectorRequest;

CreateWirelessCloudConnectorRequest::CreateWirelessCloudConnectorRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "CreateWirelessCloudConnector") {
  setMethod(HttpRequest::Method::Post);
}

CreateWirelessCloudConnectorRequest::~CreateWirelessCloudConnectorRequest() {}

std::string CreateWirelessCloudConnectorRequest::getUseCase() const {
  return useCase_;
}

void CreateWirelessCloudConnectorRequest::setUseCase(const std::string &useCase) {
  useCase_ = useCase;
  setParameter(std::string("UseCase"), useCase);
}

std::string CreateWirelessCloudConnectorRequest::getClientToken() const {
  return clientToken_;
}

void CreateWirelessCloudConnectorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateWirelessCloudConnectorRequest::getISP() const {
  return iSP_;
}

void CreateWirelessCloudConnectorRequest::setISP(const std::string &iSP) {
  iSP_ = iSP;
  setParameter(std::string("ISP"), iSP);
}

std::string CreateWirelessCloudConnectorRequest::getDescription() const {
  return description_;
}

void CreateWirelessCloudConnectorRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateWirelessCloudConnectorRequest::getBusinessType() const {
  return businessType_;
}

void CreateWirelessCloudConnectorRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

std::vector<CreateWirelessCloudConnectorRequest::NetLinks> CreateWirelessCloudConnectorRequest::getNetLinks() const {
  return netLinks_;
}

void CreateWirelessCloudConnectorRequest::setNetLinks(const std::vector<CreateWirelessCloudConnectorRequest::NetLinks> &netLinks) {
  netLinks_ = netLinks;
  for(int dep1 = 0; dep1 != netLinks.size(); dep1++) {
    setParameter(std::string("NetLinks") + "." + std::to_string(dep1 + 1) + ".RegionId", netLinks[dep1].regionId);
    setParameter(std::string("NetLinks") + "." + std::to_string(dep1 + 1) + ".VpcId", netLinks[dep1].vpcId);
    for(int dep2 = 0; dep2 != netLinks[dep1].vSwitchs.size(); dep2++) {
      setParameter(std::string("NetLinks") + "." + std::to_string(dep1 + 1) + ".VSwitchs." + std::to_string(dep2 + 1), netLinks[dep1].vSwitchs[dep2]);
    }
    setParameter(std::string("NetLinks") + "." + std::to_string(dep1 + 1) + ".APN", netLinks[dep1].aPN);
  }
}

std::string CreateWirelessCloudConnectorRequest::getRegionId() const {
  return regionId_;
}

void CreateWirelessCloudConnectorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateWirelessCloudConnectorRequest::getDryRun() const {
  return dryRun_;
}

void CreateWirelessCloudConnectorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateWirelessCloudConnectorRequest::getName() const {
  return name_;
}

void CreateWirelessCloudConnectorRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

