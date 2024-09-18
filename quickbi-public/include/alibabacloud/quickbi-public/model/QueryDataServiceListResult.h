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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYDATASERVICELISTRESULT_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYDATASERVICELISTRESULT_H_

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
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryDataServiceListResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct QueryDataServiceModel
					{
						struct Content
						{
							struct Filter
							{
								std::string type;
								std::vector<std::string> filters;
								std::string logicalOperator;
							};
							struct SelectFieldModel
							{
								struct Field
								{
									std::string fid;
									std::string type;
									std::string column;
									std::string dataType;
									std::string granularity;
									std::string caption;
									std::string name;
								};
								std::string orderby;
								Field field;
								std::string desc;
								std::string alias;
								std::string aggregator;
							};
							std::string cubeId;
							std::vector<SelectFieldModel> returnFields;
							Filter filter;
							std::string cubeName;
							bool detail;
						};
						std::string ownerName;
						std::string cubeId;
						std::string creatorId;
						std::string modifierName;
						std::string gmtModified;
						std::string workspaceId;
						std::string name;
						std::string sid;
						std::string desc;
						std::string gmtCreate;
						std::string ownerId;
						Content content;
						std::string cubeName;
						std::string workspaceName;
						std::string creatorName;
						std::string modifierId;
					};
					int totalNum;
					int pageNum;
					int pageSize;
					std::vector<QueryDataServiceModel> data;
					int totalPages;
				};


				QueryDataServiceListResult();
				explicit QueryDataServiceListResult(const std::string &payload);
				~QueryDataServiceListResult();
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
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYDATASERVICELISTRESULT_H_