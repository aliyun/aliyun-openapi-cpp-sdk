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

#include <alibabacloud/ga/model/DeleteEndpointGroupsRequest.h>

using AlibabaCloud::Ga::Model::DeleteEndpointGroupsRequest;

DeleteEndpointGroupsRequest::DeleteEndpointGroupsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteEndpointGroups") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEndpointGroupsRequest::~DeleteEndpointGroupsRequest() {}

bool DeleteEndpointGroupsRequest::getDryRun() const {
  return dryRun_;
}

void DeleteEndpointGroupsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteEndpointGroupsRequest::getClientToken() const {
  return clientToken_;
}

void DeleteEndpointGroupsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DeleteEndpointGroupsRequest::getEndpointGroupIds() const {
  return endpointGroupIds_;
}

void DeleteEndpointGroupsRequest::setEndpointGroupIds(const std::vector<std::string> &endpointGroupIds) {
  endpointGroupIds_ = endpointGroupIds;
}

std::string DeleteEndpointGroupsRequest::getRegionId() const {
  return regionId_;
}

void DeleteEndpointGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

