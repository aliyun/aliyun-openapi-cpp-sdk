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

#include <alibabacloud/vpc/model/DeleteIpsecServerRequest.h>

using AlibabaCloud::Vpc::Model::DeleteIpsecServerRequest;

DeleteIpsecServerRequest::DeleteIpsecServerRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteIpsecServer") {
  setMethod(HttpRequest::Method::Post);
}

DeleteIpsecServerRequest::~DeleteIpsecServerRequest() {}

long DeleteIpsecServerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteIpsecServerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteIpsecServerRequest::getDryRun() const {
  return dryRun_;
}

void DeleteIpsecServerRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string DeleteIpsecServerRequest::getClientToken() const {
  return clientToken_;
}

void DeleteIpsecServerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteIpsecServerRequest::getCallerBid() const {
  return callerBid_;
}

void DeleteIpsecServerRequest::setCallerBid(const std::string &callerBid) {
  callerBid_ = callerBid;
  setParameter(std::string("callerBid"), callerBid);
}

std::string DeleteIpsecServerRequest::getRegionId() const {
  return regionId_;
}

void DeleteIpsecServerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteIpsecServerRequest::getIpsecServerId() const {
  return ipsecServerId_;
}

void DeleteIpsecServerRequest::setIpsecServerId(const std::string &ipsecServerId) {
  ipsecServerId_ = ipsecServerId;
  setParameter(std::string("IpsecServerId"), ipsecServerId);
}

