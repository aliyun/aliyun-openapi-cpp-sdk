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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYDATASETINFORESULT_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYDATASETINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>

namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		namespace Model
		{
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryDatasetInfoResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Directory
					{
						std::string pathId;
						std::string id;
						std::string pathName;
						std::string name;
					};
					struct CubeTableListItem
					{
						std::string tableName;
						std::string uniqueId;
						bool factTable;
						std::string datasourceId;
						bool customsql;
						std::string caption;
						std::string dsType;
						std::string sql;
					};
					struct DimensionListItem
					{
						std::string dimensionType;
						std::string refUid;
						std::string uid;
						std::string expression;
						std::string expressionV2;
						std::string dataType;
						std::string tableUniqueId;
						std::string granularity;
						std::string caption;
						std::string fieldDescription;
						std::string factColumn;
					};
					struct MeasureListItem
					{
						std::string uid;
						std::string expression;
						std::string expressionV2;
						std::string dataType;
						std::string measureType;
						std::string tableUniqueId;
						std::string caption;
						std::string fieldDescription;
						std::string factColumn;
					};
					bool openOfflineAcceleration;
					std::string ownerName;
					std::string workspaceId;
					bool rowLevel;
					bool custimzeSql;
					std::string dsId;
					std::string datasetId;
					std::string dsType;
					std::vector<MeasureListItem> measureList;
					std::string gmtCreate;
					std::string ownerId;
					std::string datasetName;
					std::string gmtModify;
					std::vector<DimensionListItem> dimensionList;
					std::string dsName;
					std::string workspaceName;
					std::vector<CubeTableListItem> cubeTableList;
					Directory directory;
				};


				QueryDatasetInfoResult();
				explicit QueryDatasetInfoResult(const std::string &payload);
				~QueryDatasetInfoResult();
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYDATASETINFORESULT_H_