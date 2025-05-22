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

#include <alibabacloud/rds/model/ModifyRCInstanceRequest.h>

using AlibabaCloud::Rds::Model::ModifyRCInstanceRequest;

ModifyRCInstanceRequest::ModifyRCInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyRCInstance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRCInstanceRequest::~ModifyRCInstanceRequest() {}

bool ModifyRCInstanceRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void ModifyRCInstanceRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string ModifyRCInstanceRequest::getRebootTime() const {
  return rebootTime_;
}

void ModifyRCInstanceRequest::setRebootTime(const std::string &rebootTime) {
  rebootTime_ = rebootTime;
  setParameter(std::string("RebootTime"), rebootTime);
}

std::string ModifyRCInstanceRequest::getRegionId() const {
  return regionId_;
}

void ModifyRCInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyRCInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void ModifyRCInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string ModifyRCInstanceRequest::getDirection() const {
  return direction_;
}

void ModifyRCInstanceRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

bool ModifyRCInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyRCInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool ModifyRCInstanceRequest::getDryRun() const {
  return dryRun_;
}

void ModifyRCInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool ModifyRCInstanceRequest::getRebootWhenFinished() const {
  return rebootWhenFinished_;
}

void ModifyRCInstanceRequest::setRebootWhenFinished(bool rebootWhenFinished) {
  rebootWhenFinished_ = rebootWhenFinished;
  setParameter(std::string("RebootWhenFinished"), rebootWhenFinished ? "true" : "false");
}

std::string ModifyRCInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyRCInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyRCInstanceRequest::getPromotionCode() const {
  return promotionCode_;
}

void ModifyRCInstanceRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

