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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT CreateAutoProvisioningGroupResult : public ServiceResult
			{
			public:
				struct LaunchResult
				{
					std::string zoneId;
					int amount;
					std::string errorMsg;
					std::string errorCode;
					std::string instanceType;
					std::vector<std::string> instanceIds;
					std::string spotStrategy;
				};


				CreateAutoProvisioningGroupResult();
				explicit CreateAutoProvisioningGroupResult(const std::string &payload);
				~CreateAutoProvisioningGroupResult();
				std::string getAutoProvisioningGroupId()const;
				std::vector<LaunchResult> getLaunchResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string autoProvisioningGroupId_;
				std::vector<LaunchResult> launchResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPRESULT_H_