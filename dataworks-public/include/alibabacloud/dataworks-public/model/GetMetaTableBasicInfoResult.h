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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETMETATABLEBASICINFORESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETMETATABLEBASICINFORESULT_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetMetaTableBasicInfoResult : public ServiceResult
			{
			public:
				struct Data
				{
					bool isView;
					int lifeCycle;
					bool isPartitionTable;
					std::string projectName;
					std::string schema;
					long lastAccessTime;
					long lastModifyTime;
					int envType;
					std::string ownerId;
					long dataSize;
					std::string partitionKeys;
					std::string comment;
					int columnCount;
					std::string clusterId;
					long lastDdlTime;
					long createTime;
					long projectId;
					std::string databaseName;
					long viewCount;
					std::string caption;
					std::string tableName;
					std::string tableGuid;
					long tenantId;
					long favoriteCount;
					int isVisible;
					long readCount;
					std::string location;
				};


				GetMetaTableBasicInfoResult();
				explicit GetMetaTableBasicInfoResult(const std::string &payload);
				~GetMetaTableBasicInfoResult();
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				Data data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETMETATABLEBASICINFORESULT_H_