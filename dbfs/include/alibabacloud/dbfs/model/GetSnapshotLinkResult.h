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

#ifndef ALIBABACLOUD_DBFS_MODEL_GETSNAPSHOTLINKRESULT_H_
#define ALIBABACLOUD_DBFS_MODEL_GETSNAPSHOTLINKRESULT_H_

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
			class ALIBABACLOUD_DBFS_EXPORT GetSnapshotLinkResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct EcsListItem
					{
						std::string ecsId;
					};
					std::string status;
					int snapshotCount;
					std::string category;
					std::string fsName;
					std::vector<EcsListItem> ecsList;
					std::string fsId;
					long totalSize;
					int sourceSize;
					std::string linkId;
				};


				GetSnapshotLinkResult();
				explicit GetSnapshotLinkResult(const std::string &payload);
				~GetSnapshotLinkResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_GETSNAPSHOTLINKRESULT_H_