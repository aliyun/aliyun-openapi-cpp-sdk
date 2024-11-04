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

#include <alibabacloud/alb/model/CreateAclRequest.h>

using AlibabaCloud::Alb::Model::CreateAclRequest;

CreateAclRequest::CreateAclRequest()
    : RpcServiceRequest("alb", "2020-06-16", "CreateAcl") {
  setMethod(HttpRequest::Method::Post);
}

CreateAclRequest::~CreateAclRequest() {}

std::string CreateAclRequest::getAclName() const {
  return aclName_;
}

void CreateAclRequest::setAclName(const std::string &aclName) {
  aclName_ = aclName;
  setParameter(std::string("AclName"), aclName);
}

std::string CreateAclRequest::getClientToken() const {
  return clientToken_;
}

void CreateAclRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateAclRequest::getAddressIpVersion() const {
  return addressIpVersion_;
}

void CreateAclRequest::setAddressIpVersion(const std::string &addressIpVersion) {
  addressIpVersion_ = addressIpVersion;
  setParameter(std::string("AddressIpVersion"), addressIpVersion);
}

std::string CreateAclRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAclRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<CreateAclRequest::Tag> CreateAclRequest::getTag() const {
  return tag_;
}

void CreateAclRequest::setTag(const std::vector<CreateAclRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

bool CreateAclRequest::getDryRun() const {
  return dryRun_;
}

void CreateAclRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

