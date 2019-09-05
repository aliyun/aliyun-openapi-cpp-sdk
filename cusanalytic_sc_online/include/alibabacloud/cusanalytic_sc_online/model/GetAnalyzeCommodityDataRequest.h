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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETANALYZECOMMODITYDATAREQUEST_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETANALYZECOMMODITYDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cusanalytic_sc_online/Cusanalytic_sc_onlineExport.h>

namespace AlibabaCloud
{
	namespace Cusanalytic_sc_online
	{
		namespace Model
		{
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT GetAnalyzeCommodityDataRequest : public RpcServiceRequest
			{

			public:
				GetAnalyzeCommodityDataRequest();
				~GetAnalyzeCommodityDataRequest();

				long getStoreId()const;
				void setStoreId(long storeId);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				long getEndUserCount()const;
				void setEndUserCount(long endUserCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);
				long getStayPeriod()const;
				void setStayPeriod(long stayPeriod);
				long getStartUserCount()const;
				void setStartUserCount(long startUserCount);
				long getMinSupportCount()const;
				void setMinSupportCount(long minSupportCount);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);

            private:
				long storeId_;
				std::string startDate_;
				long endUserCount_;
				int pageSize_;
				int pageIndex_;
				long stayPeriod_;
				long startUserCount_;
				long minSupportCount_;
				std::string endDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETANALYZECOMMODITYDATAREQUEST_H_