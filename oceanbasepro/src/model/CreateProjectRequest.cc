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

#include <alibabacloud/oceanbasepro/model/CreateProjectRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateProject") {
  setMethod(HttpRequest::Method::Post);
}

CreateProjectRequest::~CreateProjectRequest() {}

std::string CreateProjectRequest::getSinkEndpointId() const {
  return sinkEndpointId_;
}

void CreateProjectRequest::setSinkEndpointId(const std::string &sinkEndpointId) {
  sinkEndpointId_ = sinkEndpointId;
  setBodyParameter(std::string("SinkEndpointId"), sinkEndpointId);
}

bool CreateProjectRequest::getUseOss() const {
  return useOss_;
}

void CreateProjectRequest::setUseOss(bool useOss) {
  useOss_ = useOss;
  setBodyParameter(std::string("UseOss"), useOss ? "true" : "false");
}

std::string CreateProjectRequest::getOssKey() const {
  return ossKey_;
}

void CreateProjectRequest::setOssKey(const std::string &ossKey) {
  ossKey_ = ossKey;
  setBodyParameter(std::string("OssKey"), ossKey);
}

std::string CreateProjectRequest::getSourceEndpointId() const {
  return sourceEndpointId_;
}

void CreateProjectRequest::setSourceEndpointId(const std::string &sourceEndpointId) {
  sourceEndpointId_ = sourceEndpointId;
  setBodyParameter(std::string("SourceEndpointId"), sourceEndpointId);
}

std::string CreateProjectRequest::getType() const {
  return type_;
}

void CreateProjectRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

CreateProjectRequest::FullTransferConfig CreateProjectRequest::getFullTransferConfig() const {
  return fullTransferConfig_;
}

void CreateProjectRequest::setFullTransferConfig(const CreateProjectRequest::FullTransferConfig &fullTransferConfig) {
  fullTransferConfig_ = fullTransferConfig;
  setBodyParameter(std::string("FullTransferConfig") + ".IndexDDLConcurrencyLimit", std::to_string(fullTransferConfig.indexDDLConcurrencyLimit));
  setBodyParameter(std::string("FullTransferConfig") + ".HbaseObjMigMode", fullTransferConfig.hbaseObjMigMode);
  setBodyParameter(std::string("FullTransferConfig") + ".NonePkUkTruncateDstTable", fullTransferConfig.nonePkUkTruncateDstTable ? "true" : "false");
  setBodyParameter(std::string("FullTransferConfig") + ".ThrottleRps", std::to_string(fullTransferConfig.throttleRps));
  setBodyParameter(std::string("FullTransferConfig") + ".FullVerifySpeedMode", fullTransferConfig.fullVerifySpeedMode);
  setBodyParameter(std::string("FullTransferConfig") + ".WriteWorkerNum", std::to_string(fullTransferConfig.writeWorkerNum));
  setBodyParameter(std::string("FullTransferConfig") + ".HbaseObjCheckMode", fullTransferConfig.hbaseObjCheckMode);
  setBodyParameter(std::string("FullTransferConfig") + ".MaxConcurrentIndexDDLs", std::to_string(fullTransferConfig.maxConcurrentIndexDDLs));
  setBodyParameter(std::string("FullTransferConfig") + ".ReadWorkerNum", std::to_string(fullTransferConfig.readWorkerNum));
  setBodyParameter(std::string("FullTransferConfig") + ".FullTransferSpeedMode", fullTransferConfig.fullTransferSpeedMode);
  setBodyParameter(std::string("FullTransferConfig") + ".AllowDestTableNotEmpty", fullTransferConfig.allowDestTableNotEmpty ? "true" : "false");
  setBodyParameter(std::string("FullTransferConfig") + ".ThrottleIOPS", std::to_string(fullTransferConfig.throttleIOPS));
}

bool CreateProjectRequest::getEnableStructTransfer() const {
  return enableStructTransfer_;
}

void CreateProjectRequest::setEnableStructTransfer(bool enableStructTransfer) {
  enableStructTransfer_ = enableStructTransfer;
  setBodyParameter(std::string("EnableStructTransfer"), enableStructTransfer ? "true" : "false");
}

CreateProjectRequest::TransferMapping CreateProjectRequest::getTransferMapping() const {
  return transferMapping_;
}

void CreateProjectRequest::setTransferMapping(const CreateProjectRequest::TransferMapping &transferMapping) {
  transferMapping_ = transferMapping;
  setBodyParameter(std::string("TransferMapping") + ".Mode", transferMapping.mode);
  for(int dep1 = 0; dep1 != transferMapping.databases.size(); dep1++) {
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".MappedName", transferMapping.databases[dep1].mappedName);
    for(int dep2 = 0; dep2 != transferMapping.databases[dep1].specificViews.size(); dep2++) {
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".MappedName", transferMapping.databases[dep1].specificViews[dep2].mappedName);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].specificViews[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].specificViews[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].specificViews[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].specificViews[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", transferMapping.databases[dep1].specificViews[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", transferMapping.databases[dep1].specificViews[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].specificViews[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].specificViews[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".Name", transferMapping.databases[dep1].specificViews[dep2].name);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".WhereClause", transferMapping.databases[dep1].specificViews[dep2].whereClause);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".Id", transferMapping.databases[dep1].specificViews[dep2].id);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].specificViews[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].specificViews[dep2].shardColumns[dep3]);
      }
    }
    for(int dep2 = 0; dep2 != transferMapping.databases[dep1].tables.size(); dep2++) {
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".MappedName", transferMapping.databases[dep1].tables[dep2].mappedName);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].tables[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].tables[dep2].filterColumns[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".ObkvPartitionConfig.VirtualColumn", transferMapping.databases[dep1].tables[dep2].obkvPartitionConfig.virtualColumn);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".ObkvPartitionConfig.PartitionType", transferMapping.databases[dep1].tables[dep2].obkvPartitionConfig.partitionType);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".ObkvPartitionConfig.PartitionSize", std::to_string(transferMapping.databases[dep1].tables[dep2].obkvPartitionConfig.partitionSize));
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].tables[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].tables[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", transferMapping.databases[dep1].tables[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", transferMapping.databases[dep1].tables[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].tables[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].tables[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".Name", transferMapping.databases[dep1].tables[dep2].name);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".WhereClause", transferMapping.databases[dep1].tables[dep2].whereClause);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".Id", transferMapping.databases[dep1].tables[dep2].id);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].tables[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].tables[dep2].shardColumns[dep3]);
      }
    }
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".ClusterName", transferMapping.databases[dep1].clusterName);
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Name", transferMapping.databases[dep1].name);
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".TenantName", transferMapping.databases[dep1].tenantName);
    setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Id", transferMapping.databases[dep1].id);
    for(int dep2 = 0; dep2 != transferMapping.databases[dep1].specificTables.size(); dep2++) {
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".MappedName", transferMapping.databases[dep1].specificTables[dep2].mappedName);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].specificTables[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].specificTables[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].specificTables[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].specificTables[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", transferMapping.databases[dep1].specificTables[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", transferMapping.databases[dep1].specificTables[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].specificTables[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].specificTables[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".Name", transferMapping.databases[dep1].specificTables[dep2].name);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".WhereClause", transferMapping.databases[dep1].specificTables[dep2].whereClause);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".Id", transferMapping.databases[dep1].specificTables[dep2].id);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].specificTables[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].specificTables[dep2].shardColumns[dep3]);
      }
    }
    for(int dep2 = 0; dep2 != transferMapping.databases[dep1].views.size(); dep2++) {
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".MappedName", transferMapping.databases[dep1].views[dep2].mappedName);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].views[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].views[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].views[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].views[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", transferMapping.databases[dep1].views[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", transferMapping.databases[dep1].views[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].views[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), transferMapping.databases[dep1].views[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".Name", transferMapping.databases[dep1].views[dep2].name);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".WhereClause", transferMapping.databases[dep1].views[dep2].whereClause);
      setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".Id", transferMapping.databases[dep1].views[dep2].id);
      for(int dep3 = 0; dep3 != transferMapping.databases[dep1].views[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".Databases." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), transferMapping.databases[dep1].views[dep2].shardColumns[dep3]);
      }
    }
  }
  for(int dep1 = 0; dep1 != transferMapping.tableAndViewBlackList.size(); dep1++) {
    setBodyParameter(std::string("TransferMapping") + ".TableAndViewBlackList." + std::to_string(dep1 + 1), transferMapping.tableAndViewBlackList[dep1]);
  }
  for(int dep1 = 0; dep1 != transferMapping.databasesBlack.size(); dep1++) {
    setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".MappedName", transferMapping.databasesBlack[dep1].mappedName);
    for(int dep2 = 0; dep2 != transferMapping.databasesBlack[dep1].specificViews.size(); dep2++) {
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".MappedName", transferMapping.databasesBlack[dep1].specificViews[dep2].mappedName);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].specificViews[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].specificViews[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].specificViews[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].specificViews[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", transferMapping.databasesBlack[dep1].specificViews[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", transferMapping.databasesBlack[dep1].specificViews[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].specificViews[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].specificViews[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".Name", transferMapping.databasesBlack[dep1].specificViews[dep2].name);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".WhereClause", transferMapping.databasesBlack[dep1].specificViews[dep2].whereClause);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".Id", transferMapping.databasesBlack[dep1].specificViews[dep2].id);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].specificViews[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].specificViews[dep2].shardColumns[dep3]);
      }
    }
    for(int dep2 = 0; dep2 != transferMapping.databasesBlack[dep1].tables.size(); dep2++) {
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".MappedName", transferMapping.databasesBlack[dep1].tables[dep2].mappedName);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].tables[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].tables[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].tables[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].tables[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", transferMapping.databasesBlack[dep1].tables[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", transferMapping.databasesBlack[dep1].tables[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].tables[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].tables[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".Name", transferMapping.databasesBlack[dep1].tables[dep2].name);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".WhereClause", transferMapping.databasesBlack[dep1].tables[dep2].whereClause);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".Id", transferMapping.databasesBlack[dep1].tables[dep2].id);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].tables[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].tables[dep2].shardColumns[dep3]);
      }
    }
    setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".ClusterName", transferMapping.databasesBlack[dep1].clusterName);
    setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Name", transferMapping.databasesBlack[dep1].name);
    setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".TenantName", transferMapping.databasesBlack[dep1].tenantName);
    setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Id", transferMapping.databasesBlack[dep1].id);
    for(int dep2 = 0; dep2 != transferMapping.databasesBlack[dep1].specificTables.size(); dep2++) {
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".MappedName", transferMapping.databasesBlack[dep1].specificTables[dep2].mappedName);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].specificTables[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].specificTables[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].specificTables[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].specificTables[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", transferMapping.databasesBlack[dep1].specificTables[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", transferMapping.databasesBlack[dep1].specificTables[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].specificTables[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].specificTables[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".Name", transferMapping.databasesBlack[dep1].specificTables[dep2].name);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".WhereClause", transferMapping.databasesBlack[dep1].specificTables[dep2].whereClause);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".Id", transferMapping.databasesBlack[dep1].specificTables[dep2].id);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].specificTables[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].specificTables[dep2].shardColumns[dep3]);
      }
    }
    for(int dep2 = 0; dep2 != transferMapping.databasesBlack[dep1].views.size(); dep2++) {
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".MappedName", transferMapping.databasesBlack[dep1].views[dep2].mappedName);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].views[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].views[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].views[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].views[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", transferMapping.databasesBlack[dep1].views[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", transferMapping.databasesBlack[dep1].views[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].views[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].views[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".Name", transferMapping.databasesBlack[dep1].views[dep2].name);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".WhereClause", transferMapping.databasesBlack[dep1].views[dep2].whereClause);
      setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".Id", transferMapping.databasesBlack[dep1].views[dep2].id);
      for(int dep3 = 0; dep3 != transferMapping.databasesBlack[dep1].views[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("TransferMapping") + ".DatabasesBlack." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), transferMapping.databasesBlack[dep1].views[dep2].shardColumns[dep3]);
      }
    }
  }
  for(int dep1 = 0; dep1 != transferMapping.tableAndViewWhiteList.size(); dep1++) {
    setBodyParameter(std::string("TransferMapping") + ".TableAndViewWhiteList." + std::to_string(dep1 + 1), transferMapping.tableAndViewWhiteList[dep1]);
  }
}

std::string CreateProjectRequest::getWorkerGradeId() const {
  return workerGradeId_;
}

void CreateProjectRequest::setWorkerGradeId(const std::string &workerGradeId) {
  workerGradeId_ = workerGradeId;
  setBodyParameter(std::string("WorkerGradeId"), workerGradeId);
}

std::string CreateProjectRequest::getId() const {
  return id_;
}

void CreateProjectRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

CreateProjectRequest::CommonTransferConfig CreateProjectRequest::getCommonTransferConfig() const {
  return commonTransferConfig_;
}

void CreateProjectRequest::setCommonTransferConfig(const CreateProjectRequest::CommonTransferConfig &commonTransferConfig) {
  commonTransferConfig_ = commonTransferConfig;
  setBodyParameter(std::string("CommonTransferConfig") + ".MqPartition", std::to_string(commonTransferConfig.mqPartition));
  setBodyParameter(std::string("CommonTransferConfig") + ".SyncSchemaColumnName", commonTransferConfig.syncSchemaColumnName);
  setBodyParameter(std::string("CommonTransferConfig") + ".ActiveActive", commonTransferConfig.activeActive ? "true" : "false");
  setBodyParameter(std::string("CommonTransferConfig") + ".SinkStoreFormat", commonTransferConfig.sinkStoreFormat);
  setBodyParameter(std::string("CommonTransferConfig") + ".RocketMqEnableMsgTrace", commonTransferConfig.rocketMqEnableMsgTrace ? "true" : "false");
  for(int dep1 = 0; dep1 != commonTransferConfig.customColumns.size(); dep1++) {
    setBodyParameter(std::string("CommonTransferConfig") + ".CustomColumns." + std::to_string(dep1 + 1) + ".Expression", commonTransferConfig.customColumns[dep1].expression);
    setBodyParameter(std::string("CommonTransferConfig") + ".CustomColumns." + std::to_string(dep1 + 1) + ".ColumnName", commonTransferConfig.customColumns[dep1].columnName);
  }
  setBodyParameter(std::string("CommonTransferConfig") + ".RocketMqProducerGroup", commonTransferConfig.rocketMqProducerGroup);
  setBodyParameter(std::string("CommonTransferConfig") + ".MqPartitionMode", commonTransferConfig.mqPartitionMode);
  setBodyParameter(std::string("CommonTransferConfig") + ".RocketMqSendMsgTimeout", std::to_string(commonTransferConfig.rocketMqSendMsgTimeout));
  setBodyParameter(std::string("CommonTransferConfig") + ".TableCategory", commonTransferConfig.tableCategory);
  setBodyParameter(std::string("CommonTransferConfig") + ".DatahubTopicType", commonTransferConfig.datahubTopicType);
  setBodyParameter(std::string("CommonTransferConfig") + ".RocketMqMsgTags", commonTransferConfig.rocketMqMsgTags);
  setBodyParameter(std::string("CommonTransferConfig") + ".DataWorksBusinessName", commonTransferConfig.dataWorksBusinessName);
  setBodyParameter(std::string("CommonTransferConfig") + ".SourceStoreFormat", commonTransferConfig.sourceStoreFormat);
  setBodyParameter(std::string("CommonTransferConfig") + ".SyncSchema", commonTransferConfig.syncSchema ? "true" : "false");
  setBodyParameter(std::string("CommonTransferConfig") + ".MqSerializerType", commonTransferConfig.mqSerializerType);
}

CreateProjectRequest::StructTransferConfig CreateProjectRequest::getStructTransferConfig() const {
  return structTransferConfig_;
}

void CreateProjectRequest::setStructTransferConfig(const CreateProjectRequest::StructTransferConfig &structTransferConfig) {
  structTransferConfig_ = structTransferConfig;
  setBodyParameter(std::string("StructTransferConfig") + ".ByteCharConvertStrategy", structTransferConfig.byteCharConvertStrategy);
  setBodyParameter(std::string("StructTransferConfig") + ".DeferIndexCreation", structTransferConfig.deferIndexCreation ? "true" : "false");
}

CreateProjectRequest::ReverseIncrTransferConfig CreateProjectRequest::getReverseIncrTransferConfig() const {
  return reverseIncrTransferConfig_;
}

void CreateProjectRequest::setReverseIncrTransferConfig(const CreateProjectRequest::ReverseIncrTransferConfig &reverseIncrTransferConfig) {
  reverseIncrTransferConfig_ = reverseIncrTransferConfig;
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".ThrottleRps", std::to_string(reverseIncrTransferConfig.throttleRps));
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".EnableSequencingWithinTxn", reverseIncrTransferConfig.enableSequencingWithinTxn ? "true" : "false");
  for(int dep1 = 0; dep1 != reverseIncrTransferConfig.supportDDLTypes.size(); dep1++) {
    setBodyParameter(std::string("ReverseIncrTransferConfig") + ".SupportDDLTypes." + std::to_string(dep1 + 1), reverseIncrTransferConfig.supportDDLTypes[dep1]);
  }
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".StoreLogKeptHour", std::to_string(reverseIncrTransferConfig.storeLogKeptHour));
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".StartTimestamp", reverseIncrTransferConfig.startTimestamp);
  for(int dep1 = 0; dep1 != reverseIncrTransferConfig.recordTypeWhiteList.size(); dep1++) {
    setBodyParameter(std::string("ReverseIncrTransferConfig") + ".RecordTypeWhiteList." + std::to_string(dep1 + 1), reverseIncrTransferConfig.recordTypeWhiteList[dep1]);
  }
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".IncrSyncConcurrency", std::to_string(reverseIncrTransferConfig.incrSyncConcurrency));
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".EnableIncrSyncStatistics", reverseIncrTransferConfig.enableIncrSyncStatistics ? "true" : "false");
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".ThrottleIOPS", std::to_string(reverseIncrTransferConfig.throttleIOPS));
}

bool CreateProjectRequest::getEnableIncrTransfer() const {
  return enableIncrTransfer_;
}

void CreateProjectRequest::setEnableIncrTransfer(bool enableIncrTransfer) {
  enableIncrTransfer_ = enableIncrTransfer;
  setBodyParameter(std::string("EnableIncrTransfer"), enableIncrTransfer ? "true" : "false");
}

bool CreateProjectRequest::getEnableFullTransfer() const {
  return enableFullTransfer_;
}

void CreateProjectRequest::setEnableFullTransfer(bool enableFullTransfer) {
  enableFullTransfer_ = enableFullTransfer;
  setBodyParameter(std::string("EnableFullTransfer"), enableFullTransfer ? "true" : "false");
}

bool CreateProjectRequest::getEnableFullVerify() const {
  return enableFullVerify_;
}

void CreateProjectRequest::setEnableFullVerify(bool enableFullVerify) {
  enableFullVerify_ = enableFullVerify;
  setBodyParameter(std::string("EnableFullVerify"), enableFullVerify ? "true" : "false");
}

std::string CreateProjectRequest::getName() const {
  return name_;
}

void CreateProjectRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::vector<CreateProjectRequest::std::string> CreateProjectRequest::getLabelIds() const {
  return labelIds_;
}

void CreateProjectRequest::setLabelIds(const std::vector<CreateProjectRequest::std::string> &labelIds) {
  labelIds_ = labelIds;
  for(int dep1 = 0; dep1 != labelIds.size(); dep1++) {
    setBodyParameter(std::string("LabelIds") + "." + std::to_string(dep1 + 1), labelIds[dep1]);
  }
}

CreateProjectRequest::IncrTransferConfig CreateProjectRequest::getIncrTransferConfig() const {
  return incrTransferConfig_;
}

void CreateProjectRequest::setIncrTransferConfig(const CreateProjectRequest::IncrTransferConfig &incrTransferConfig) {
  incrTransferConfig_ = incrTransferConfig;
  setBodyParameter(std::string("IncrTransferConfig") + ".ThrottleRps", std::to_string(incrTransferConfig.throttleRps));
  setBodyParameter(std::string("IncrTransferConfig") + ".EnableSequencingWithinTxn", incrTransferConfig.enableSequencingWithinTxn ? "true" : "false");
  for(int dep1 = 0; dep1 != incrTransferConfig.supportDDLTypes.size(); dep1++) {
    setBodyParameter(std::string("IncrTransferConfig") + ".SupportDDLTypes." + std::to_string(dep1 + 1), incrTransferConfig.supportDDLTypes[dep1]);
  }
  setBodyParameter(std::string("IncrTransferConfig") + ".StoreLogKeptHour", std::to_string(incrTransferConfig.storeLogKeptHour));
  setBodyParameter(std::string("IncrTransferConfig") + ".StartTimestamp", incrTransferConfig.startTimestamp);
  for(int dep1 = 0; dep1 != incrTransferConfig.recordTypeWhiteList.size(); dep1++) {
    setBodyParameter(std::string("IncrTransferConfig") + ".RecordTypeWhiteList." + std::to_string(dep1 + 1), incrTransferConfig.recordTypeWhiteList[dep1]);
  }
  setBodyParameter(std::string("IncrTransferConfig") + ".IncrSyncConcurrency", std::to_string(incrTransferConfig.incrSyncConcurrency));
  setBodyParameter(std::string("IncrTransferConfig") + ".EnableIncrSyncStatistics", incrTransferConfig.enableIncrSyncStatistics ? "true" : "false");
  setBodyParameter(std::string("IncrTransferConfig") + ".ThrottleIOPS", std::to_string(incrTransferConfig.throttleIOPS));
}

bool CreateProjectRequest::getEnableReverseIncrTransfer() const {
  return enableReverseIncrTransfer_;
}

void CreateProjectRequest::setEnableReverseIncrTransfer(bool enableReverseIncrTransfer) {
  enableReverseIncrTransfer_ = enableReverseIncrTransfer;
  setBodyParameter(std::string("EnableReverseIncrTransfer"), enableReverseIncrTransfer ? "true" : "false");
}

