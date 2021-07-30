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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_LISTCALLTASKRESULT_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_LISTCALLTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT ListCallTaskResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string status;
					std::string fireTime;
					std::string resource;
					std::string bizType;
					std::string data;
					long completedCount;
					std::string templateCode;
					long totalCount;
					std::string taskName;
					int completedRate;
					std::string templateName;
					std::string dataType;
					long id;
					std::string completeTime;
					std::string stopTime;
				};


				ListCallTaskResult();
				explicit ListCallTaskResult(const std::string &payload);
				~ListCallTaskResult();
				long getPageSize()const;
				long getPageNumber()const;
				long getTotal()const;
				std::vector<DataItem> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long pageSize_;
				long pageNumber_;
				long total_;
				std::vector<DataItem> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_LISTCALLTASKRESULT_H_