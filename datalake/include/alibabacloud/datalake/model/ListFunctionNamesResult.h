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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_LISTFUNCTIONNAMESRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_LISTFUNCTIONNAMESRESULT_H_

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
			class ALIBABACLOUD_DATALAKE_EXPORT ListFunctionNamesResult : public ServiceResult
			{
			public:


				ListFunctionNamesResult();
				explicit ListFunctionNamesResult(const std::string &payload);
				~ListFunctionNamesResult();
				std::string getMessage()const;
				std::string getNextPageToken()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::vector<std::string> getFunctionNames()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string nextPageToken_;
				std::string code_;
				bool success_;
				std::vector<std::string> functionNames_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_LISTFUNCTIONNAMESRESULT_H_