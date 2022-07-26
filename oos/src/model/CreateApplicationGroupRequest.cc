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

#include <alibabacloud/oos/model/CreateApplicationGroupRequest.h>

using AlibabaCloud::Oos::Model::CreateApplicationGroupRequest;

CreateApplicationGroupRequest::CreateApplicationGroupRequest()
    : RpcServiceRequest("oos", "2019-06-01", "CreateApplicationGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationGroupRequest::~CreateApplicationGroupRequest() {}

std::string CreateApplicationGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateApplicationGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateApplicationGroupRequest::getDescription() const {
  return description_;
}

void CreateApplicationGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateApplicationGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateApplicationGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateApplicationGroupRequest::getCmsGroupId() const {
  return cmsGroupId_;
}

void CreateApplicationGroupRequest::setCmsGroupId(const std::string &cmsGroupId) {
  cmsGroupId_ = cmsGroupId;
  setParameter(std::string("CmsGroupId"), cmsGroupId);
}

std::string CreateApplicationGroupRequest::getDeployRegionId() const {
  return deployRegionId_;
}

void CreateApplicationGroupRequest::setDeployRegionId(const std::string &deployRegionId) {
  deployRegionId_ = deployRegionId;
  setParameter(std::string("DeployRegionId"), deployRegionId);
}

std::string CreateApplicationGroupRequest::getApplicationName() const {
  return applicationName_;
}

void CreateApplicationGroupRequest::setApplicationName(const std::string &applicationName) {
  applicationName_ = applicationName;
  setParameter(std::string("ApplicationName"), applicationName);
}

std::string CreateApplicationGroupRequest::getImportTagValue() const {
  return importTagValue_;
}

void CreateApplicationGroupRequest::setImportTagValue(const std::string &importTagValue) {
  importTagValue_ = importTagValue;
  setParameter(std::string("ImportTagValue"), importTagValue);
}

std::string CreateApplicationGroupRequest::getImportTagKey() const {
  return importTagKey_;
}

void CreateApplicationGroupRequest::setImportTagKey(const std::string &importTagKey) {
  importTagKey_ = importTagKey;
  setParameter(std::string("ImportTagKey"), importTagKey);
}

std::string CreateApplicationGroupRequest::getName() const {
  return name_;
}

void CreateApplicationGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

