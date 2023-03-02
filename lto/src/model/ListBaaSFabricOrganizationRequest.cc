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

#include <alibabacloud/lto/model/ListBaaSFabricOrganizationRequest.h>

using AlibabaCloud::Lto::Model::ListBaaSFabricOrganizationRequest;

ListBaaSFabricOrganizationRequest::ListBaaSFabricOrganizationRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListBaaSFabricOrganization") {
  setMethod(HttpRequest::Method::Post);
}

ListBaaSFabricOrganizationRequest::~ListBaaSFabricOrganizationRequest() {}

std::string ListBaaSFabricOrganizationRequest::getRegionId() const {
  return regionId_;
}

void ListBaaSFabricOrganizationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListBaaSFabricOrganizationRequest::getBaaSFabricChannelId() const {
  return baaSFabricChannelId_;
}

void ListBaaSFabricOrganizationRequest::setBaaSFabricChannelId(const std::string &baaSFabricChannelId) {
  baaSFabricChannelId_ = baaSFabricChannelId;
  setParameter(std::string("BaaSFabricChannelId"), baaSFabricChannelId);
}

