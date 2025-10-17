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

#include <alibabacloud/polardb/model/CreateGlobalDataNetworkRequest.h>

using AlibabaCloud::Polardb::Model::CreateGlobalDataNetworkRequest;

CreateGlobalDataNetworkRequest::CreateGlobalDataNetworkRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateGlobalDataNetwork") {
  setMethod(HttpRequest::Method::Post);
}

CreateGlobalDataNetworkRequest::~CreateGlobalDataNetworkRequest() {}

std::string CreateGlobalDataNetworkRequest::getDestinationType() const {
  return destinationType_;
}

void CreateGlobalDataNetworkRequest::setDestinationType(const std::string &destinationType) {
  destinationType_ = destinationType;
  setParameter(std::string("DestinationType"), destinationType);
}

std::string CreateGlobalDataNetworkRequest::getDescription() const {
  return description_;
}

void CreateGlobalDataNetworkRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateGlobalDataNetworkRequest::getSourceType() const {
  return sourceType_;
}

void CreateGlobalDataNetworkRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string CreateGlobalDataNetworkRequest::getFreezeSourceDuringSync() const {
  return freezeSourceDuringSync_;
}

void CreateGlobalDataNetworkRequest::setFreezeSourceDuringSync(const std::string &freezeSourceDuringSync) {
  freezeSourceDuringSync_ = freezeSourceDuringSync;
  setParameter(std::string("FreezeSourceDuringSync"), freezeSourceDuringSync);
}

std::string CreateGlobalDataNetworkRequest::getSourceId() const {
  return sourceId_;
}

void CreateGlobalDataNetworkRequest::setSourceId(const std::string &sourceId) {
  sourceId_ = sourceId;
  setParameter(std::string("SourceId"), sourceId);
}

std::string CreateGlobalDataNetworkRequest::getDestinationRegion() const {
  return destinationRegion_;
}

void CreateGlobalDataNetworkRequest::setDestinationRegion(const std::string &destinationRegion) {
  destinationRegion_ = destinationRegion;
  setParameter(std::string("DestinationRegion"), destinationRegion);
}

std::string CreateGlobalDataNetworkRequest::getDestinationId() const {
  return destinationId_;
}

void CreateGlobalDataNetworkRequest::setDestinationId(const std::string &destinationId) {
  destinationId_ = destinationId;
  setParameter(std::string("DestinationId"), destinationId);
}

std::string CreateGlobalDataNetworkRequest::getSourceFileSystemPath() const {
  return sourceFileSystemPath_;
}

void CreateGlobalDataNetworkRequest::setSourceFileSystemPath(const std::string &sourceFileSystemPath) {
  sourceFileSystemPath_ = sourceFileSystemPath;
  setParameter(std::string("SourceFileSystemPath"), sourceFileSystemPath);
}

std::string CreateGlobalDataNetworkRequest::getDestinationFileSystemPath() const {
  return destinationFileSystemPath_;
}

void CreateGlobalDataNetworkRequest::setDestinationFileSystemPath(const std::string &destinationFileSystemPath) {
  destinationFileSystemPath_ = destinationFileSystemPath;
  setParameter(std::string("DestinationFileSystemPath"), destinationFileSystemPath);
}

std::string CreateGlobalDataNetworkRequest::getSourceRegion() const {
  return sourceRegion_;
}

void CreateGlobalDataNetworkRequest::setSourceRegion(const std::string &sourceRegion) {
  sourceRegion_ = sourceRegion;
  setParameter(std::string("SourceRegion"), sourceRegion);
}

