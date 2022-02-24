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

#ifndef ALIBABACLOUD_EIPANYCAST_MODEL_LISTANYCASTEIPADDRESSESREQUEST_H_
#define ALIBABACLOUD_EIPANYCAST_MODEL_LISTANYCASTEIPADDRESSESREQUEST_H_

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
			class ALIBABACLOUD_EIPANYCAST_EXPORT ListAnycastEipAddressesRequest : public RpcServiceRequest
			{

			public:
				ListAnycastEipAddressesRequest();
				~ListAnycastEipAddressesRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getBusinessStatus()const;
				void setBusinessStatus(const std::string& businessStatus);
				std::string getServiceLocation()const;
				void setServiceLocation(const std::string& serviceLocation);
				std::string getAnycastEipAddress()const;
				void setAnycastEipAddress(const std::string& anycastEipAddress);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getAnycastId()const;
				void setAnycastId(const std::string& anycastId);
				std::string getName()const;
				void setName(const std::string& name);
				std::vector<std::string> getBindInstanceIds()const;
				void setBindInstanceIds(const std::vector<std::string>& bindInstanceIds);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string regionId_;
				std::string nextToken_;
				std::string instanceChargeType_;
				std::string businessStatus_;
				std::string serviceLocation_;
				std::string anycastEipAddress_;
				std::string internetChargeType_;
				std::string anycastId_;
				std::string name_;
				std::vector<std::string> bindInstanceIds_;
				int maxResults_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIPANYCAST_MODEL_LISTANYCASTEIPADDRESSESREQUEST_H_