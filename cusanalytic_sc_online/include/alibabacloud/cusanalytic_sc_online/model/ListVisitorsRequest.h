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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_LISTVISITORSREQUEST_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_LISTVISITORSREQUEST_H_

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
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT ListVisitorsRequest : public RpcServiceRequest
			{

			public:
				ListVisitorsRequest();
				~ListVisitorsRequest();

				std::string getGender()const;
				void setGender(const std::string& gender);
				long getUkId()const;
				void setUkId(long ukId);
				std::string getLocationIds()const;
				void setLocationIds(const std::string& locationIds);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getEnterCount()const;
				void setEnterCount(long enterCount);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);
				long getAgeStart()const;
				void setAgeStart(long ageStart);
				long getAgeEnd()const;
				void setAgeEnd(long ageEnd);
				std::string getPkId()const;
				void setPkId(const std::string& pkId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStoreIds()const;
				void setStoreIds(const std::string& storeIds);

            private:
				std::string gender_;
				long ukId_;
				std::string locationIds_;
				std::string startTime_;
				int pageSize_;
				long enterCount_;
				int pageIndex_;
				long ageStart_;
				long ageEnd_;
				std::string pkId_;
				std::string endTime_;
				std::string storeIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_LISTVISITORSREQUEST_H_