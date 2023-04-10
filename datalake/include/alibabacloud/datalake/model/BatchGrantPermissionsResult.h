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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_BATCHGRANTPERMISSIONSRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_BATCHGRANTPERMISSIONSRESULT_H_

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
			class ALIBABACLOUD_DATALAKE_EXPORT BatchGrantPermissionsResult : public ServiceResult
			{
			public:
				struct BatchGrantRevokeFailureResultItem
				{
					struct GrantRevokeEntry
					{
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
						struct Principal
						{
							std::string principalArn;
						};
						std::vector<std::string> delegateAccesses;
						MetaResource metaResource;
						std::vector<std::string> accesses;
						std::string id;
						Principal principal;
					};
					struct ErrorDetail
					{
						std::string message;
						std::string code;
					};
					ErrorDetail errorDetail;
					GrantRevokeEntry grantRevokeEntry;
				};


				BatchGrantPermissionsResult();
				explicit BatchGrantPermissionsResult(const std::string &payload);
				~BatchGrantPermissionsResult();
				std::string getMessage()const;
				std::vector<BatchGrantRevokeFailureResultItem> getBatchGrantRevokeFailureResult()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<BatchGrantRevokeFailureResultItem> batchGrantRevokeFailureResult_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_BATCHGRANTPERMISSIONSRESULT_H_