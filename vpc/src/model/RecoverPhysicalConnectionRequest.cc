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

#include <alibabacloud/vpc/model/RecoverPhysicalConnectionRequest.h>

using AlibabaCloud::Vpc::Model::RecoverPhysicalConnectionRequest;

RecoverPhysicalConnectionRequest::RecoverPhysicalConnectionRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "RecoverPhysicalConnection") {
  setMethod(HttpRequest::Method::Post);
}

RecoverPhysicalConnectionRequest::~RecoverPhysicalConnectionRequest() {}

bool RecoverPhysicalConnectionRequest::getDryRun() const {
  return dryRun_;
}

void RecoverPhysicalConnectionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RecoverPhysicalConnectionRequest::getToken() const {
  return token_;
}

void RecoverPhysicalConnectionRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::string RecoverPhysicalConnectionRequest::getInstanceId() const {
  return instanceId_;
}

void RecoverPhysicalConnectionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RecoverPhysicalConnectionRequest::getRegionId() const {
  return regionId_;
}

void RecoverPhysicalConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

