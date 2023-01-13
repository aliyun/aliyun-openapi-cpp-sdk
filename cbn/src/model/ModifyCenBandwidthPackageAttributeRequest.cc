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

#include <alibabacloud/cbn/model/ModifyCenBandwidthPackageAttributeRequest.h>

using AlibabaCloud::Cbn::Model::ModifyCenBandwidthPackageAttributeRequest;

ModifyCenBandwidthPackageAttributeRequest::ModifyCenBandwidthPackageAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ModifyCenBandwidthPackageAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCenBandwidthPackageAttributeRequest::~ModifyCenBandwidthPackageAttributeRequest() {}

long ModifyCenBandwidthPackageAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCenBandwidthPackageAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCenBandwidthPackageAttributeRequest::getDescription() const {
  return description_;
}

void ModifyCenBandwidthPackageAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyCenBandwidthPackageAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCenBandwidthPackageAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCenBandwidthPackageAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCenBandwidthPackageAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyCenBandwidthPackageAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCenBandwidthPackageAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyCenBandwidthPackageAttributeRequest::getVersion() const {
  return version_;
}

void ModifyCenBandwidthPackageAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ModifyCenBandwidthPackageAttributeRequest::getCenBandwidthPackageId() const {
  return cenBandwidthPackageId_;
}

void ModifyCenBandwidthPackageAttributeRequest::setCenBandwidthPackageId(const std::string &cenBandwidthPackageId) {
  cenBandwidthPackageId_ = cenBandwidthPackageId;
  setParameter(std::string("CenBandwidthPackageId"), cenBandwidthPackageId);
}

std::string ModifyCenBandwidthPackageAttributeRequest::getName() const {
  return name_;
}

void ModifyCenBandwidthPackageAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

