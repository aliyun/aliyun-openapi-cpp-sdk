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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_DELETERESOURCEGROUPRESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_DELETERESOURCEGROUPRESULT_H_

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
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT DeleteResourceGroupResult : public ServiceResult
			{
			public:
				struct ResourceGroup
				{
					struct RegionStatus
					{
						std::string status;
						std::string regionId;
					};
					std::string status;
					std::vector<RegionStatus> regionStatuses;
					std::string accountId;
					std::string displayName;
					std::string id;
					std::string createDate;
					std::string name;
				};


				DeleteResourceGroupResult();
				explicit DeleteResourceGroupResult(const std::string &payload);
				~DeleteResourceGroupResult();
				ResourceGroup getResourceGroup()const;

			protected:
				void parse(const std::string &payload);
			private:
				ResourceGroup resourceGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_DELETERESOURCEGROUPRESULT_H_