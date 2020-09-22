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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEPURCHASEDDEVICERESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEPURCHASEDDEVICERESULT_H_

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
			class ALIBABACLOUD_VS_EXPORT DescribePurchasedDeviceResult : public ServiceResult
			{
			public:


				DescribePurchasedDeviceResult();
				explicit DescribePurchasedDeviceResult(const std::string &payload);
				~DescribePurchasedDeviceResult();
				std::string getGroupName()const;
				std::string getType()const;
				std::string getDescription()const;
				std::string getSubType()const;
				std::string getCreatedTime()const;
				std::string getRegisterCode()const;
				std::string getRegion()const;
				std::string getId()const;
				std::string getVendor()const;
				std::string getOrderId()const;
				std::string getName()const;
				std::string getGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string groupName_;
				std::string type_;
				std::string description_;
				std::string subType_;
				std::string createdTime_;
				std::string registerCode_;
				std::string region_;
				std::string id_;
				std::string vendor_;
				std::string orderId_;
				std::string name_;
				std::string groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEPURCHASEDDEVICERESULT_H_