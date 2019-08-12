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

#ifndef ALIBABACLOUD_ECS_MODEL_DETACHINSTANCERAMROLERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DETACHINSTANCERAMROLERESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DetachInstanceRamRoleResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct InstanceRamRoleSet
					{
						std::string ramRoleName;
						std::string instanceId;
					};
					std::string message;
					std::string instanceId;
					std::vector<Result::InstanceRamRoleSet> instanceRamRoleSets;
					std::string code;
					bool success;
				};


				DetachInstanceRamRoleResult();
				explicit DetachInstanceRamRoleResult(const std::string &payload);
				~DetachInstanceRamRoleResult();
				int getTotalCount()const;
				std::string getRamRoleName()const;
				int getFailCount()const;
				std::vector<Result> getDetachInstanceRamRoleResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string ramRoleName_;
				int failCount_;
				std::vector<Result> detachInstanceRamRoleResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DETACHINSTANCERAMROLERESULT_H_