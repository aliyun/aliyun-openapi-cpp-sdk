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

#include <alibabacloud/oceanbasepro/model/CreateProjectModifyRecordsRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateProjectModifyRecordsRequest;

CreateProjectModifyRecordsRequest::CreateProjectModifyRecordsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateProjectModifyRecords") {
  setMethod(HttpRequest::Method::Post);
}

CreateProjectModifyRecordsRequest::~CreateProjectModifyRecordsRequest() {}

std::vector<CreateProjectModifyRecordsRequest::Databases> CreateProjectModifyRecordsRequest::getDatabases() const {
  return databases_;
}

void CreateProjectModifyRecordsRequest::setDatabases(const std::vector<CreateProjectModifyRecordsRequest::Databases> &databases) {
  databases_ = databases;
  for(int dep1 = 0; dep1 != databases.size(); dep1++) {
    setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".MappedName", databases[dep1].mappedName);
    for(int dep2 = 0; dep2 != databases[dep1].specificViews.size(); dep2++) {
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".MappedName", databases[dep1].specificViews[dep2].mappedName);
      for(int dep3 = 0; dep3 != databases[dep1].specificViews[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), databases[dep1].specificViews[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != databases[dep1].specificViews[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), databases[dep1].specificViews[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", databases[dep1].specificViews[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", databases[dep1].specificViews[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != databases[dep1].specificViews[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), databases[dep1].specificViews[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".Name", databases[dep1].specificViews[dep2].name);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".WhereClause", databases[dep1].specificViews[dep2].whereClause);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".Id", databases[dep1].specificViews[dep2].id);
      for(int dep3 = 0; dep3 != databases[dep1].specificViews[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificViews." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), databases[dep1].specificViews[dep2].shardColumns[dep3]);
      }
    }
    for(int dep2 = 0; dep2 != databases[dep1].tables.size(); dep2++) {
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".MappedName", databases[dep1].tables[dep2].mappedName);
      for(int dep3 = 0; dep3 != databases[dep1].tables[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), databases[dep1].tables[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != databases[dep1].tables[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), databases[dep1].tables[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", databases[dep1].tables[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", databases[dep1].tables[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != databases[dep1].tables[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), databases[dep1].tables[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".Name", databases[dep1].tables[dep2].name);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".WhereClause", databases[dep1].tables[dep2].whereClause);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".Id", databases[dep1].tables[dep2].id);
      for(int dep3 = 0; dep3 != databases[dep1].tables[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Tables." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), databases[dep1].tables[dep2].shardColumns[dep3]);
      }
    }
    setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Name", databases[dep1].name);
    setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Id", databases[dep1].id);
    for(int dep2 = 0; dep2 != databases[dep1].specificTables.size(); dep2++) {
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".MappedName", databases[dep1].specificTables[dep2].mappedName);
      for(int dep3 = 0; dep3 != databases[dep1].specificTables[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), databases[dep1].specificTables[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != databases[dep1].specificTables[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), databases[dep1].specificTables[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", databases[dep1].specificTables[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", databases[dep1].specificTables[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != databases[dep1].specificTables[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), databases[dep1].specificTables[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".Name", databases[dep1].specificTables[dep2].name);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".WhereClause", databases[dep1].specificTables[dep2].whereClause);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".Id", databases[dep1].specificTables[dep2].id);
      for(int dep3 = 0; dep3 != databases[dep1].specificTables[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".SpecificTables." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), databases[dep1].specificTables[dep2].shardColumns[dep3]);
      }
    }
    for(int dep2 = 0; dep2 != databases[dep1].views.size(); dep2++) {
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".MappedName", databases[dep1].views[dep2].mappedName);
      for(int dep3 = 0; dep3 != databases[dep1].views[dep2].filterColumns.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".FilterColumns." + std::to_string(dep3 + 1), databases[dep1].views[dep2].filterColumns[dep3]);
      }
      for(int dep3 = 0; dep3 != databases[dep1].views[dep2].adbTableSchema.primaryKeys.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.PrimaryKeys." + std::to_string(dep3 + 1), databases[dep1].views[dep2].adbTableSchema.primaryKeys[dep3]);
      }
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionStatement", databases[dep1].views[dep2].adbTableSchema.partitionStatement);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.PartitionLifeCycle", databases[dep1].views[dep2].adbTableSchema.partitionLifeCycle);
      for(int dep3 = 0; dep3 != databases[dep1].views[dep2].adbTableSchema.distributedKeys.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".AdbTableSchema.DistributedKeys." + std::to_string(dep3 + 1), databases[dep1].views[dep2].adbTableSchema.distributedKeys[dep3]);
      }
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".Name", databases[dep1].views[dep2].name);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".WhereClause", databases[dep1].views[dep2].whereClause);
      setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".Id", databases[dep1].views[dep2].id);
      for(int dep3 = 0; dep3 != databases[dep1].views[dep2].shardColumns.size(); dep3++) {
        setBodyParameter(std::string("Databases") + "." + std::to_string(dep1 + 1) + ".Views." + std::to_string(dep2 + 1) + ".ShardColumns." + std::to_string(dep3 + 1), databases[dep1].views[dep2].shardColumns[dep3]);
      }
    }
  }
}

std::string CreateProjectModifyRecordsRequest::getId() const {
  return id_;
}

void CreateProjectModifyRecordsRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

