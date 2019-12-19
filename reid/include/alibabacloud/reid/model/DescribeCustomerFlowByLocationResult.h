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

#ifndef ALIBABACLOUD_REID_MODEL_DESCRIBECUSTOMERFLOWBYLOCATIONRESULT_H_
#define ALIBABACLOUD_REID_MODEL_DESCRIBECUSTOMERFLOWBYLOCATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/reid/ReidExport.h>

namespace AlibabaCloud
{
	namespace Reid
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_EXPORT DescribeCustomerFlowByLocationResult : public ServiceResult
			{
			public:
				struct CustomerFlowItem
				{
					long storeId;
					float percent;
					std::string parentLocationIds;
					long locationId;
					long count;
					std::string locationName;
				};


				DescribeCustomerFlowByLocationResult();
				explicit DescribeCustomerFlowByLocationResult(const std::string &payload);
				~DescribeCustomerFlowByLocationResult();
				std::vector<CustomerFlowItem> getCustomerFlowItems()const;
				long getStoreId()const;
				float getPercent()const;
				long getLocationId()const;
				std::string getParentLocationIds()const;
				std::string getErrorCode()const;
				long getCount()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				std::string getLocationName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CustomerFlowItem> customerFlowItems_;
				long storeId_;
				float percent_;
				long locationId_;
				std::string parentLocationIds_;
				std::string errorCode_;
				long count_;
				std::string errorMessage_;
				bool success_;
				std::string locationName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_MODEL_DESCRIBECUSTOMERFLOWBYLOCATIONRESULT_H_