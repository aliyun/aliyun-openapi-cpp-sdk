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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBELIFECYCLEHOOKSREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBELIFECYCLEHOOKSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeLifecycleHooksRequest : public RpcServiceRequest
			{

			public:
				DescribeLifecycleHooksRequest();
				~DescribeLifecycleHooksRequest();

				std::string getLifecycleHookName()const;
				void setLifecycleHookName(const std::string& lifecycleHookName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::vector<std::string> getLifecycleHookId()const;
				void setLifecycleHookId(const std::vector<std::string>& lifecycleHookId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string lifecycleHookName_;
				std::string resourceOwnerAccount_;
				std::string scalingGroupId_;
				std::vector<std::string> lifecycleHookId_;
				std::string ownerAccount_;
				int pageSize_;
				long ownerId_;
				int pageNumber_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBELIFECYCLEHOOKSREQUEST_H_