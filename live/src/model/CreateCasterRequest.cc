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

#include <alibabacloud/live/model/CreateCasterRequest.h>

using AlibabaCloud::Live::Model::CreateCasterRequest;

CreateCasterRequest::CreateCasterRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateCaster") {
  setMethod(HttpRequest::Method::Post);
}

CreateCasterRequest::~CreateCasterRequest() {}

std::string CreateCasterRequest::getClientToken() const {
  return clientToken_;
}

void CreateCasterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCasterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCasterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateCasterRequest::getRegionId() const {
  return regionId_;
}

void CreateCasterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCasterRequest::getCasterName() const {
  return casterName_;
}

void CreateCasterRequest::setCasterName(const std::string &casterName) {
  casterName_ = casterName;
  setParameter(std::string("CasterName"), casterName);
}

std::vector<CreateCasterRequest::Tag> CreateCasterRequest::getTag() const {
  return tag_;
}

void CreateCasterRequest::setTag(const std::vector<CreateCasterRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateCasterRequest::getCasterTemplate() const {
  return casterTemplate_;
}

void CreateCasterRequest::setCasterTemplate(const std::string &casterTemplate) {
  casterTemplate_ = casterTemplate;
  setParameter(std::string("CasterTemplate"), casterTemplate);
}

std::string CreateCasterRequest::getExpireTime() const {
  return expireTime_;
}

void CreateCasterRequest::setExpireTime(const std::string &expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), expireTime);
}

int CreateCasterRequest::getNormType() const {
  return normType_;
}

void CreateCasterRequest::setNormType(int normType) {
  normType_ = normType;
  setParameter(std::string("NormType"), std::to_string(normType));
}

long CreateCasterRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCasterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCasterRequest::getPurchaseTime() const {
  return purchaseTime_;
}

void CreateCasterRequest::setPurchaseTime(const std::string &purchaseTime) {
  purchaseTime_ = purchaseTime;
  setParameter(std::string("PurchaseTime"), purchaseTime);
}

int CreateCasterRequest::getMicMode() const {
  return micMode_;
}

void CreateCasterRequest::setMicMode(int micMode) {
  micMode_ = micMode;
  setParameter(std::string("MicMode"), std::to_string(micMode));
}

std::string CreateCasterRequest::getChargeType() const {
  return chargeType_;
}

void CreateCasterRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

