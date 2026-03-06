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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTGOVERNANCEISSUETABLESRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTGOVERNANCEISSUETABLESRESULT_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListGovernanceIssueTablesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Table
					{
						long lifeCycle;
						long tableSize;
						std::string clusterId;
						int downstreamDependencyCount;
						std::string schema;
						long createTime;
						std::string ruleId;
						std::string databaseName;
						long projectId;
						std::string datasourceType;
						long lastAccessTime;
						std::string properties;
						std::string tableName;
						std::string tableGuid;
						std::string mcProjectName;
						std::string ownerId;
						std::string bizDate;
						std::string ruleCategory;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<Table> tables;
				};


				ListGovernanceIssueTablesResult();
				explicit ListGovernanceIssueTablesResult(const std::string &payload);
				~ListGovernanceIssueTablesResult();
				std::string getDynamicErrorMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getDynamicErrorCode()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dynamicErrorMessage_;
				int httpStatusCode_;
				Data data_;
				std::string dynamicErrorCode_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTGOVERNANCEISSUETABLESRESULT_H_