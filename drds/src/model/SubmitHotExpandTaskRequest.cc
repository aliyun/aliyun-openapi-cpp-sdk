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

#include <alibabacloud/drds/model/SubmitHotExpandTaskRequest.h>

using AlibabaCloud::Drds::Model::SubmitHotExpandTaskRequest;

SubmitHotExpandTaskRequest::SubmitHotExpandTaskRequest()
    : RpcServiceRequest("drds", "2019-01-23", "SubmitHotExpandTask") {
  setMethod(HttpRequest::Method::Post);
}

SubmitHotExpandTaskRequest::~SubmitHotExpandTaskRequest() {}

std::string SubmitHotExpandTaskRequest::getTaskDesc() const {
  return taskDesc_;
}

void SubmitHotExpandTaskRequest::setTaskDesc(const std::string &taskDesc) {
  taskDesc_ = taskDesc;
  setParameter(std::string("TaskDesc"), taskDesc);
}

std::string SubmitHotExpandTaskRequest::getTaskName() const {
  return taskName_;
}

void SubmitHotExpandTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string SubmitHotExpandTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitHotExpandTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<SubmitHotExpandTaskRequest::Mapping> SubmitHotExpandTaskRequest::getMapping() const {
  return mapping_;
}

void SubmitHotExpandTaskRequest::setMapping(const std::vector<SubmitHotExpandTaskRequest::Mapping> &mapping) {
  mapping_ = mapping;
  for(int dep1 = 0; dep1 != mapping.size(); dep1++) {
  auto mappingObj = mapping.at(dep1);
  std::string mappingObjStr = std::string("Mapping") + "." + std::to_string(dep1 + 1);
    setParameter(mappingObjStr + ".TbShardColumn", mappingObj.tbShardColumn);
    setParameter(mappingObjStr + ".DbShardColumn", mappingObj.dbShardColumn);
    setParameter(mappingObjStr + ".ShardTbValue", mappingObj.shardTbValue);
    setParameter(mappingObjStr + ".HotDbName", mappingObj.hotDbName);
    setParameter(mappingObjStr + ".ShardDbValue", mappingObj.shardDbValue);
    setParameter(mappingObjStr + ".HotTableName", mappingObj.hotTableName);
    setParameter(mappingObjStr + ".LogicTable", mappingObj.logicTable);
  }
}

std::vector<SubmitHotExpandTaskRequest::SupperAccountMapping> SubmitHotExpandTaskRequest::getSupperAccountMapping() const {
  return supperAccountMapping_;
}

void SubmitHotExpandTaskRequest::setSupperAccountMapping(const std::vector<SubmitHotExpandTaskRequest::SupperAccountMapping> &supperAccountMapping) {
  supperAccountMapping_ = supperAccountMapping;
  for(int dep1 = 0; dep1 != supperAccountMapping.size(); dep1++) {
  auto supperAccountMappingObj = supperAccountMapping.at(dep1);
  std::string supperAccountMappingObjStr = std::string("SupperAccountMapping") + "." + std::to_string(dep1 + 1);
    setParameter(supperAccountMappingObjStr + ".InstanceName", supperAccountMappingObj.instanceName);
    setParameter(supperAccountMappingObjStr + ".SupperAccount", supperAccountMappingObj.supperAccount);
    setParameter(supperAccountMappingObjStr + ".SupperPassword", supperAccountMappingObj.supperPassword);
  }
}

std::vector<SubmitHotExpandTaskRequest::ExtendedMapping> SubmitHotExpandTaskRequest::getExtendedMapping() const {
  return extendedMapping_;
}

void SubmitHotExpandTaskRequest::setExtendedMapping(const std::vector<SubmitHotExpandTaskRequest::ExtendedMapping> &extendedMapping) {
  extendedMapping_ = extendedMapping;
  for(int dep1 = 0; dep1 != extendedMapping.size(); dep1++) {
  auto extendedMappingObj = extendedMapping.at(dep1);
  std::string extendedMappingObjStr = std::string("ExtendedMapping") + "." + std::to_string(dep1 + 1);
    setParameter(extendedMappingObjStr + ".SrcInstanceId", extendedMappingObj.srcInstanceId);
    setParameter(extendedMappingObjStr + ".SrcDb", extendedMappingObj.srcDb);
  }
}

std::string SubmitHotExpandTaskRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void SubmitHotExpandTaskRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::vector<SubmitHotExpandTaskRequest::InstanceDbMapping> SubmitHotExpandTaskRequest::getInstanceDbMapping() const {
  return instanceDbMapping_;
}

void SubmitHotExpandTaskRequest::setInstanceDbMapping(const std::vector<SubmitHotExpandTaskRequest::InstanceDbMapping> &instanceDbMapping) {
  instanceDbMapping_ = instanceDbMapping;
  for(int dep1 = 0; dep1 != instanceDbMapping.size(); dep1++) {
  auto instanceDbMappingObj = instanceDbMapping.at(dep1);
  std::string instanceDbMappingObjStr = std::string("InstanceDbMapping") + "." + std::to_string(dep1 + 1);
    setParameter(instanceDbMappingObjStr + ".DbList", instanceDbMappingObj.dbList);
    setParameter(instanceDbMappingObjStr + ".InstanceName", instanceDbMappingObj.instanceName);
  }
}

std::string SubmitHotExpandTaskRequest::getDbName() const {
  return dbName_;
}

void SubmitHotExpandTaskRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

