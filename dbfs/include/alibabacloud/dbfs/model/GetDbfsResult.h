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

#ifndef ALIBABACLOUD_DBFS_MODEL_GETDBFSRESULT_H_
#define ALIBABACLOUD_DBFS_MODEL_GETDBFSRESULT_H_

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
			class ALIBABACLOUD_DBFS_EXPORT GetDbfsResult : public ServiceResult
			{
			public:
				struct DBFSInfo
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
						int id;
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
					std::string description;
					std::string category;
					std::string createdTime;
					std::string kMSKeyId;
					std::vector<EcsListItem> ecsList;
					int sizeG;
					std::string fsId;
					std::string dBFSClusterId;
					bool encryption;
					std::string lastUmountTime;
					std::vector<EbsListItem> ebsList;
					int raidStrip;
					std::string lastMountTime;
					std::string instanceType;
					std::vector<TagList> tags;
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


				GetDbfsResult();
				explicit GetDbfsResult(const std::string &payload);
				~GetDbfsResult();
				DBFSInfo getDBFSInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				DBFSInfo dBFSInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_GETDBFSRESULT_H_