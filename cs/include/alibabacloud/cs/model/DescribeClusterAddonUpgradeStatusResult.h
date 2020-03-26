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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERADDONUPGRADESTATUSRESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERADDONUPGRADESTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT DescribeClusterAddonUpgradeStatusResult : public ServiceResult
			{
			public:
				struct ComponentId
				{
					struct Addon_info
					{
						std::string message;
						std::string version;
						std::string ready_to_upgrade;
						std::string component_name;
						std::string yaml;
					};
					struct Tasks
					{
						std::string status;
						std::string master_url;
						std::string finished_at;
						std::string created_at;
					};
					Tasks tasks;
					std::string _template;
					bool can_upgrade;
					Addon_info addon_info;
					std::string changed;
				};


				DescribeClusterAddonUpgradeStatusResult();
				explicit DescribeClusterAddonUpgradeStatusResult(const std::string &payload);
				~DescribeClusterAddonUpgradeStatusResult();
				ComponentId getComponentId()const;

			protected:
				void parse(const std::string &payload);
			private:
				ComponentId componentId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERADDONUPGRADESTATUSRESULT_H_