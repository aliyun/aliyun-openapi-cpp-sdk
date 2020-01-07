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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEHISTORYEVENTSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEHISTORYEVENTSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeInstanceHistoryEventsResult : public ServiceResult
			{
			public:
				struct InstanceSystemEventType
				{
					struct EventType
					{
						int code;
						std::string name;
					};
					struct EventCycleStatus
					{
						int code;
						std::string name;
					};
					struct ExtendedAttribute
					{
						struct InactiveDisk
						{
							std::string deviceType;
							std::string releaseTime;
							std::string deviceSize;
							std::string creationTime;
							std::string deviceCategory;
						};
						std::string device;
						std::vector<InactiveDisk> inactiveDisks;
						std::string diskId;
					};
					std::string eventFinishTime;
					EventCycleStatus eventCycleStatus;
					std::string eventPublishTime;
					EventType eventType;
					std::string instanceId;
					ExtendedAttribute extendedAttribute;
					std::string eventId;
					std::string notBefore;
					std::string reason;
				};


				DescribeInstanceHistoryEventsResult();
				explicit DescribeInstanceHistoryEventsResult(const std::string &payload);
				~DescribeInstanceHistoryEventsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<InstanceSystemEventType> getInstanceSystemEventSet()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<InstanceSystemEventType> instanceSystemEventSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEHISTORYEVENTSRESULT_H_