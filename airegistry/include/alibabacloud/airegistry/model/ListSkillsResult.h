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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_LISTSKILLSRESULT_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_LISTSKILLSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/airegistry/AIRegistryExport.h>

namespace AlibabaCloud
{
	namespace AIRegistry
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREGISTRY_EXPORT ListSkillsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct PageItem
					{
						std::string draftMode;
						std::string editingVersion;
						std::string owner;
						std::string description;
						std::string bizTags;
						std::string labels;
						std::string from;
						std::string name;
						std::string scope;
						long updateTime;
						bool enable;
						std::string namespaceId;
						std::string reviewingVersion;
						int onlineCnt;
						bool writeable;
						long downloadCount;
					};
					int totalCount;
					int pageNumber;
					std::vector<PageItem> pageItems;
					int pagesAvailable;
				};


				ListSkillsResult();
				explicit ListSkillsResult(const std::string &payload);
				~ListSkillsResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_LISTSKILLSRESULT_H_