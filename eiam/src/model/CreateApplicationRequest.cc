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

#include <alibabacloud/eiam/model/CreateApplicationRequest.h>

using AlibabaCloud::Eiam::Model::CreateApplicationRequest;

CreateApplicationRequest::CreateApplicationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateApplication") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationRequest::~CreateApplicationRequest() {}

std::string CreateApplicationRequest::getDescription() const {
  return description_;
}

void CreateApplicationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateApplicationRequest::getApplicationSourceType() const {
  return applicationSourceType_;
}

void CreateApplicationRequest::setApplicationSourceType(const std::string &applicationSourceType) {
  applicationSourceType_ = applicationSourceType;
  setParameter(std::string("ApplicationSourceType"), applicationSourceType);
}

std::string CreateApplicationRequest::getLogoUrl() const {
  return logoUrl_;
}

void CreateApplicationRequest::setLogoUrl(const std::string &logoUrl) {
  logoUrl_ = logoUrl;
  setParameter(std::string("LogoUrl"), logoUrl);
}

std::string CreateApplicationRequest::getApplicationName() const {
  return applicationName_;
}

void CreateApplicationRequest::setApplicationName(const std::string &applicationName) {
  applicationName_ = applicationName;
  setParameter(std::string("ApplicationName"), applicationName);
}

std::string CreateApplicationRequest::getInstanceId() const {
  return instanceId_;
}

void CreateApplicationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateApplicationRequest::getSsoType() const {
  return ssoType_;
}

void CreateApplicationRequest::setSsoType(const std::string &ssoType) {
  ssoType_ = ssoType;
  setParameter(std::string("SsoType"), ssoType);
}

std::string CreateApplicationRequest::getApplicationTemplateId() const {
  return applicationTemplateId_;
}

void CreateApplicationRequest::setApplicationTemplateId(const std::string &applicationTemplateId) {
  applicationTemplateId_ = applicationTemplateId;
  setParameter(std::string("ApplicationTemplateId"), applicationTemplateId);
}

