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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSFULLSTATUSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSFULLSTATUSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeDisksFullStatusResult : public ServiceResult
			{
			public:
				struct DiskFullStatusType
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
					struct DiskEventType
					{
						struct EventType
						{
							int code;
							std::string name;
						};
						EventType eventType;
						std::string eventTime;
						std::string impactLevel;
						std::string eventId;
						std::string eventEndTime;
					};
					Status status;
					std::string instanceId;
					std::vector<DiskFullStatusType::DiskEventType> diskEventSet;
					std::string device;
					HealthStatus healthStatus;
					std::string diskId;
				};


				DescribeDisksFullStatusResult();
				explicit DescribeDisksFullStatusResult(const std::string &payload);
				~DescribeDisksFullStatusResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DiskFullStatusType> getDiskFullStatusSet()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<DiskFullStatusType> diskFullStatusSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSFULLSTATUSRESULT_H_