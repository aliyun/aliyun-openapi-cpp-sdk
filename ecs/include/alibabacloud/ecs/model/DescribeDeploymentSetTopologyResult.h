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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEPLOYMENTSETTOPOLOGYRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEPLOYMENTSETTOPOLOGYRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeDeploymentSetTopologyResult : public ServiceResult
			{
			public:
				struct Switch
				{
					struct Host
					{
						std::string hostId;
						std::vector<std::string> instanceIds;
					};
					std::vector<Switch::Host> hosts;
					std::string switchId;
				};
				struct Rack
				{
					struct Host2
					{
						std::string hostId;
						std::vector<std::string> instanceIds3;
					};
					std::string rackId;
					std::vector<Rack::Host2> hosts1;
				};


				DescribeDeploymentSetTopologyResult();
				explicit DescribeDeploymentSetTopologyResult(const std::string &payload);
				~DescribeDeploymentSetTopologyResult();
				std::vector<Switch> getSwitchs()const;
				std::vector<Rack> getRacks()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Switch> switchs_;
				std::vector<Rack> racks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEPLOYMENTSETTOPOLOGYRESULT_H_