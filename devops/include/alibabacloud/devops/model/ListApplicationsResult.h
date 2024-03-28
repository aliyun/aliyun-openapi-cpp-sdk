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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTAPPLICATIONSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTAPPLICATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT ListApplicationsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string gmtCreate;
					std::string description;
					std::string creatorAccountId;
					std::string name;
				};


				ListApplicationsResult();
				explicit ListApplicationsResult(const std::string &payload);
				~ListApplicationsResult();
				std::vector<DataItem> getdata()const;
				std::string getNextToken()const;
				std::string getRequestId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;
				std::string nextToken_;
				std::string requestId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTAPPLICATIONSRESULT_H_