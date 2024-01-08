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

#ifndef ALIBABACLOUD_RESOURCESHARING_MODEL_LISTSHAREDRESOURCESRESULT_H_
#define ALIBABACLOUD_RESOURCESHARING_MODEL_LISTSHAREDRESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcesharing/ResourceSharingExport.h>

namespace AlibabaCloud
{
	namespace ResourceSharing
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCESHARING_EXPORT ListSharedResourcesResult : public ServiceResult
			{
			public:
				struct SharedResource
				{
					std::string resourceShareId;
					std::string resourceId;
					std::string createTime;
					std::string updateTime;
					std::string resourceStatusMessage;
					std::string resourceStatus;
					std::string resourceType;
				};


				ListSharedResourcesResult();
				explicit ListSharedResourcesResult(const std::string &payload);
				~ListSharedResourcesResult();
				std::string getNextToken()const;
				std::vector<SharedResource> getSharedResources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<SharedResource> sharedResources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCESHARING_MODEL_LISTSHAREDRESOURCESRESULT_H_