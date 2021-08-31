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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTCLUSTERMEMBERSRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTCLUSTERMEMBERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ListClusterMembersResult : public ServiceResult
			{
			public:
				struct ClusterMemberPage
				{
					struct ClusterMember
					{
						int status;
						std::string clusterId;
						long createTime;
						long updateTime;
						std::string ecuId;
						std::string clusterMemberId;
						std::string ecsId;
					};
					std::vector<ClusterMember> clusterMemberList;
					int pageSize;
					int currentPage;
					int totalSize;
				};


				ListClusterMembersResult();
				explicit ListClusterMembersResult(const std::string &payload);
				~ListClusterMembersResult();
				std::string getMessage()const;
				ClusterMemberPage getClusterMemberPage()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				ClusterMemberPage clusterMemberPage_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTCLUSTERMEMBERSRESULT_H_