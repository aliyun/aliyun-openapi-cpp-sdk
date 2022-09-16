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

#include <alibabacloud/ecd/model/SetIdpMetadataRequest.h>

using AlibabaCloud::Ecd::Model::SetIdpMetadataRequest;

SetIdpMetadataRequest::SetIdpMetadataRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "SetIdpMetadata") {
  setMethod(HttpRequest::Method::Post);
}

SetIdpMetadataRequest::~SetIdpMetadataRequest() {}

std::string SetIdpMetadataRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void SetIdpMetadataRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string SetIdpMetadataRequest::getRegionId() const {
  return regionId_;
}

void SetIdpMetadataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetIdpMetadataRequest::getDirectoryId() const {
  return directoryId_;
}

void SetIdpMetadataRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::string SetIdpMetadataRequest::getIdpMetadata() const {
  return idpMetadata_;
}

void SetIdpMetadataRequest::setIdpMetadata(const std::string &idpMetadata) {
  idpMetadata_ = idpMetadata;
  setParameter(std::string("IdpMetadata"), idpMetadata);
}

