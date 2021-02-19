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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DESCRIBEEMRHIVETABLERESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DESCRIBEEMRHIVETABLERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT DescribeEmrHiveTableResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TableColumn
					{
						std::string columnName;
						std::string comment;
						std::string gmtCreate;
						int columnPosition;
						std::string columnType;
						std::string gmtModified;
						std::string columnComment;
					};
					std::string owner;
					std::string tableType;
					long tableSize;
					std::string outputFormat;
					std::string gmtModified;
					std::string databaseName;
					std::vector<TableColumn> columns;
					std::string lastAccessTime;
					std::string lastModifyTime;
					bool isTemporary;
					std::string serializationLib;
					std::string tableName;
					std::string ownerType;
					std::string gmtCreate;
					std::string tableComment;
					std::string clusterBizName;
					std::string ownerId;
					std::string clusterBizId;
					std::string inputFormat;
					std::string partitionKeys;
					bool isCompressed;
					std::string tableDesc;
					std::string tableParameters;
					std::string location;
				};


				DescribeEmrHiveTableResult();
				explicit DescribeEmrHiveTableResult(const std::string &payload);
				~DescribeEmrHiveTableResult();
				Data getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorCode_;
				std::string errorMessage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DESCRIBEEMRHIVETABLERESULT_H_