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

#include <alibabacloud/vpc/model/ConvertBandwidthPackageRequest.h>

using AlibabaCloud::Vpc::Model::ConvertBandwidthPackageRequest;

ConvertBandwidthPackageRequest::ConvertBandwidthPackageRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ConvertBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

ConvertBandwidthPackageRequest::~ConvertBandwidthPackageRequest() {}

long ConvertBandwidthPackageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ConvertBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ConvertBandwidthPackageRequest::getClientToken() const {
  return clientToken_;
}

void ConvertBandwidthPackageRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ConvertBandwidthPackageRequest::getRegionId() const {
  return regionId_;
}

void ConvertBandwidthPackageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ConvertBandwidthPackageRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void ConvertBandwidthPackageRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string ConvertBandwidthPackageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ConvertBandwidthPackageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ConvertBandwidthPackageRequest::getOwnerId() const {
  return ownerId_;
}

void ConvertBandwidthPackageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

