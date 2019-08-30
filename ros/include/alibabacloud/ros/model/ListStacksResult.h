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

#ifndef ALIBABACLOUD_ROS_MODEL_LISTSTACKSRESULT_H_
#define ALIBABACLOUD_ROS_MODEL_LISTSTACKSRESULT_H_

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
			class ALIBABACLOUD_ROS_EXPORT ListStacksResult : public ServiceResult
			{
			public:
				struct Stack
				{
					std::string status;
					std::string statusReason;
					std::string parentStackId;
					std::string createTime;
					std::string updateTime;
					std::string regionId;
					bool disableRollback;
					std::string stackName;
					std::string stackId;
					int timeoutInMinutes;
				};


				ListStacksResult();
				explicit ListStacksResult(const std::string &payload);
				~ListStacksResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Stack> getStacks()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Stack> stacks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_LISTSTACKSRESULT_H_