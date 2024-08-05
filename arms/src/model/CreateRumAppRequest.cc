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

#include <alibabacloud/arms/model/CreateRumAppRequest.h>

using AlibabaCloud::ARMS::Model::CreateRumAppRequest;

CreateRumAppRequest::CreateRumAppRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateRumApp") {
  setMethod(HttpRequest::Method::Post);
}

CreateRumAppRequest::~CreateRumAppRequest() {}

std::string CreateRumAppRequest::getPackageName() const {
  return packageName_;
}

void CreateRumAppRequest::setPackageName(const std::string &packageName) {
  packageName_ = packageName;
  setParameter(std::string("PackageName"), packageName);
}

std::string CreateRumAppRequest::getDescription() const {
  return description_;
}

void CreateRumAppRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateRumAppRequest::getSource() const {
  return source_;
}

void CreateRumAppRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateRumAppRequest::getSiteType() const {
  return siteType_;
}

void CreateRumAppRequest::setSiteType(const std::string &siteType) {
  siteType_ = siteType;
  setParameter(std::string("SiteType"), siteType);
}

std::string CreateRumAppRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateRumAppRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateRumAppRequest::getAppName() const {
  return appName_;
}

void CreateRumAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateRumAppRequest::getAppGroup() const {
  return appGroup_;
}

void CreateRumAppRequest::setAppGroup(const std::string &appGroup) {
  appGroup_ = appGroup;
  setParameter(std::string("AppGroup"), appGroup);
}

std::string CreateRumAppRequest::getRegionId() const {
  return regionId_;
}

void CreateRumAppRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateRumAppRequest::getNickName() const {
  return nickName_;
}

void CreateRumAppRequest::setNickName(const std::string &nickName) {
  nickName_ = nickName;
  setParameter(std::string("NickName"), nickName);
}

std::vector<CreateRumAppRequest::Tag> CreateRumAppRequest::getTag() const {
  return tag_;
}

void CreateRumAppRequest::setTag(const std::vector<CreateRumAppRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

