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

#include <alibabacloud/csas/model/UpdatePrivateAccessApplicationRequest.h>

using AlibabaCloud::Csas::Model::UpdatePrivateAccessApplicationRequest;

UpdatePrivateAccessApplicationRequest::UpdatePrivateAccessApplicationRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdatePrivateAccessApplication") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrivateAccessApplicationRequest::~UpdatePrivateAccessApplicationRequest() {}

std::vector<UpdatePrivateAccessApplicationRequest::std::string> UpdatePrivateAccessApplicationRequest::getAddresses() const {
  return addresses_;
}

void UpdatePrivateAccessApplicationRequest::setAddresses(const std::vector<UpdatePrivateAccessApplicationRequest::std::string> &addresses) {
  addresses_ = addresses;
  for(int dep1 = 0; dep1 != addresses.size(); dep1++) {
    setBodyParameter(std::string("Addresses") + "." + std::to_string(dep1 + 1), addresses[dep1]);
  }
}

std::string UpdatePrivateAccessApplicationRequest::getDescription() const {
  return description_;
}

void UpdatePrivateAccessApplicationRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdatePrivateAccessApplicationRequest::getProtocol() const {
  return protocol_;
}

void UpdatePrivateAccessApplicationRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setBodyParameter(std::string("Protocol"), protocol);
}

std::string UpdatePrivateAccessApplicationRequest::getSourceIp() const {
  return sourceIp_;
}

void UpdatePrivateAccessApplicationRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string UpdatePrivateAccessApplicationRequest::getApplicationId() const {
  return applicationId_;
}

void UpdatePrivateAccessApplicationRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setBodyParameter(std::string("ApplicationId"), applicationId);
}

std::vector<UpdatePrivateAccessApplicationRequest::std::string> UpdatePrivateAccessApplicationRequest::getTagIds() const {
  return tagIds_;
}

void UpdatePrivateAccessApplicationRequest::setTagIds(const std::vector<UpdatePrivateAccessApplicationRequest::std::string> &tagIds) {
  tagIds_ = tagIds;
  for(int dep1 = 0; dep1 != tagIds.size(); dep1++) {
    setBodyParameter(std::string("TagIds") + "." + std::to_string(dep1 + 1), tagIds[dep1]);
  }
}

std::vector<UpdatePrivateAccessApplicationRequest::PortRanges> UpdatePrivateAccessApplicationRequest::getPortRanges() const {
  return portRanges_;
}

void UpdatePrivateAccessApplicationRequest::setPortRanges(const std::vector<UpdatePrivateAccessApplicationRequest::PortRanges> &portRanges) {
  portRanges_ = portRanges;
  for(int dep1 = 0; dep1 != portRanges.size(); dep1++) {
    setBodyParameter(std::string("PortRanges") + "." + std::to_string(dep1 + 1) + ".End", std::to_string(portRanges[dep1].end));
    setBodyParameter(std::string("PortRanges") + "." + std::to_string(dep1 + 1) + ".Begin", std::to_string(portRanges[dep1].begin));
  }
}

std::string UpdatePrivateAccessApplicationRequest::getModifyType() const {
  return modifyType_;
}

void UpdatePrivateAccessApplicationRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setBodyParameter(std::string("ModifyType"), modifyType);
}

std::string UpdatePrivateAccessApplicationRequest::getStatus() const {
  return status_;
}

void UpdatePrivateAccessApplicationRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

