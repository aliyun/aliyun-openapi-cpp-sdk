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

#include <alibabacloud/ecd/model/ConfigADConnectorUserRequest.h>

using AlibabaCloud::Ecd::Model::ConfigADConnectorUserRequest;

ConfigADConnectorUserRequest::ConfigADConnectorUserRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ConfigADConnectorUser") {
  setMethod(HttpRequest::Method::Post);
}

ConfigADConnectorUserRequest::~ConfigADConnectorUserRequest() {}

std::string ConfigADConnectorUserRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ConfigADConnectorUserRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string ConfigADConnectorUserRequest::getDomainPassword() const {
  return domainPassword_;
}

void ConfigADConnectorUserRequest::setDomainPassword(const std::string &domainPassword) {
  domainPassword_ = domainPassword;
  setParameter(std::string("DomainPassword"), domainPassword);
}

std::string ConfigADConnectorUserRequest::getDomainUserName() const {
  return domainUserName_;
}

void ConfigADConnectorUserRequest::setDomainUserName(const std::string &domainUserName) {
  domainUserName_ = domainUserName;
  setParameter(std::string("DomainUserName"), domainUserName);
}

std::string ConfigADConnectorUserRequest::getRegionId() const {
  return regionId_;
}

void ConfigADConnectorUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ConfigADConnectorUserRequest::getOUName() const {
  return oUName_;
}

void ConfigADConnectorUserRequest::setOUName(const std::string &oUName) {
  oUName_ = oUName;
  setParameter(std::string("OUName"), oUName);
}

