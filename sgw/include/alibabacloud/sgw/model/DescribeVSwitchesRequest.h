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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBEVSWITCHESREQUEST_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBEVSWITCHESREQUEST_H_

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
			class ALIBABACLOUD_SGW_EXPORT DescribeVSwitchesRequest : public RpcServiceRequest
			{

			public:
				DescribeVSwitchesRequest();
				~DescribeVSwitchesRequest();

				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getStorageBundleId()const;
				void setStorageBundleId(const std::string& storageBundleId);

            private:
				int pageNumber_;
				std::string accessKeyId_;
				std::string vSwitchId_;
				std::string securityToken_;
				std::string vpcId_;
				int pageSize_;
				std::string storageBundleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBEVSWITCHESREQUEST_H_