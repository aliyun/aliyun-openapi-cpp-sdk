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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBECLOUDASSISTANTSTATUSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBECLOUDASSISTANTSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeCloudAssistantStatusResult : public ServiceResult
			{
			public:
				struct InstanceCloudAssistantStatus
				{
					std::string cloudAssistantVersion;
					bool supportSessionManager;
					std::string instanceId;
					long invocationCount;
					std::string oSType;
					std::string cloudAssistantStatus;
					std::string lastHeartbeatTime;
					std::string lastInvokedTime;
					long activeTaskCount;
				};


				DescribeCloudAssistantStatusResult();
				explicit DescribeCloudAssistantStatusResult(const std::string &payload);
				~DescribeCloudAssistantStatusResult();
				long getTotalCount()const;
				long getPageSize()const;
				std::string getNextToken()const;
				std::vector<InstanceCloudAssistantStatus> getInstanceCloudAssistantStatusSet()const;
				long getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				std::string nextToken_;
				std::vector<InstanceCloudAssistantStatus> instanceCloudAssistantStatusSet_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBECLOUDASSISTANTSTATUSRESULT_H_