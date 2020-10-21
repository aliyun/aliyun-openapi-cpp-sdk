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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYSTATISTICSREQUEST_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYSTATISTICSREQUEST_H_

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
			class ALIBABACLOUD_SGW_EXPORT DescribeGatewayStatisticsRequest : public RpcServiceRequest
			{

			public:
				DescribeGatewayStatisticsRequest();
				~DescribeGatewayStatisticsRequest();

				std::string getGatewayCategory()const;
				void setGatewayCategory(const std::string& gatewayCategory);
				std::string getGatewayLocation()const;
				void setGatewayLocation(const std::string& gatewayLocation);
				long getStartTimestamp()const;
				void setStartTimestamp(long startTimestamp);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getEndTimestamp()const;
				void setEndTimestamp(long endTimestamp);
				std::string getTargetAccountId()const;
				void setTargetAccountId(const std::string& targetAccountId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);

            private:
				std::string gatewayCategory_;
				std::string gatewayLocation_;
				long startTimestamp_;
				std::string accessKeyId_;
				long endTimestamp_;
				std::string targetAccountId_;
				std::string securityToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYSTATISTICSREQUEST_H_