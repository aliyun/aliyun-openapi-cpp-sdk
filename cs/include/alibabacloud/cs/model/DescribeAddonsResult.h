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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBEADDONSRESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBEADDONSRESULT_H_

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
			class ALIBABACLOUD_CS_EXPORT DescribeAddonsResult : public ServiceResult
			{
			public:
				struct StandardComponents
				{
					struct Addon_name
					{
						std::string required;
						std::string version;
						std::string config;
						bool disabled;
						std::string name;
					};
					Addon_name addon_name;
				};
				struct ComponentGroupsItem
				{
					struct ItemsItem
					{
						std::string required;
						std::string version;
						std::string config;
						bool disabled;
						std::string name;
					};
					std::string group_name;
					std::vector<ComponentGroupsItem::ItemsItem> items;
					std::vector<std::string> _default;
				};


				DescribeAddonsResult();
				explicit DescribeAddonsResult(const std::string &payload);
				~DescribeAddonsResult();
				StandardComponents getStandardComponents()const;
				std::vector<ComponentGroupsItem> getComponentGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				StandardComponents standardComponents_;
				std::vector<ComponentGroupsItem> componentGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBEADDONSRESULT_H_