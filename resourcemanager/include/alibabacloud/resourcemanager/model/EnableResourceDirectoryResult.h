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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_ENABLERESOURCEDIRECTORYRESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_ENABLERESOURCEDIRECTORYRESULT_H_

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
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT EnableResourceDirectoryResult : public ServiceResult
			{
			public:
				struct ResourceDirectory
				{
					std::string resourceDirectoryId;
					std::string masterAccountName;
					std::string rootFolderId;
					std::string createTime;
					std::string masterAccountId;
				};


				EnableResourceDirectoryResult();
				explicit EnableResourceDirectoryResult(const std::string &payload);
				~EnableResourceDirectoryResult();
				ResourceDirectory getResourceDirectory()const;

			protected:
				void parse(const std::string &payload);
			private:
				ResourceDirectory resourceDirectory_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_ENABLERESOURCEDIRECTORYRESULT_H_