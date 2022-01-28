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

#include <alibabacloud/ens/model/ModifyInstanceAutoRenewAttributeRequest.h>

using AlibabaCloud::Ens::Model::ModifyInstanceAutoRenewAttributeRequest;

ModifyInstanceAutoRenewAttributeRequest::ModifyInstanceAutoRenewAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyInstanceAutoRenewAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAutoRenewAttributeRequest::~ModifyInstanceAutoRenewAttributeRequest() {}

std::string ModifyInstanceAutoRenewAttributeRequest::getDuration() const {
  return duration_;
}

void ModifyInstanceAutoRenewAttributeRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getRenewalStatus() const {
  return renewalStatus_;
}

void ModifyInstanceAutoRenewAttributeRequest::setRenewalStatus(const std::string &renewalStatus) {
  renewalStatus_ = renewalStatus;
  setParameter(std::string("RenewalStatus"), renewalStatus);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceAutoRenewAttributeRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getAutoRenew() const {
  return autoRenew_;
}

void ModifyInstanceAutoRenewAttributeRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getInstanceIds() const {
  return instanceIds_;
}

void ModifyInstanceAutoRenewAttributeRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

