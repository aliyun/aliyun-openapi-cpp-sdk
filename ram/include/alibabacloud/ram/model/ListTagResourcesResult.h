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

#ifndef ALIBABACLOUD_RAM_MODEL_LISTTAGRESOURCESRESULT_H_
#define ALIBABACLOUD_RAM_MODEL_LISTTAGRESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ram/RamExport.h>

namespace AlibabaCloud
{
	namespace Ram
	{
		namespace Model
		{
			class ALIBABACLOUD_RAM_EXPORT ListTagResourcesResult : public ServiceResult
			{
			public:
				struct TagResourcesItem
				{
					std::string resourceName;
					std::string tagKey;
					std::string resourceType;
					std::string tagValue;
				};


				ListTagResourcesResult();
				explicit ListTagResourcesResult(const std::string &payload);
				~ListTagResourcesResult();
				std::string getNextToken()const;
				std::vector<TagResourcesItem> getTagResources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<TagResourcesItem> tagResources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_LISTTAGRESOURCESRESULT_H_