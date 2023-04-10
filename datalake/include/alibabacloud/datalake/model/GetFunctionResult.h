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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_GETFUNCTIONRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_GETFUNCTIONRESULT_H_

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
			class ALIBABACLOUD_DATALAKE_EXPORT GetFunctionResult : public ServiceResult
			{
			public:
				struct Function
				{
					struct ResourceUriItem
					{
						std::string resourceType;
						std::string uri;
					};
					std::vector<ResourceUriItem> resourceUri;
					std::string functionName;
					std::string ownerName;
					std::string ownerType;
					std::string createdBy;
					int createTime;
					std::string functionType;
					std::string className;
					std::string databaseName;
					int updateTime;
					std::string catalogId;
				};


				GetFunctionResult();
				explicit GetFunctionResult(const std::string &payload);
				~GetFunctionResult();
				Function getFunction()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Function function_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_GETFUNCTIONRESULT_H_