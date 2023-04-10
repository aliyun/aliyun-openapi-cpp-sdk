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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_LISTPERMISSIONSRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_LISTPERMISSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/datalake/DataLakeExport.h>

namespace AlibabaCloud
{
	namespace DataLake
	{
		namespace Model
		{
			class ALIBABACLOUD_DATALAKE_EXPORT ListPermissionsResult : public ServiceResult
			{
			public:
				struct PrincipalResourcePermissionsListItem
				{
					struct Principal
					{
						std::string principalArn;
					};
					struct MetaResource
					{
						struct CatalogResource
						{
							std::string catalogId;
						};
						struct DatabaseResource
						{
							std::string databaseName;
							std::string databaseWildcard;
						};
						struct TableResource
						{
							std::string tableName;
							std::string databaseName;
						};
						struct FunctionResource
						{
							std::string functionName;
							std::string databaseName;
						};
						struct ColumnResource
						{
							std::string tableName;
							std::vector<std::string> columnNames;
							std::string databaseName;
						};
						CatalogResource catalogResource;
						FunctionResource functionResource;
						ColumnResource columnResource;
						TableResource tableResource;
						DatabaseResource databaseResource;
						std::string resourceType;
					};
					std::vector<std::string> delegateAccesses;
					MetaResource metaResource;
					std::vector<std::string> accesses;
					Principal principal;
				};


				ListPermissionsResult();
				explicit ListPermissionsResult(const std::string &payload);
				~ListPermissionsResult();
				long getTotalCount()const;
				std::string getMessage()const;
				std::string getNextPageToken()const;
				std::vector<PrincipalResourcePermissionsListItem> getPrincipalResourcePermissionsList()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string message_;
				std::string nextPageToken_;
				std::vector<PrincipalResourcePermissionsListItem> principalResourcePermissionsList_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_LISTPERMISSIONSRESULT_H_