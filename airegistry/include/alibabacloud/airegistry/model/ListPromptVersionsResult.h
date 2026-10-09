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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_LISTPROMPTVERSIONSRESULT_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_LISTPROMPTVERSIONSRESULT_H_

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
			class ALIBABACLOUD_AIREGISTRY_EXPORT ListPromptVersionsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Item
					{
						std::string status;
						std::string version;
						std::string srcUser;
						std::string promptKey;
						long gmtModified;
						std::string commitMsg;
					};
					int totalCount;
					int pageNumber;
					std::vector<Item> pageItems;
					int pagesAvailable;
				};


				ListPromptVersionsResult();
				explicit ListPromptVersionsResult(const std::string &payload);
				~ListPromptVersionsResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_LISTPROMPTVERSIONSRESULT_H_