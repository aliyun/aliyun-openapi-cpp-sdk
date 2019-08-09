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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTORELISTTABLESRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTORELISTTABLESRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT MetastoreListTablesResult : public ServiceResult
			{
			public:
				struct Table
				{
					std::string owner;
					std::string tableType;
					long createTime;
					std::string databaseName;
					std::string outputFormat;
					long gmtModified;
					std::string databaseId;
					long lastAccessTime;
					std::string serdeParameters;
					bool isTemporary;
					std::string serializationLib;
					std::string tableName;
					std::string tableComment;
					std::string ownerType;
					long gmtCreate;
					std::string clusterBizId;
					std::string inputFormat;
					std::string clusterName;
					std::string partitionKeys;
					std::string id;
					bool isCompressed;
					std::string tableParameters;
					std::string location;
				};


				MetastoreListTablesResult();
				explicit MetastoreListTablesResult(const std::string &payload);
				~MetastoreListTablesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<std::string> getTableNames()const;
				std::vector<Table> getTableList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<std::string> tableNames_;
				std::vector<Table> tableList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_METASTORELISTTABLESRESULT_H_