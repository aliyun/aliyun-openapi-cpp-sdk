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

#include <alibabacloud/dts/model/ModifyDtsJobRequest.h>

using AlibabaCloud::Dts::Model::ModifyDtsJobRequest;

ModifyDtsJobRequest::ModifyDtsJobRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ModifyDtsJob") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDtsJobRequest::~ModifyDtsJobRequest() {}

bool ModifyDtsJobRequest::getDataInitialization() const {
  return dataInitialization_;
}

void ModifyDtsJobRequest::setDataInitialization(bool dataInitialization) {
  dataInitialization_ = dataInitialization;
  setParameter(std::string("DataInitialization"), dataInitialization ? "true" : "false");
}

std::string ModifyDtsJobRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDtsJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool ModifyDtsJobRequest::getStructureInitialization() const {
  return structureInitialization_;
}

void ModifyDtsJobRequest::setStructureInitialization(bool structureInitialization) {
  structureInitialization_ = structureInitialization;
  setParameter(std::string("StructureInitialization"), structureInitialization ? "true" : "false");
}

std::string ModifyDtsJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDtsJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDtsJobRequest::getRegionId() const {
  return regionId_;
}

void ModifyDtsJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDtsJobRequest::getEtlOperatorColumnReference() const {
  return etlOperatorColumnReference_;
}

void ModifyDtsJobRequest::setEtlOperatorColumnReference(const std::string &etlOperatorColumnReference) {
  etlOperatorColumnReference_ = etlOperatorColumnReference;
  setBodyParameter(std::string("EtlOperatorColumnReference"), etlOperatorColumnReference);
}

bool ModifyDtsJobRequest::getDataSynchronization() const {
  return dataSynchronization_;
}

void ModifyDtsJobRequest::setDataSynchronization(bool dataSynchronization) {
  dataSynchronization_ = dataSynchronization;
  setParameter(std::string("DataSynchronization"), dataSynchronization ? "true" : "false");
}

std::string ModifyDtsJobRequest::getDbList() const {
  return dbList_;
}

void ModifyDtsJobRequest::setDbList(const std::string &dbList) {
  dbList_ = dbList;
  setBodyParameter(std::string("DbList"), dbList);
}

std::string ModifyDtsJobRequest::getFileOssUrl() const {
  return fileOssUrl_;
}

void ModifyDtsJobRequest::setFileOssUrl(const std::string &fileOssUrl) {
  fileOssUrl_ = fileOssUrl;
  setParameter(std::string("FileOssUrl"), fileOssUrl);
}

std::string ModifyDtsJobRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDtsJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ModifyDtsJobRequest::getModifyTypeEnum() const {
  return modifyTypeEnum_;
}

void ModifyDtsJobRequest::setModifyTypeEnum(const std::string &modifyTypeEnum) {
  modifyTypeEnum_ = modifyTypeEnum;
  setBodyParameter(std::string("ModifyTypeEnum"), modifyTypeEnum);
}

std::string ModifyDtsJobRequest::getReserved() const {
  return reserved_;
}

void ModifyDtsJobRequest::setReserved(const std::string &reserved) {
  reserved_ = reserved;
  setBodyParameter(std::string("Reserved"), reserved);
}

std::string ModifyDtsJobRequest::getFilterTableName() const {
  return filterTableName_;
}

void ModifyDtsJobRequest::setFilterTableName(const std::string &filterTableName) {
  filterTableName_ = filterTableName;
  setBodyParameter(std::string("FilterTableName"), filterTableName);
}

std::string ModifyDtsJobRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void ModifyDtsJobRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

std::string ModifyDtsJobRequest::getSynchronizationDirection() const {
  return synchronizationDirection_;
}

void ModifyDtsJobRequest::setSynchronizationDirection(const std::string &synchronizationDirection) {
  synchronizationDirection_ = synchronizationDirection;
  setParameter(std::string("SynchronizationDirection"), synchronizationDirection);
}

