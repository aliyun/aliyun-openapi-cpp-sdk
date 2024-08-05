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

#ifndef ALIBABACLOUD_ARMS_MODEL_DESCRIBEIMROBOTSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_DESCRIBEIMROBOTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT DescribeIMRobotsResult : public ServiceResult
			{
			public:
				struct PageBean
				{
					struct IMRobots
					{
						struct DispatchRule
						{
							long id;
							std::string name;
						};
						std::string type;
						std::string dingSignKey;
						std::vector<IMRobots::DispatchRule> dispatchRules;
						float robotId;
						std::string robotName;
						std::string robotAddr;
						std::string createTime;
						std::string dailyNocTime;
						bool dailyNoc;
					};
					long size;
					long total;
					long page;
					std::vector<IMRobots> alertIMRobots;
				};


				DescribeIMRobotsResult();
				explicit DescribeIMRobotsResult(const std::string &payload);
				~DescribeIMRobotsResult();
				PageBean getPageBean()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageBean pageBean_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_DESCRIBEIMROBOTSRESULT_H_