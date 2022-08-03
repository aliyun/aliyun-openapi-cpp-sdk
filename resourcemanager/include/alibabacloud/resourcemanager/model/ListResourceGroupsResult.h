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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTRESOURCEGROUPSRESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTRESOURCEGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcemanager/ResourceManagerExport.h>

namespace AlibabaCloud
{
	namespace ResourceManager
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ListResourceGroupsResult : public ServiceResult
			{
			public:
				struct ResourceGroup
				{
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					std::string accountId;
					std::string displayName;
					std::string id;
					std::string createDate;
					std::vector<ResourceGroup::Tag> tags;
					std::string name;
				};


				ListResourceGroupsResult();
				explicit ListResourceGroupsResult(const std::string &payload);
				~ListResourceGroupsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ResourceGroup> getResourceGroups()const;
				std::string getResourceGroupListAclMode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ResourceGroup> resourceGroups_;
				std::string resourceGroupListAclMode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTRESOURCEGROUPSRESULT_H_