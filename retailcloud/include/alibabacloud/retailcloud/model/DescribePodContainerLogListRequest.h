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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEPODCONTAINERLOGLISTREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEPODCONTAINERLOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT DescribePodContainerLogListRequest : public RpcServiceRequest
			{

			public:
				DescribePodContainerLogListRequest();
				~DescribePodContainerLogListRequest();

				int getLine()const;
				void setLine(int line);
				long getAppId()const;
				void setAppId(long appId);
				std::string getPodName()const;
				void setPodName(const std::string& podName);
				long getEnvId()const;
				void setEnvId(long envId);

            private:
				int line_;
				long appId_;
				std::string podName_;
				long envId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEPODCONTAINERLOGLISTREQUEST_H_