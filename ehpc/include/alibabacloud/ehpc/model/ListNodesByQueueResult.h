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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTNODESBYQUEUERESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTNODESBYQUEUERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListNodesByQueueResult : public ServiceResult
			{
			public:
				struct NodeInfo
				{
					struct TotalResources
					{
						int memory;
						int cpu;
						int gpu;
					};
					struct UsedResources
					{
						int memory;
						int cpu;
						int gpu;
					};
					std::string status;
					std::string imageOwnerAlias;
					bool expired;
					std::string addTime;
					UsedResources usedResources;
					bool createdByEhpc;
					std::string createMode;
					std::string version;
					TotalResources totalResources;
					std::string expiredTime;
					std::string imageId;
					std::string id;
					std::string regionId;
					std::string lockReason;
					std::string hostName;
					std::string spotStrategy;
					std::string location;
				};


				ListNodesByQueueResult();
				explicit ListNodesByQueueResult(const std::string &payload);
				~ListNodesByQueueResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<NodeInfo> getNodes()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<NodeInfo> nodes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTNODESBYQUEUERESULT_H_