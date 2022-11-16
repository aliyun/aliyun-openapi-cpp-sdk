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

#include <alibabacloud/cloudapi/model/ModifyInstanceSpecRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyInstanceSpecRequest;

ModifyInstanceSpecRequest::ModifyInstanceSpecRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyInstanceSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceSpecRequest::~ModifyInstanceSpecRequest() {}

bool ModifyInstanceSpecRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyInstanceSpecRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool ModifyInstanceSpecRequest::getSkipWaitSwitch() const {
  return skipWaitSwitch_;
}

void ModifyInstanceSpecRequest::setSkipWaitSwitch(bool skipWaitSwitch) {
  skipWaitSwitch_ = skipWaitSwitch;
  setParameter(std::string("SkipWaitSwitch"), skipWaitSwitch ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getInstanceSpec() const {
  return instanceSpec_;
}

void ModifyInstanceSpecRequest::setInstanceSpec(const std::string &instanceSpec) {
  instanceSpec_ = instanceSpec;
  setParameter(std::string("InstanceSpec"), instanceSpec);
}

std::string ModifyInstanceSpecRequest::getToken() const {
  return token_;
}

void ModifyInstanceSpecRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::string ModifyInstanceSpecRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceSpecRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceSpecRequest::getModifyAction() const {
  return modifyAction_;
}

void ModifyInstanceSpecRequest::setModifyAction(const std::string &modifyAction) {
  modifyAction_ = modifyAction;
  setParameter(std::string("ModifyAction"), modifyAction);
}

