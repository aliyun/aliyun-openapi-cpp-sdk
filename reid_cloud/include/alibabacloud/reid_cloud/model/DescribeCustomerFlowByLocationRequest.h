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

#ifndef ALIBABACLOUD_REID_CLOUD_MODEL_DESCRIBECUSTOMERFLOWBYLOCATIONREQUEST_H_
#define ALIBABACLOUD_REID_CLOUD_MODEL_DESCRIBECUSTOMERFLOWBYLOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/reid_cloud/Reid_cloudExport.h>

namespace AlibabaCloud
{
	namespace Reid_cloud
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_CLOUD_EXPORT DescribeCustomerFlowByLocationRequest : public RpcServiceRequest
			{

			public:
				DescribeCustomerFlowByLocationRequest();
				~DescribeCustomerFlowByLocationRequest();

				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				long getStoreId()const;
				void setStoreId(long storeId);
				long getMinCount()const;
				void setMinCount(long minCount);
				long getParentAmount()const;
				void setParentAmount(long parentAmount);
				long getMaxCount()const;
				void setMaxCount(long maxCount);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				long getLocationId()const;
				void setLocationId(long locationId);
				std::string getParentLocationIds()const;
				void setParentLocationIds(const std::string& parentLocationIds);

            private:
				std::string startDate_;
				long storeId_;
				long minCount_;
				long parentAmount_;
				long maxCount_;
				std::string endDate_;
				long locationId_;
				std::string parentLocationIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_CLOUD_MODEL_DESCRIBECUSTOMERFLOWBYLOCATIONREQUEST_H_