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

#include <alibabacloud/oceanbasepro/model/CreateOmsOpenAPIProjectRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateOmsOpenAPIProjectRequest;

CreateOmsOpenAPIProjectRequest::CreateOmsOpenAPIProjectRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateOmsOpenAPIProject") {
  setMethod(HttpRequest::Method::Post);
}

CreateOmsOpenAPIProjectRequest::~CreateOmsOpenAPIProjectRequest() {}

CreateOmsOpenAPIProjectRequest::DestConfig CreateOmsOpenAPIProjectRequest::getDestConfig() const {
  return destConfig_;
}

void CreateOmsOpenAPIProjectRequest::setDestConfig(const CreateOmsOpenAPIProjectRequest::DestConfig &destConfig) {
  destConfig_ = destConfig;
  setBodyParameter(std::string("DestConfig") + ".SendMsgTimeout", std::to_string(destConfig.sendMsgTimeout));
  setBodyParameter(std::string("DestConfig") + ".SequenceStartTimestamp", std::to_string(destConfig.sequenceStartTimestamp));
  setBodyParameter(std::string("DestConfig") + ".Partition", std::to_string(destConfig.partition));
  setBodyParameter(std::string("DestConfig") + ".SerializerType", destConfig.serializerType);
  setBodyParameter(std::string("DestConfig") + ".EndpointType", destConfig.endpointType);
  setBodyParameter(std::string("DestConfig") + ".EndpointId", destConfig.endpointId);
  setBodyParameter(std::string("DestConfig") + ".SequenceEnable", destConfig.sequenceEnable ? "true" : "false");
  setBodyParameter(std::string("DestConfig") + ".PartitionMode", destConfig.partitionMode);
  setBodyParameter(std::string("DestConfig") + ".EnableMsgTrace", destConfig.enableMsgTrace ? "true" : "false");
  setBodyParameter(std::string("DestConfig") + ".TopicType", destConfig.topicType);
  setBodyParameter(std::string("DestConfig") + ".MsgTags", destConfig.msgTags);
  setBodyParameter(std::string("DestConfig") + ".ProducerGroup", destConfig.producerGroup);
}

int CreateOmsOpenAPIProjectRequest::getPageNumber() const {
  return pageNumber_;
}

void CreateOmsOpenAPIProjectRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int CreateOmsOpenAPIProjectRequest::getPageSize() const {
  return pageSize_;
}

void CreateOmsOpenAPIProjectRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

CreateOmsOpenAPIProjectRequest::TransferMapping CreateOmsOpenAPIProjectRequest::getTransferMapping() const {
  return transferMapping_;
}

void CreateOmsOpenAPIProjectRequest::setTransferMapping(const CreateOmsOpenAPIProjectRequest::TransferMapping &transferMapping) {
  transferMapping_ = transferMapping;
  setBodyParameter(std::string("TransferMapping") + ".Mode", transferMapping.mode);
  for(int dep1 = 0; dep1 != transferMapping.databases.size(); dep1++) {
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".MappedName", transferMapping.databases[dep1].mappedName);
    for(int dep2 = 0; dep2 != transferMapping.databases[dep1].tables.size(); dep2++) {
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".MappedName", transferMapping.databases[dep1].tables[dep2].mappedName);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].tables[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].tables[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].tables[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].tables[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", transferMapping.databases[dep1].tables[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", std::to_string(transferMapping.databases[dep1].tables[dep2].adbTableSchema.partitionLifeCycle));
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].tables[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].tables[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".TableId", transferMapping.databases[dep1].tables[dep2].tableId);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".WhereClause", transferMapping.databases[dep1].tables[dep2].whereClause);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].tables[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].tables[dep2].shardColumns[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".TableName", transferMapping.databases[dep1].tables[dep2].tableName);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".Type", transferMapping.databases[dep1].tables[dep2].type);
    }
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".DatabaseName", transferMapping.databases[dep1].databaseName);
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".TenantName", transferMapping.databases[dep1].tenantName);
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".DatabaseId", transferMapping.databases[dep1].databaseId);
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Type", transferMapping.databases[dep1].type);
  }
}

CreateOmsOpenAPIProjectRequest::TransferStepConfig CreateOmsOpenAPIProjectRequest::getTransferStepConfig() const {
  return transferStepConfig_;
}

void CreateOmsOpenAPIProjectRequest::setTransferStepConfig(const CreateOmsOpenAPIProjectRequest::TransferStepConfig &transferStepConfig) {
  transferStepConfig_ = transferStepConfig;
  setBodyParameter(std::string("TransferStepConfig") + ".IncrSyncStepTransferConfig.StoreTransactionEnabled", transferStepConfig.incrSyncStepTransferConfig.storeTransactionEnabled ? "true" : "false");
  for(int dep1 = 0; dep1 != transferStepConfig.incrSyncStepTransferConfig.recordTypeList.size(); dep1++) {
    setBodyParameter(std::string("TransferStepConfig") + ".IncrSyncStepTransferConfig.RecordTypeList." + std::to_string(dep1 + 1), transferStepConfig.incrSyncStepTransferConfig.recordTypeList[dep1]);
  }
  setBodyParameter(std::string("TransferStepConfig") + ".IncrSyncStepTransferConfig.TransferStepType", transferStepConfig.incrSyncStepTransferConfig.transferStepType);
  setBodyParameter(std::string("TransferStepConfig") + ".IncrSyncStepTransferConfig.StoreLogKeptHour", std::to_string(transferStepConfig.incrSyncStepTransferConfig.storeLogKeptHour));
  setBodyParameter(std::string("TransferStepConfig") + ".IncrSyncStepTransferConfig.StartTimestamp", std::to_string(transferStepConfig.incrSyncStepTransferConfig.startTimestamp));
  setBodyParameter(std::string("TransferStepConfig") + ".EnableFullSync", transferStepConfig.enableFullSync ? "true" : "false");
  setBodyParameter(std::string("TransferStepConfig") + ".EnableIncrSync", transferStepConfig.enableIncrSync ? "true" : "false");
  setBodyParameter(std::string("TransferStepConfig") + ".EnableStructSync", transferStepConfig.enableStructSync ? "true" : "false");
}

std::string CreateOmsOpenAPIProjectRequest::getWorkerGradeId() const {
  return workerGradeId_;
}

void CreateOmsOpenAPIProjectRequest::setWorkerGradeId(const std::string &workerGradeId) {
  workerGradeId_ = workerGradeId;
  setBodyParameter(std::string("WorkerGradeId"), workerGradeId);
}

std::string CreateOmsOpenAPIProjectRequest::getProjectName() const {
  return projectName_;
}

void CreateOmsOpenAPIProjectRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

CreateOmsOpenAPIProjectRequest::SourceConfig CreateOmsOpenAPIProjectRequest::getSourceConfig() const {
  return sourceConfig_;
}

void CreateOmsOpenAPIProjectRequest::setSourceConfig(const CreateOmsOpenAPIProjectRequest::SourceConfig &sourceConfig) {
  sourceConfig_ = sourceConfig;
  setBodyParameter(std::string("SourceConfig") + ".SendMsgTimeout", std::to_string(sourceConfig.sendMsgTimeout));
  setBodyParameter(std::string("SourceConfig") + ".SequenceStartTimestamp", std::to_string(sourceConfig.sequenceStartTimestamp));
  setBodyParameter(std::string("SourceConfig") + ".Partition", std::to_string(sourceConfig.partition));
  setBodyParameter(std::string("SourceConfig") + ".SerializerType", sourceConfig.serializerType);
  setBodyParameter(std::string("SourceConfig") + ".EndpointType", sourceConfig.endpointType);
  setBodyParameter(std::string("SourceConfig") + ".EndpointId", sourceConfig.endpointId);
  setBodyParameter(std::string("SourceConfig") + ".SequenceEnable", sourceConfig.sequenceEnable ? "true" : "false");
  setBodyParameter(std::string("SourceConfig") + ".PartitionMode", sourceConfig.partitionMode);
  setBodyParameter(std::string("SourceConfig") + ".EnableMsgTrace", sourceConfig.enableMsgTrace ? "true" : "false");
  setBodyParameter(std::string("SourceConfig") + ".TopicType", sourceConfig.topicType);
  setBodyParameter(std::string("SourceConfig") + ".MsgTags", sourceConfig.msgTags);
  setBodyParameter(std::string("SourceConfig") + ".ProducerGroup", sourceConfig.producerGroup);
}

std::string CreateOmsOpenAPIProjectRequest::getBusinessName() const {
  return businessName_;
}

void CreateOmsOpenAPIProjectRequest::setBusinessName(const std::string &businessName) {
  businessName_ = businessName;
  setBodyParameter(std::string("BusinessName"), businessName);
}

std::vector<CreateOmsOpenAPIProjectRequest::std::string> CreateOmsOpenAPIProjectRequest::getLabelIds() const {
  return labelIds_;
}

void CreateOmsOpenAPIProjectRequest::setLabelIds(const std::vector<CreateOmsOpenAPIProjectRequest::std::string> &labelIds) {
  labelIds_ = labelIds;
  for(int dep1 = 0; dep1 != labelIds.size(); dep1++) {
    setBodyParameter(std::string("LabelIds") + "." + std::to_string(dep1 + 1), labelIds[dep1]);
  }
}

