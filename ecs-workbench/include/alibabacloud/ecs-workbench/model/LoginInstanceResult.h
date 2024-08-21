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

#ifndef ALIBABACLOUD_ECS_WORKBENCH_MODEL_LOGININSTANCERESULT_H_
#define ALIBABACLOUD_ECS_WORKBENCH_MODEL_LOGININSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs-workbench/Ecs_workbenchExport.h>

namespace AlibabaCloud
{
	namespace Ecs_workbench
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_WORKBENCH_EXPORT LoginInstanceResult : public ServiceResult
			{
			public:
				struct Root
				{
					struct DisposableAccount
					{
						std::string loginFormActionUrl;
						std::string loginUrl;
					};
					struct SessionControl
					{
						std::string baseUrl;
					};
					struct InstanceLoginInfoListItem
					{
						struct InstanceLoginView
						{
							std::string defaultViewUrl;
						};
						InstanceLoginView instanceLoginView;
						std::string instanceLoginToken;
						std::string instanceId;
						bool loginSuccess;
					};
					DisposableAccount disposableAccount;
					SessionControl sessionControl;
					std::vector<InstanceLoginInfoListItem> instanceLoginInfoList;
				};


				LoginInstanceResult();
				explicit LoginInstanceResult(const std::string &payload);
				~LoginInstanceResult();
				Root getRoot()const;
				std::string getMessage()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Root root_;
				std::string message_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_WORKBENCH_MODEL_LOGININSTANCERESULT_H_