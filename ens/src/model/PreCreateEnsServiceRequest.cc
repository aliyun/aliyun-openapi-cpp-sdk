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

#include <alibabacloud/ens/model/PreCreateEnsServiceRequest.h>

using AlibabaCloud::Ens::Model::PreCreateEnsServiceRequest;

PreCreateEnsServiceRequest::PreCreateEnsServiceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "PreCreateEnsService") {
  setMethod(HttpRequest::Method::Post);
}

PreCreateEnsServiceRequest::~PreCreateEnsServiceRequest() {}

std::string PreCreateEnsServiceRequest::getBandwidthType() const {
  return bandwidthType_;
}

void PreCreateEnsServiceRequest::setBandwidthType(const std::string &bandwidthType) {
  bandwidthType_ = bandwidthType;
  setParameter(std::string("BandwidthType"), bandwidthType);
}

std::string PreCreateEnsServiceRequest::getKeyPairName() const {
  return keyPairName_;
}

void PreCreateEnsServiceRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string PreCreateEnsServiceRequest::getPassword() const {
  return password_;
}

void PreCreateEnsServiceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string PreCreateEnsServiceRequest::getBuyResourcesDetail() const {
  return buyResourcesDetail_;
}

void PreCreateEnsServiceRequest::setBuyResourcesDetail(const std::string &buyResourcesDetail) {
  buyResourcesDetail_ = buyResourcesDetail;
  setParameter(std::string("BuyResourcesDetail"), buyResourcesDetail);
}

std::string PreCreateEnsServiceRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void PreCreateEnsServiceRequest::setSystemDiskSize(const std::string &systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDiskSize"), systemDiskSize);
}

std::string PreCreateEnsServiceRequest::getInstanceBandwithdLimit() const {
  return instanceBandwithdLimit_;
}

void PreCreateEnsServiceRequest::setInstanceBandwithdLimit(const std::string &instanceBandwithdLimit) {
  instanceBandwithdLimit_ = instanceBandwithdLimit;
  setParameter(std::string("InstanceBandwithdLimit"), instanceBandwithdLimit);
}

std::string PreCreateEnsServiceRequest::getEnsServiceName() const {
  return ensServiceName_;
}

void PreCreateEnsServiceRequest::setEnsServiceName(const std::string &ensServiceName) {
  ensServiceName_ = ensServiceName;
  setParameter(std::string("EnsServiceName"), ensServiceName);
}

std::string PreCreateEnsServiceRequest::getNetLevel() const {
  return netLevel_;
}

void PreCreateEnsServiceRequest::setNetLevel(const std::string &netLevel) {
  netLevel_ = netLevel;
  setParameter(std::string("NetLevel"), netLevel);
}

std::string PreCreateEnsServiceRequest::getDataDiskSize() const {
  return dataDiskSize_;
}

void PreCreateEnsServiceRequest::setDataDiskSize(const std::string &dataDiskSize) {
  dataDiskSize_ = dataDiskSize;
  setParameter(std::string("DataDiskSize"), dataDiskSize);
}

std::string PreCreateEnsServiceRequest::getSchedulingPriceStrategy() const {
  return schedulingPriceStrategy_;
}

void PreCreateEnsServiceRequest::setSchedulingPriceStrategy(const std::string &schedulingPriceStrategy) {
  schedulingPriceStrategy_ = schedulingPriceStrategy;
  setParameter(std::string("SchedulingPriceStrategy"), schedulingPriceStrategy);
}

std::string PreCreateEnsServiceRequest::getImageId() const {
  return imageId_;
}

void PreCreateEnsServiceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string PreCreateEnsServiceRequest::getInstanceSpec() const {
  return instanceSpec_;
}

void PreCreateEnsServiceRequest::setInstanceSpec(const std::string &instanceSpec) {
  instanceSpec_ = instanceSpec;
  setParameter(std::string("InstanceSpec"), instanceSpec);
}

std::string PreCreateEnsServiceRequest::getUserData() const {
  return userData_;
}

void PreCreateEnsServiceRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string PreCreateEnsServiceRequest::getSchedulingStrategy() const {
  return schedulingStrategy_;
}

void PreCreateEnsServiceRequest::setSchedulingStrategy(const std::string &schedulingStrategy) {
  schedulingStrategy_ = schedulingStrategy;
  setParameter(std::string("SchedulingStrategy"), schedulingStrategy);
}

