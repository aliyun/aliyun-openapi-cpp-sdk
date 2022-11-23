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

#include <alibabacloud/dms-enterprise/model/CreateLakeHouseSpaceRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateLakeHouseSpaceRequest;

CreateLakeHouseSpaceRequest::CreateLakeHouseSpaceRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateLakeHouseSpace") {
  setMethod(HttpRequest::Method::Post);
}

CreateLakeHouseSpaceRequest::~CreateLakeHouseSpaceRequest() {}

std::string CreateLakeHouseSpaceRequest::getDescription() const {
  return description_;
}

void CreateLakeHouseSpaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateLakeHouseSpaceRequest::getTid() const {
  return tid_;
}

void CreateLakeHouseSpaceRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreateLakeHouseSpaceRequest::getMode() const {
  return mode_;
}

void CreateLakeHouseSpaceRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string CreateLakeHouseSpaceRequest::getProdDbId() const {
  return prodDbId_;
}

void CreateLakeHouseSpaceRequest::setProdDbId(const std::string &prodDbId) {
  prodDbId_ = prodDbId;
  setParameter(std::string("ProdDbId"), prodDbId);
}

std::string CreateLakeHouseSpaceRequest::getDevDbId() const {
  return devDbId_;
}

void CreateLakeHouseSpaceRequest::setDevDbId(const std::string &devDbId) {
  devDbId_ = devDbId;
  setParameter(std::string("DevDbId"), devDbId);
}

std::string CreateLakeHouseSpaceRequest::getSpaceName() const {
  return spaceName_;
}

void CreateLakeHouseSpaceRequest::setSpaceName(const std::string &spaceName) {
  spaceName_ = spaceName;
  setParameter(std::string("SpaceName"), spaceName);
}

std::string CreateLakeHouseSpaceRequest::getDwDbType() const {
  return dwDbType_;
}

void CreateLakeHouseSpaceRequest::setDwDbType(const std::string &dwDbType) {
  dwDbType_ = dwDbType;
  setParameter(std::string("DwDbType"), dwDbType);
}

std::string CreateLakeHouseSpaceRequest::getSpaceConfig() const {
  return spaceConfig_;
}

void CreateLakeHouseSpaceRequest::setSpaceConfig(const std::string &spaceConfig) {
  spaceConfig_ = spaceConfig;
  setParameter(std::string("SpaceConfig"), spaceConfig);
}

