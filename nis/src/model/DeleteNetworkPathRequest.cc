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

#include <alibabacloud/nis/model/DeleteNetworkPathRequest.h>

using AlibabaCloud::Nis::Model::DeleteNetworkPathRequest;

DeleteNetworkPathRequest::DeleteNetworkPathRequest()
    : RpcServiceRequest("nis", "2021-12-16", "DeleteNetworkPath") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNetworkPathRequest::~DeleteNetworkPathRequest() {}

bool DeleteNetworkPathRequest::getDryRun() const {
  return dryRun_;
}

void DeleteNetworkPathRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteNetworkPathRequest::getClientToken() const {
  return clientToken_;
}

void DeleteNetworkPathRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<DeleteNetworkPathRequest::std::string> DeleteNetworkPathRequest::getNetworkPathIds() const {
  return networkPathIds_;
}

void DeleteNetworkPathRequest::setNetworkPathIds(const std::vector<DeleteNetworkPathRequest::std::string> &networkPathIds) {
  networkPathIds_ = networkPathIds;
  for(int dep1 = 0; dep1 != networkPathIds.size(); dep1++) {
    setParameter(std::string("NetworkPathIds") + "." + std::to_string(dep1 + 1), networkPathIds[dep1]);
  }
}

std::string DeleteNetworkPathRequest::getRegionId() const {
  return regionId_;
}

void DeleteNetworkPathRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

