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

#include <alibabacloud/polardb/model/ModifyApplicationWhitelistRequest.h>

using AlibabaCloud::Polardb::Model::ModifyApplicationWhitelistRequest;

ModifyApplicationWhitelistRequest::ModifyApplicationWhitelistRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyApplicationWhitelist") {
  setMethod(HttpRequest::Method::Post);
}

ModifyApplicationWhitelistRequest::~ModifyApplicationWhitelistRequest() {}

std::string ModifyApplicationWhitelistRequest::getApplicationId() const {
  return applicationId_;
}

void ModifyApplicationWhitelistRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string ModifyApplicationWhitelistRequest::getSecurityIPArrayName() const {
  return securityIPArrayName_;
}

void ModifyApplicationWhitelistRequest::setSecurityIPArrayName(const std::string &securityIPArrayName) {
  securityIPArrayName_ = securityIPArrayName;
  setParameter(std::string("SecurityIPArrayName"), securityIPArrayName);
}

std::string ModifyApplicationWhitelistRequest::getModifyMode() const {
  return modifyMode_;
}

void ModifyApplicationWhitelistRequest::setModifyMode(const std::string &modifyMode) {
  modifyMode_ = modifyMode;
  setParameter(std::string("ModifyMode"), modifyMode);
}

std::string ModifyApplicationWhitelistRequest::getComponentId() const {
  return componentId_;
}

void ModifyApplicationWhitelistRequest::setComponentId(const std::string &componentId) {
  componentId_ = componentId;
  setParameter(std::string("ComponentId"), componentId);
}

std::string ModifyApplicationWhitelistRequest::getSecurityIPList() const {
  return securityIPList_;
}

void ModifyApplicationWhitelistRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string ModifyApplicationWhitelistRequest::getSecurityGroups() const {
  return securityGroups_;
}

void ModifyApplicationWhitelistRequest::setSecurityGroups(const std::string &securityGroups) {
  securityGroups_ = securityGroups;
  setParameter(std::string("SecurityGroups"), securityGroups);
}

