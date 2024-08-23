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

#include <alibabacloud/ens/model/CreateStorageVolumeRequest.h>

using AlibabaCloud::Ens::Model::CreateStorageVolumeRequest;

CreateStorageVolumeRequest::CreateStorageVolumeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateStorageVolume") {
  setMethod(HttpRequest::Method::Post);
}

CreateStorageVolumeRequest::~CreateStorageVolumeRequest() {}

std::string CreateStorageVolumeRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateStorageVolumeRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CreateStorageVolumeRequest::getGatewayId() const {
  return gatewayId_;
}

void CreateStorageVolumeRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), gatewayId);
}

std::string CreateStorageVolumeRequest::getAuthUser() const {
  return authUser_;
}

void CreateStorageVolumeRequest::setAuthUser(const std::string &authUser) {
  authUser_ = authUser;
  setParameter(std::string("AuthUser"), authUser);
}

std::string CreateStorageVolumeRequest::getVolumeName() const {
  return volumeName_;
}

void CreateStorageVolumeRequest::setVolumeName(const std::string &volumeName) {
  volumeName_ = volumeName;
  setParameter(std::string("VolumeName"), volumeName);
}

std::string CreateStorageVolumeRequest::getAuthPassword() const {
  return authPassword_;
}

void CreateStorageVolumeRequest::setAuthPassword(const std::string &authPassword) {
  authPassword_ = authPassword;
  setParameter(std::string("AuthPassword"), authPassword);
}

std::string CreateStorageVolumeRequest::getAuthProtocol() const {
  return authProtocol_;
}

void CreateStorageVolumeRequest::setAuthProtocol(const std::string &authProtocol) {
  authProtocol_ = authProtocol;
  setParameter(std::string("AuthProtocol"), authProtocol);
}

std::string CreateStorageVolumeRequest::getDescription() const {
  return description_;
}

void CreateStorageVolumeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateStorageVolumeRequest::getIsEnable() const {
  return isEnable_;
}

void CreateStorageVolumeRequest::setIsEnable(const std::string &isEnable) {
  isEnable_ = isEnable;
  setParameter(std::string("IsEnable"), isEnable);
}

std::string CreateStorageVolumeRequest::getIsAuth() const {
  return isAuth_;
}

void CreateStorageVolumeRequest::setIsAuth(const std::string &isAuth) {
  isAuth_ = isAuth;
  setParameter(std::string("IsAuth"), isAuth);
}

std::string CreateStorageVolumeRequest::getStorageId() const {
  return storageId_;
}

void CreateStorageVolumeRequest::setStorageId(const std::string &storageId) {
  storageId_ = storageId;
  setParameter(std::string("StorageId"), storageId);
}

