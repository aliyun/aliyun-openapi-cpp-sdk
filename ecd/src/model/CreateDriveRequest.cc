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

#include <alibabacloud/ecd/model/CreateDriveRequest.h>

using AlibabaCloud::Ecd::Model::CreateDriveRequest;

CreateDriveRequest::CreateDriveRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateDrive") {
  setMethod(HttpRequest::Method::Post);
}

CreateDriveRequest::~CreateDriveRequest() {}

bool CreateDriveRequest::getProfileRoaming() const {
  return profileRoaming_;
}

void CreateDriveRequest::setProfileRoaming(bool profileRoaming) {
  profileRoaming_ = profileRoaming;
  setParameter(std::string("ProfileRoaming"), profileRoaming ? "true" : "false");
}

std::string CreateDriveRequest::getDescription() const {
  return description_;
}

void CreateDriveRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateDriveRequest::getType() const {
  return type_;
}

void CreateDriveRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateDriveRequest::getUserId() const {
  return userId_;
}

void CreateDriveRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateDriveRequest::getDomainId() const {
  return domainId_;
}

void CreateDriveRequest::setDomainId(const std::string &domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), domainId);
}

std::string CreateDriveRequest::getRegionId() const {
  return regionId_;
}

void CreateDriveRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDriveRequest::getExternalDomainId() const {
  return externalDomainId_;
}

void CreateDriveRequest::setExternalDomainId(const std::string &externalDomainId) {
  externalDomainId_ = externalDomainId;
  setParameter(std::string("ExternalDomainId"), externalDomainId);
}

long CreateDriveRequest::getUsedSize() const {
  return usedSize_;
}

void CreateDriveRequest::setUsedSize(long usedSize) {
  usedSize_ = usedSize;
  setParameter(std::string("UsedSize"), std::to_string(usedSize));
}

long CreateDriveRequest::getAliUid() const {
  return aliUid_;
}

void CreateDriveRequest::setAliUid(long aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), std::to_string(aliUid));
}

std::string CreateDriveRequest::getDriveName() const {
  return driveName_;
}

void CreateDriveRequest::setDriveName(const std::string &driveName) {
  driveName_ = driveName;
  setParameter(std::string("DriveName"), driveName);
}

long CreateDriveRequest::getTotalSize() const {
  return totalSize_;
}

void CreateDriveRequest::setTotalSize(long totalSize) {
  totalSize_ = totalSize;
  setParameter(std::string("TotalSize"), std::to_string(totalSize));
}

std::string CreateDriveRequest::getResourceType() const {
  return resourceType_;
}

void CreateDriveRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

