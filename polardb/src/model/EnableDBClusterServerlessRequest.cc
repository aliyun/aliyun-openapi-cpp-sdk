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

#include <alibabacloud/polardb/model/EnableDBClusterServerlessRequest.h>

using AlibabaCloud::Polardb::Model::EnableDBClusterServerlessRequest;

EnableDBClusterServerlessRequest::EnableDBClusterServerlessRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "EnableDBClusterServerless") {
  setMethod(HttpRequest::Method::Post);
}

EnableDBClusterServerlessRequest::~EnableDBClusterServerlessRequest() {}

std::string EnableDBClusterServerlessRequest::getScaleRoNumMax() const {
  return scaleRoNumMax_;
}

void EnableDBClusterServerlessRequest::setScaleRoNumMax(const std::string &scaleRoNumMax) {
  scaleRoNumMax_ = scaleRoNumMax;
  setParameter(std::string("ScaleRoNumMax"), scaleRoNumMax);
}

long EnableDBClusterServerlessRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnableDBClusterServerlessRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnableDBClusterServerlessRequest::getScaleApRoNumMax() const {
  return scaleApRoNumMax_;
}

void EnableDBClusterServerlessRequest::setScaleApRoNumMax(const std::string &scaleApRoNumMax) {
  scaleApRoNumMax_ = scaleApRoNumMax;
  setParameter(std::string("ScaleApRoNumMax"), scaleApRoNumMax);
}

std::string EnableDBClusterServerlessRequest::getScaleMax() const {
  return scaleMax_;
}

void EnableDBClusterServerlessRequest::setScaleMax(const std::string &scaleMax) {
  scaleMax_ = scaleMax;
  setParameter(std::string("ScaleMax"), scaleMax);
}

std::string EnableDBClusterServerlessRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void EnableDBClusterServerlessRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string EnableDBClusterServerlessRequest::getScaleApRoNumMin() const {
  return scaleApRoNumMin_;
}

void EnableDBClusterServerlessRequest::setScaleApRoNumMin(const std::string &scaleApRoNumMin) {
  scaleApRoNumMin_ = scaleApRoNumMin;
  setParameter(std::string("ScaleApRoNumMin"), scaleApRoNumMin);
}

std::string EnableDBClusterServerlessRequest::getScaleMin() const {
  return scaleMin_;
}

void EnableDBClusterServerlessRequest::setScaleMin(const std::string &scaleMin) {
  scaleMin_ = scaleMin;
  setParameter(std::string("ScaleMin"), scaleMin);
}

std::string EnableDBClusterServerlessRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EnableDBClusterServerlessRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EnableDBClusterServerlessRequest::getDBClusterId() const {
  return dBClusterId_;
}

void EnableDBClusterServerlessRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string EnableDBClusterServerlessRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EnableDBClusterServerlessRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EnableDBClusterServerlessRequest::getOwnerId() const {
  return ownerId_;
}

void EnableDBClusterServerlessRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EnableDBClusterServerlessRequest::getScaleRoNumMin() const {
  return scaleRoNumMin_;
}

void EnableDBClusterServerlessRequest::setScaleRoNumMin(const std::string &scaleRoNumMin) {
  scaleRoNumMin_ = scaleRoNumMin;
  setParameter(std::string("ScaleRoNumMin"), scaleRoNumMin);
}

