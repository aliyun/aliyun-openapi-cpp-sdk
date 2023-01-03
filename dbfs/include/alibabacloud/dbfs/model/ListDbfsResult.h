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

#ifndef ALIBABACLOUD_DBFS_MODEL_LISTDBFSRESULT_H_
#define ALIBABACLOUD_DBFS_MODEL_LISTDBFSRESULT_H_

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
			class ALIBABACLOUD_DBFS_EXPORT ListDbfsResult : public ServiceResult
			{
			public:
				struct Info
				{
					struct SnapshotInfo
					{
						int snapshotCount;
						long totalSize;
						std::string linkId;
						std::string policyId;
					};
					struct TagList
					{
						std::string tagKey;
						long id;
						std::string tagValue;
					};
					struct EcsListItem
					{
						std::string ecsId;
					};
					struct EbsListItem
					{
						int sizeG;
						std::string ebsId;
					};
					std::string category;
					std::string createdTime;
					std::string kMSKeyId;
					std::vector<Info::EcsListItem> ecsList;
					int sizeG;
					std::string fsId;
					std::string dBFSClusterId;
					bool encryption;
					std::string lastUmountTime;
					std::vector<Info::EbsListItem> ebsList;
					int raidStrip;
					std::string lastMountTime;
					std::string instanceType;
					std::vector<Info::TagList> tags;
					std::string status;
					std::string lastFailed;
					std::string zoneId;
					bool enableRaid;
					std::string performanceLevel;
					std::string payType;
					SnapshotInfo snapshotInfo;
					std::string fsName;
					std::string usedScene;
					std::string regionId;
					int attachNodeNumber;
				};


				ListDbfsResult();
				explicit ListDbfsResult(const std::string &payload);
				~ListDbfsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Info> getDBFSInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Info> dBFSInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_LISTDBFSRESULT_H_