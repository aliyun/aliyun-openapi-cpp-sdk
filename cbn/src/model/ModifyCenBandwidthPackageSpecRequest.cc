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

#include <alibabacloud/cbn/model/ModifyCenBandwidthPackageSpecRequest.h>

using AlibabaCloud::Cbn::Model::ModifyCenBandwidthPackageSpecRequest;

ModifyCenBandwidthPackageSpecRequest::ModifyCenBandwidthPackageSpecRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ModifyCenBandwidthPackageSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCenBandwidthPackageSpecRequest::~ModifyCenBandwidthPackageSpecRequest() {}

long ModifyCenBandwidthPackageSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCenBandwidthPackageSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCenBandwidthPackageSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCenBandwidthPackageSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int ModifyCenBandwidthPackageSpecRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyCenBandwidthPackageSpecRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string ModifyCenBandwidthPackageSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCenBandwidthPackageSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyCenBandwidthPackageSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCenBandwidthPackageSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyCenBandwidthPackageSpecRequest::getVersion() const {
  return version_;
}

void ModifyCenBandwidthPackageSpecRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ModifyCenBandwidthPackageSpecRequest::getServiceType() const {
  return serviceType_;
}

void ModifyCenBandwidthPackageSpecRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string ModifyCenBandwidthPackageSpecRequest::getCenBandwidthPackageId() const {
  return cenBandwidthPackageId_;
}

void ModifyCenBandwidthPackageSpecRequest::setCenBandwidthPackageId(const std::string &cenBandwidthPackageId) {
  cenBandwidthPackageId_ = cenBandwidthPackageId;
  setParameter(std::string("CenBandwidthPackageId"), cenBandwidthPackageId);
}

