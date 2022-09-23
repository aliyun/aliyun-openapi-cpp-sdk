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

#include <alibabacloud/ens/model/CreateNetworkAclEntryRequest.h>

using AlibabaCloud::Ens::Model::CreateNetworkAclEntryRequest;

CreateNetworkAclEntryRequest::CreateNetworkAclEntryRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateNetworkAclEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkAclEntryRequest::~CreateNetworkAclEntryRequest() {}

std::string CreateNetworkAclEntryRequest::getNetworkAclEntryName() const {
  return networkAclEntryName_;
}

void CreateNetworkAclEntryRequest::setNetworkAclEntryName(const std::string &networkAclEntryName) {
  networkAclEntryName_ = networkAclEntryName;
  setParameter(std::string("NetworkAclEntryName"), networkAclEntryName);
}

std::string CreateNetworkAclEntryRequest::getProtocol() const {
  return protocol_;
}

void CreateNetworkAclEntryRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string CreateNetworkAclEntryRequest::getPortRange() const {
  return portRange_;
}

void CreateNetworkAclEntryRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

int CreateNetworkAclEntryRequest::getPriority() const {
  return priority_;
}

void CreateNetworkAclEntryRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateNetworkAclEntryRequest::getDescription() const {
  return description_;
}

void CreateNetworkAclEntryRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNetworkAclEntryRequest::getNetworkAclId() const {
  return networkAclId_;
}

void CreateNetworkAclEntryRequest::setNetworkAclId(const std::string &networkAclId) {
  networkAclId_ = networkAclId;
  setParameter(std::string("NetworkAclId"), networkAclId);
}

std::string CreateNetworkAclEntryRequest::getDirection() const {
  return direction_;
}

void CreateNetworkAclEntryRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string CreateNetworkAclEntryRequest::getPolicy() const {
  return policy_;
}

void CreateNetworkAclEntryRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string CreateNetworkAclEntryRequest::getCidrBlock() const {
  return cidrBlock_;
}

void CreateNetworkAclEntryRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

