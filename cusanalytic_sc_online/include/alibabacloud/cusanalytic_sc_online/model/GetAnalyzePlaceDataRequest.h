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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETANALYZEPLACEDATAREQUEST_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETANALYZEPLACEDATAREQUEST_H_

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
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT GetAnalyzePlaceDataRequest : public RpcServiceRequest
			{

			public:
				GetAnalyzePlaceDataRequest();
				~GetAnalyzePlaceDataRequest();

				long getEndUVCount()const;
				void setEndUVCount(long endUVCount);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				long getStoreId()const;
				void setStoreId(long storeId);
				long getParentAmount()const;
				void setParentAmount(long parentAmount);
				long getStartUVCount()const;
				void setStartUVCount(long startUVCount);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				long getLocationId()const;
				void setLocationId(long locationId);
				std::string getParentLocationIds()const;
				void setParentLocationIds(const std::string& parentLocationIds);

            private:
				long endUVCount_;
				std::string startDate_;
				long storeId_;
				long parentAmount_;
				long startUVCount_;
				std::string endDate_;
				long locationId_;
				std::string parentLocationIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETANALYZEPLACEDATAREQUEST_H_