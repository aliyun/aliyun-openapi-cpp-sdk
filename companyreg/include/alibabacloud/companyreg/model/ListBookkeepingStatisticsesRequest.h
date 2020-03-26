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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_LISTBOOKKEEPINGSTATISTICSESREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_LISTBOOKKEEPINGSTATISTICSESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT ListBookkeepingStatisticsesRequest : public RpcServiceRequest
			{

			public:
				ListBookkeepingStatisticsesRequest();
				~ListBookkeepingStatisticsesRequest();

				int getYear()const;
				void setYear(int year);
				std::string getProduceBizId()const;
				void setProduceBizId(const std::string& produceBizId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getMonth()const;
				void setMonth(int month);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				int year_;
				std::string produceBizId_;
				int pageNumber_;
				int month_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_LISTBOOKKEEPINGSTATISTICSESREQUEST_H_