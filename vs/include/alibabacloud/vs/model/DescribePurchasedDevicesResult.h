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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEPURCHASEDDEVICESRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEPURCHASEDDEVICESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribePurchasedDevicesResult : public ServiceResult
			{
			public:
				struct Device
				{
					std::string groupName;
					std::string type;
					std::string description;
					std::string subType;
					std::string createdTime;
					std::string registerCode;
					std::string region;
					std::string id;
					std::string vendor;
					std::string orderId;
					std::string name;
					std::string groupId;
				};


				DescribePurchasedDevicesResult();
				explicit DescribePurchasedDevicesResult(const std::string &payload);
				~DescribePurchasedDevicesResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNum()const;
				long getPageCount()const;
				std::vector<Device> getDevices()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNum_;
				long pageCount_;
				std::vector<Device> devices_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEPURCHASEDDEVICESRESULT_H_