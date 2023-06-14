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

#include <alibabacloud/ga/model/DeleteAclRequest.h>

using AlibabaCloud::Ga::Model::DeleteAclRequest;

DeleteAclRequest::DeleteAclRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteAcl") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAclRequest::~DeleteAclRequest() {}

std::string DeleteAclRequest::getAclId() const {
  return aclId_;
}

void DeleteAclRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

bool DeleteAclRequest::getDryRun() const {
  return dryRun_;
}

void DeleteAclRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteAclRequest::getClientToken() const {
  return clientToken_;
}

void DeleteAclRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteAclRequest::getRegionId() const {
  return regionId_;
}

void DeleteAclRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

