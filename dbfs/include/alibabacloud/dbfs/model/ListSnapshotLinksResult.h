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

#ifndef ALIBABACLOUD_DBFS_MODEL_LISTSNAPSHOTLINKSRESULT_H_
#define ALIBABACLOUD_DBFS_MODEL_LISTSNAPSHOTLINKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbfs/DBFSExport.h>

namespace AlibabaCloud
{
	namespace DBFS
	{
		namespace Model
		{
			class ALIBABACLOUD_DBFS_EXPORT ListSnapshotLinksResult : public ServiceResult
			{
			public:
				struct Info
				{
					struct EcsListItem
					{
						std::string ecsId;
					};
					std::string status;
					int snapshotCount;
					std::string fsName;
					std::vector<Info::EcsListItem> ecsList;
					std::string fsId;
					long totalSize;
					int sourceSize;
					std::string linkId;
				};


				ListSnapshotLinksResult();
				explicit ListSnapshotLinksResult(const std::string &payload);
				~ListSnapshotLinksResult();
				std::vector<Info> getSnapshotLinks()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Info> snapshotLinks_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_LISTSNAPSHOTLINKSRESULT_H_