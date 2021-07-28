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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEEVENTMONITORLISTREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEEVENTMONITORLISTREQUEST_H_

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
			class ALIBABACLOUD_RETAILCLOUD_EXPORT DescribeEventMonitorListRequest : public RpcServiceRequest
			{

			public:
				DescribeEventMonitorListRequest();
				~DescribeEventMonitorListRequest();

				std::string getEventLevel()const;
				void setEventLevel(const std::string& eventLevel);
				long getAppId()const;
				void setAppId(long appId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getPodName()const;
				void setPodName(const std::string& podName);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::string getEventType()const;
				void setEventType(const std::string& eventType);
				long getEnvId()const;
				void setEnvId(long envId);
				long getStartTime()const;
				void setStartTime(long startTime);
				int getPageNum()const;
				void setPageNum(int pageNum);

            private:
				std::string eventLevel_;
				long appId_;
				int pageSize_;
				std::string podName_;
				long endTime_;
				std::string eventType_;
				long envId_;
				long startTime_;
				int pageNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEEVENTMONITORLISTREQUEST_H_