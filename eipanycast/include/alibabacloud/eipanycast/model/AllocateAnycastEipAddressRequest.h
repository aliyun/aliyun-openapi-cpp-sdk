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

#ifndef ALIBABACLOUD_EIPANYCAST_MODEL_ALLOCATEANYCASTEIPADDRESSREQUEST_H_
#define ALIBABACLOUD_EIPANYCAST_MODEL_ALLOCATEANYCASTEIPADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/eipanycast/EipanycastExport.h>

namespace AlibabaCloud
{
	namespace Eipanycast
	{
		namespace Model
		{
			class ALIBABACLOUD_EIPANYCAST_EXPORT AllocateAnycastEipAddressRequest : public RpcServiceRequest
			{

			public:
				AllocateAnycastEipAddressRequest();
				~AllocateAnycastEipAddressRequest();

				std::string getBandwidth()const;
				void setBandwidth(const std::string& bandwidth);
				std::string getServiceLocation()const;
				void setServiceLocation(const std::string& serviceLocation);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);

            private:
				std::string bandwidth_;
				std::string serviceLocation_;
				std::string clientToken_;
				std::string description_;
				std::string regionId_;
				std::string internetChargeType_;
				std::string name_;
				std::string instanceChargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIPANYCAST_MODEL_ALLOCATEANYCASTEIPADDRESSREQUEST_H_