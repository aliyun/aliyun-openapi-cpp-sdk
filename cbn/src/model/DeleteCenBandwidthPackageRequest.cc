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

#include <alibabacloud/cbn/model/DeleteCenBandwidthPackageRequest.h>

using AlibabaCloud::Cbn::Model::DeleteCenBandwidthPackageRequest;

DeleteCenBandwidthPackageRequest::DeleteCenBandwidthPackageRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteCenBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCenBandwidthPackageRequest::~DeleteCenBandwidthPackageRequest() {}

long DeleteCenBandwidthPackageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCenBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCenBandwidthPackageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteCenBandwidthPackageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteCenBandwidthPackageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCenBandwidthPackageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteCenBandwidthPackageRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCenBandwidthPackageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteCenBandwidthPackageRequest::getVersion() const {
  return version_;
}

void DeleteCenBandwidthPackageRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteCenBandwidthPackageRequest::getCenBandwidthPackageId() const {
  return cenBandwidthPackageId_;
}

void DeleteCenBandwidthPackageRequest::setCenBandwidthPackageId(const std::string &cenBandwidthPackageId) {
  cenBandwidthPackageId_ = cenBandwidthPackageId;
  setParameter(std::string("CenBandwidthPackageId"), cenBandwidthPackageId);
}

