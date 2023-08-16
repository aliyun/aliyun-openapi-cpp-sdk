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

#include <alibabacloud/csas/model/CreatePrivateAccessApplicationRequest.h>

using AlibabaCloud::Csas::Model::CreatePrivateAccessApplicationRequest;

CreatePrivateAccessApplicationRequest::CreatePrivateAccessApplicationRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreatePrivateAccessApplication") {
  setMethod(HttpRequest::Method::Post);
}

CreatePrivateAccessApplicationRequest::~CreatePrivateAccessApplicationRequest() {}

std::vector<CreatePrivateAccessApplicationRequest::std::string> CreatePrivateAccessApplicationRequest::getAddresses() const {
  return addresses_;
}

void CreatePrivateAccessApplicationRequest::setAddresses(const std::vector<CreatePrivateAccessApplicationRequest::std::string> &addresses) {
  addresses_ = addresses;
  for(int dep1 = 0; dep1 != addresses.size(); dep1++) {
    setBodyParameter(std::string("Addresses") + "." + std::to_string(dep1 + 1), addresses[dep1]);
  }
}

std::string CreatePrivateAccessApplicationRequest::getDescription() const {
  return description_;
}

void CreatePrivateAccessApplicationRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreatePrivateAccessApplicationRequest::getProtocol() const {
  return protocol_;
}

void CreatePrivateAccessApplicationRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setBodyParameter(std::string("Protocol"), protocol);
}

std::string CreatePrivateAccessApplicationRequest::getSourceIp() const {
  return sourceIp_;
}

void CreatePrivateAccessApplicationRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<CreatePrivateAccessApplicationRequest::std::string> CreatePrivateAccessApplicationRequest::getTagIds() const {
  return tagIds_;
}

void CreatePrivateAccessApplicationRequest::setTagIds(const std::vector<CreatePrivateAccessApplicationRequest::std::string> &tagIds) {
  tagIds_ = tagIds;
  for(int dep1 = 0; dep1 != tagIds.size(); dep1++) {
    setBodyParameter(std::string("TagIds") + "." + std::to_string(dep1 + 1), tagIds[dep1]);
  }
}

std::vector<CreatePrivateAccessApplicationRequest::PortRanges> CreatePrivateAccessApplicationRequest::getPortRanges() const {
  return portRanges_;
}

void CreatePrivateAccessApplicationRequest::setPortRanges(const std::vector<CreatePrivateAccessApplicationRequest::PortRanges> &portRanges) {
  portRanges_ = portRanges;
  for(int dep1 = 0; dep1 != portRanges.size(); dep1++) {
    setBodyParameter(std::string("PortRanges") + "." + std::to_string(dep1 + 1) + ".End", std::to_string(portRanges[dep1].end));
    setBodyParameter(std::string("PortRanges") + "." + std::to_string(dep1 + 1) + ".Begin", std::to_string(portRanges[dep1].begin));
  }
}

std::string CreatePrivateAccessApplicationRequest::getName() const {
  return name_;
}

void CreatePrivateAccessApplicationRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreatePrivateAccessApplicationRequest::getStatus() const {
  return status_;
}

void CreatePrivateAccessApplicationRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

