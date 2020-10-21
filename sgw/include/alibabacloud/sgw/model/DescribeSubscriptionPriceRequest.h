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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBESUBSCRIPTIONPRICEREQUEST_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBESUBSCRIPTIONPRICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT DescribeSubscriptionPriceRequest : public RpcServiceRequest
			{

			public:
				DescribeSubscriptionPriceRequest();
				~DescribeSubscriptionPriceRequest();

				std::string getGatewayClass()const;
				void setGatewayClass(const std::string& gatewayClass);
				long getCacheSSDSize()const;
				void setCacheSSDSize(long cacheSSDSize);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				int getPeriodQuantity()const;
				void setPeriodQuantity(int periodQuantity);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				long getCacheCloudEfficiencySize()const;
				void setCacheCloudEfficiencySize(long cacheCloudEfficiencySize);

            private:
				std::string gatewayClass_;
				long cacheSSDSize_;
				std::string accessKeyId_;
				std::string periodUnit_;
				int periodQuantity_;
				std::string securityToken_;
				std::string regionId_;
				long cacheCloudEfficiencySize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBESUBSCRIPTIONPRICEREQUEST_H_