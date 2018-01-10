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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESFULLSTATUSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESFULLSTATUSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeInstancesFullStatusResult : public ServiceResult
			{
			public:
				struct InstanceFullStatusType
				{
					struct Status
					{
						int code;
						std::string name;
					};
					struct HealthStatus
					{
						int code;
						std::string name;
					};
					struct ScheduledSystemEventType
					{
						struct EventCycleStatus
						{
							int code;
							std::string name;
						};
						struct EventType
						{
							int code;
							std::string name;
						};
						std::vector<EventCycleStatus> eventCycleStatus;
						std::string eventPublishTime;
						std::vector<EventType> eventType;
						std::string eventId;
						std::string notBefore;
					};
					std::vector<Status> status;
					std::string instanceId;
					std::vector<HealthStatus> healthStatus;
					std::vector<InstanceFullStatusType::ScheduledSystemEventType> scheduledSystemEventSet;
				};


				DescribeInstancesFullStatusResult();
				explicit DescribeInstancesFullStatusResult(const std::string &payload);
				~DescribeInstancesFullStatusResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<InstanceFullStatusType> getInstanceFullStatusSet()const;
				void setInstanceFullStatusSet(const std::vector<InstanceFullStatusType>& instanceFullStatusSet);

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<InstanceFullStatusType> instanceFullStatusSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESFULLSTATUSRESULT_H_