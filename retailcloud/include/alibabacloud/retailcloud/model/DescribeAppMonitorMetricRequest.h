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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEAPPMONITORMETRICREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEAPPMONITORMETRICREQUEST_H_

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
			class ALIBABACLOUD_RETAILCLOUD_EXPORT DescribeAppMonitorMetricRequest : public RpcServiceRequest
			{

			public:
				DescribeAppMonitorMetricRequest();
				~DescribeAppMonitorMetricRequest();

				std::string getDeployOrderId()const;
				void setDeployOrderId(const std::string& deployOrderId);
				std::string getMetric()const;
				void setMetric(const std::string& metric);
				long getAppId()const;
				void setAppId(long appId);
				std::string getPodName()const;
				void setPodName(const std::string& podName);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getEnvId()const;
				void setEnvId(long envId);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getType()const;
				void setType(const std::string& type);

            private:
				std::string deployOrderId_;
				std::string metric_;
				long appId_;
				std::string podName_;
				long endTime_;
				long envId_;
				long startTime_;
				std::string type_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEAPPMONITORMETRICREQUEST_H_