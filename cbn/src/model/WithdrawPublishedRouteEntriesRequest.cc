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

#include <alibabacloud/cbn/model/WithdrawPublishedRouteEntriesRequest.h>

using AlibabaCloud::Cbn::Model::WithdrawPublishedRouteEntriesRequest;

WithdrawPublishedRouteEntriesRequest::WithdrawPublishedRouteEntriesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "WithdrawPublishedRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

WithdrawPublishedRouteEntriesRequest::~WithdrawPublishedRouteEntriesRequest() {}

long WithdrawPublishedRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void WithdrawPublishedRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string WithdrawPublishedRouteEntriesRequest::getCenId() const {
  return cenId_;
}

void WithdrawPublishedRouteEntriesRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string WithdrawPublishedRouteEntriesRequest::getChildInstanceRegionId() const {
  return childInstanceRegionId_;
}

void WithdrawPublishedRouteEntriesRequest::setChildInstanceRegionId(const std::string &childInstanceRegionId) {
  childInstanceRegionId_ = childInstanceRegionId;
  setParameter(std::string("ChildInstanceRegionId"), childInstanceRegionId);
}

std::string WithdrawPublishedRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void WithdrawPublishedRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string WithdrawPublishedRouteEntriesRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void WithdrawPublishedRouteEntriesRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string WithdrawPublishedRouteEntriesRequest::getChildInstanceType() const {
  return childInstanceType_;
}

void WithdrawPublishedRouteEntriesRequest::setChildInstanceType(const std::string &childInstanceType) {
  childInstanceType_ = childInstanceType;
  setParameter(std::string("ChildInstanceType"), childInstanceType);
}

std::string WithdrawPublishedRouteEntriesRequest::getVersion() const {
  return version_;
}

void WithdrawPublishedRouteEntriesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string WithdrawPublishedRouteEntriesRequest::getChildInstanceId() const {
  return childInstanceId_;
}

void WithdrawPublishedRouteEntriesRequest::setChildInstanceId(const std::string &childInstanceId) {
  childInstanceId_ = childInstanceId;
  setParameter(std::string("ChildInstanceId"), childInstanceId);
}

std::string WithdrawPublishedRouteEntriesRequest::getChildInstanceRouteTableId() const {
  return childInstanceRouteTableId_;
}

void WithdrawPublishedRouteEntriesRequest::setChildInstanceRouteTableId(const std::string &childInstanceRouteTableId) {
  childInstanceRouteTableId_ = childInstanceRouteTableId;
  setParameter(std::string("ChildInstanceRouteTableId"), childInstanceRouteTableId);
}

