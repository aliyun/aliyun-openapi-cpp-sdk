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

#include <alibabacloud/cbn/model/AttachCenChildInstanceRequest.h>

using AlibabaCloud::Cbn::Model::AttachCenChildInstanceRequest;

AttachCenChildInstanceRequest::AttachCenChildInstanceRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "AttachCenChildInstance") {
  setMethod(HttpRequest::Method::Post);
}

AttachCenChildInstanceRequest::~AttachCenChildInstanceRequest() {}

long AttachCenChildInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AttachCenChildInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AttachCenChildInstanceRequest::getCenId() const {
  return cenId_;
}

void AttachCenChildInstanceRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string AttachCenChildInstanceRequest::getChildInstanceRegionId() const {
  return childInstanceRegionId_;
}

void AttachCenChildInstanceRequest::setChildInstanceRegionId(const std::string &childInstanceRegionId) {
  childInstanceRegionId_ = childInstanceRegionId;
  setParameter(std::string("ChildInstanceRegionId"), childInstanceRegionId);
}

std::string AttachCenChildInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AttachCenChildInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AttachCenChildInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AttachCenChildInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AttachCenChildInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void AttachCenChildInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AttachCenChildInstanceRequest::getChildInstanceType() const {
  return childInstanceType_;
}

void AttachCenChildInstanceRequest::setChildInstanceType(const std::string &childInstanceType) {
  childInstanceType_ = childInstanceType;
  setParameter(std::string("ChildInstanceType"), childInstanceType);
}

std::string AttachCenChildInstanceRequest::getVersion() const {
  return version_;
}

void AttachCenChildInstanceRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

long AttachCenChildInstanceRequest::getChildInstanceOwnerId() const {
  return childInstanceOwnerId_;
}

void AttachCenChildInstanceRequest::setChildInstanceOwnerId(long childInstanceOwnerId) {
  childInstanceOwnerId_ = childInstanceOwnerId;
  setParameter(std::string("ChildInstanceOwnerId"), std::to_string(childInstanceOwnerId));
}

std::string AttachCenChildInstanceRequest::getChildInstanceId() const {
  return childInstanceId_;
}

void AttachCenChildInstanceRequest::setChildInstanceId(const std::string &childInstanceId) {
  childInstanceId_ = childInstanceId;
  setParameter(std::string("ChildInstanceId"), childInstanceId);
}

