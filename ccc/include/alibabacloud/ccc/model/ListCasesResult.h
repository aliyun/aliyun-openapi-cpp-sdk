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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTCASESRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTCASESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListCasesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ListItem
					{
						long attemptCount;
						std::string abandonType;
						std::string state;
						std::string failureReason;
						std::string phoneNumber;
						std::string caseId;
						std::string customVariables;
					};
					long totalCount;
					long pageSize;
					long pageNumber;
					std::vector<ListItem> list;
				};


				ListCasesResult();
				explicit ListCasesResult(const std::string &payload);
				~ListCasesResult();
				std::string getMessage()const;
				long getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				long httpStatusCode_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTCASESRESULT_H_