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

#include <alibabacloud/oos/model/SetServiceSettingsRequest.h>

using AlibabaCloud::Oos::Model::SetServiceSettingsRequest;

SetServiceSettingsRequest::SetServiceSettingsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "SetServiceSettings") {
  setMethod(HttpRequest::Method::Post);
}

SetServiceSettingsRequest::~SetServiceSettingsRequest() {}

bool SetServiceSettingsRequest::getDeliverySlsEnabled() const {
  return deliverySlsEnabled_;
}

void SetServiceSettingsRequest::setDeliverySlsEnabled(bool deliverySlsEnabled) {
  deliverySlsEnabled_ = deliverySlsEnabled;
  setParameter(std::string("DeliverySlsEnabled"), deliverySlsEnabled ? "true" : "false");
}

std::string SetServiceSettingsRequest::getRdcEnterpriseId() const {
  return rdcEnterpriseId_;
}

void SetServiceSettingsRequest::setRdcEnterpriseId(const std::string &rdcEnterpriseId) {
  rdcEnterpriseId_ = rdcEnterpriseId;
  setParameter(std::string("RdcEnterpriseId"), rdcEnterpriseId);
}

std::string SetServiceSettingsRequest::getDeliveryOssKeyPrefix() const {
  return deliveryOssKeyPrefix_;
}

void SetServiceSettingsRequest::setDeliveryOssKeyPrefix(const std::string &deliveryOssKeyPrefix) {
  deliveryOssKeyPrefix_ = deliveryOssKeyPrefix;
  setParameter(std::string("DeliveryOssKeyPrefix"), deliveryOssKeyPrefix);
}

bool SetServiceSettingsRequest::getDeliveryOssEnabled() const {
  return deliveryOssEnabled_;
}

void SetServiceSettingsRequest::setDeliveryOssEnabled(bool deliveryOssEnabled) {
  deliveryOssEnabled_ = deliveryOssEnabled;
  setParameter(std::string("DeliveryOssEnabled"), deliveryOssEnabled ? "true" : "false");
}

std::string SetServiceSettingsRequest::getRegionId() const {
  return regionId_;
}

void SetServiceSettingsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetServiceSettingsRequest::getDeliverySlsProjectName() const {
  return deliverySlsProjectName_;
}

void SetServiceSettingsRequest::setDeliverySlsProjectName(const std::string &deliverySlsProjectName) {
  deliverySlsProjectName_ = deliverySlsProjectName;
  setParameter(std::string("DeliverySlsProjectName"), deliverySlsProjectName);
}

std::string SetServiceSettingsRequest::getDeliveryOssBucketName() const {
  return deliveryOssBucketName_;
}

void SetServiceSettingsRequest::setDeliveryOssBucketName(const std::string &deliveryOssBucketName) {
  deliveryOssBucketName_ = deliveryOssBucketName;
  setParameter(std::string("DeliveryOssBucketName"), deliveryOssBucketName);
}

