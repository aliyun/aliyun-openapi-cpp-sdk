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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYAVAILABLEINSTANCESREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYAVAILABLEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryAvailableInstancesRequest : public RpcServiceRequest
			{

			public:
				QueryAvailableInstancesRequest();
				~QueryAvailableInstancesRequest();

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getSubscriptionType()const;
				void setSubscriptionType(const std::string& subscriptionType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getEndTimeStart()const;
				void setEndTimeStart(const std::string& endTimeStart);
				std::string getProductType()const;
				void setProductType(const std::string& productType);
				std::string getCreateTimeEnd()const;
				void setCreateTimeEnd(const std::string& createTimeEnd);
				std::string getInstanceIDs()const;
				void setInstanceIDs(const std::string& instanceIDs);
				std::string getEndTimeEnd()const;
				void setEndTimeEnd(const std::string& endTimeEnd);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCreateTimeStart()const;
				void setCreateTimeStart(const std::string& createTimeStart);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getRenewStatus()const;
				void setRenewStatus(const std::string& renewStatus);

            private:
				std::string productCode_;
				std::string subscriptionType_;
				long ownerId_;
				int pageNum_;
				std::string endTimeStart_;
				std::string productType_;
				std::string createTimeEnd_;
				std::string instanceIDs_;
				std::string endTimeEnd_;
				int pageSize_;
				std::string createTimeStart_;
				std::string region_;
				std::string renewStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYAVAILABLEINSTANCESREQUEST_H_