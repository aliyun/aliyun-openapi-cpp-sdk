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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBETABLERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBETABLERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT MetastoreDescribeTableResult : public ServiceResult
			{
			public:
				struct Column
				{
					std::string comment;
					std::string type;
					std::string name;
				};
				struct PartitionColumn
				{
					std::string comment;
					std::string type;
					std::string name;
				};
				struct SerdeParameter
				{
					std::string value;
					std::string key;
				};
				struct StorageDescParameter
				{
					std::string value;
					std::string key;
				};
				struct TableParameter
				{
					std::string value;
					std::string key;
				};


				MetastoreDescribeTableResult();
				explicit MetastoreDescribeTableResult(const std::string &payload);
				~MetastoreDescribeTableResult();
				std::string getLocationUri()const;
				std::string getOwner()const;
				std::string getTableType()const;
				std::string getFieldDelimiter()const;
				int getCreateTime()const;
				std::string getOutputFormat()const;
				std::vector<Column> getColumns()const;
				std::vector<PartitionColumn> getPartitionColumns()const;
				std::string getDatabaseId()const;
				std::string getCreator()const;
				int getLastAccessTime()const;
				bool getCompressed()const;
				std::vector<SerdeParameter> getSerdeParameters()const;
				std::string getSerializationLib()const;
				std::string getTableName()const;
				std::string getTableComment()const;
				std::vector<StorageDescParameter> getStorageDescParameters()const;
				std::string getClusterBizId()const;
				std::string getInputFormat()const;
				std::string getClusterName()const;
				std::string getDbName()const;
				std::string getId()const;
				std::vector<TableParameter> getTableParameters()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string locationUri_;
				std::string owner_;
				std::string tableType_;
				std::string fieldDelimiter_;
				int createTime_;
				std::string outputFormat_;
				std::vector<Column> columns_;
				std::vector<PartitionColumn> partitionColumns_;
				std::string databaseId_;
				std::string creator_;
				int lastAccessTime_;
				bool compressed_;
				std::vector<SerdeParameter> serdeParameters_;
				std::string serializationLib_;
				std::string tableName_;
				std::string tableComment_;
				std::vector<StorageDescParameter> storageDescParameters_;
				std::string clusterBizId_;
				std::string inputFormat_;
				std::string clusterName_;
				std::string dbName_;
				std::string id_;
				std::vector<TableParameter> tableParameters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBETABLERESULT_H_