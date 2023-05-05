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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribeDesktopsResult : public ServiceResult
			{
			public:
				struct Desktop
				{
					struct FotaUpdate
					{
						long size;
						std::string currentAppVersion;
						std::string releaseNote;
						std::string newAppVersion;
					};
					struct Disk
					{
						std::string diskType;
						std::string performanceLevel;
						int diskSize;
						std::string diskId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct Session
					{
						std::string endUserId;
						std::string externalUserName;
						std::string establishmentTime;
					};
					bool supportHibernation;
					std::string snapshotPolicyId;
					std::string platform;
					long memory;
					std::string desktopName;
					int cpu;
					std::string directoryType;
					FotaUpdate fotaUpdate;
					std::string osType;
					std::string expiredTime;
					std::string imageId;
					long gpuCategory;
					std::string connectionStatus;
					std::vector<Desktop::Tag> tags;
					std::string hostName;
					std::vector<Desktop::Session> sessions;
					std::string officeSiteType;
					std::string startTime;
					std::string bundleName;
					std::string desktopId;
					std::vector<std::string> endUserIds;
					std::vector<std::string> policyGroupIdList;
					std::string gpuDriverVersion;
					std::string directoryId;
					std::string creationTime;
					std::vector<Desktop::Disk> disks;
					std::string snapshotPolicyName;
					std::string dataDiskSize;
					std::string managementFlag;
					long downgradedTimes;
					std::string sessionType;
					int systemDiskSize;
					int bindAmount;
					bool volumeEncryptionEnabled;
					std::string networkInterfaceId;
					bool hibernationOptionsConfigured;
					std::string zoneType;
					std::string networkInterfaceIp;
					std::string officeSiteName;
					float gpuCount;
					std::string dataDiskCategory;
					std::string officeSiteVpcType;
					std::string progress;
					std::vector<std::string> policyGroupNameList;
					std::string policyGroupId;
					std::string policyGroupName;
					std::vector<std::string> managementFlags;
					std::string desktopStatus;
					std::string systemDiskCategory;
					std::string officeSiteId;
					std::string desktopGroupId;
					std::string bundleId;
					std::string desktopType;
					std::string chargeType;
					std::string protocolType;
					std::string gpuSpec;
					std::string volumeEncryptionKey;
					long downgradeQuota;
				};


				DescribeDesktopsResult();
				explicit DescribeDesktopsResult(const std::string &payload);
				~DescribeDesktopsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<Desktop> getDesktops()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<Desktop> desktops_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPSRESULT_H_