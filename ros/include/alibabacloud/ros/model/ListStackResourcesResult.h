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

#ifndef ALIBABACLOUD_ROS_MODEL_LISTSTACKRESOURCESRESULT_H_
#define ALIBABACLOUD_ROS_MODEL_LISTSTACKRESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ros/ROSExport.h>

namespace AlibabaCloud
{
	namespace ROS
	{
		namespace Model
		{
			class ALIBABACLOUD_ROS_EXPORT ListStackResourcesResult : public ServiceResult
			{
			public:
				struct Resource
				{
					std::string status;
					std::string logicalResourceId;
					std::string physicalResourceId;
					std::string statusReason;
					std::string createTime;
					std::string updateTime;
					std::string resourceType;
					std::string stackName;
					std::string stackId;
				};


				ListStackResourcesResult();
				explicit ListStackResourcesResult(const std::string &payload);
				~ListStackResourcesResult();
				std::vector<Resource> getResources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Resource> resources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_LISTSTACKRESOURCESRESULT_H_