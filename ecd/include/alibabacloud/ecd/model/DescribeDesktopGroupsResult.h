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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPGROUPSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPGROUPSRESULT_H_

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
			class ALIBABACLOUD_ECD_EXPORT DescribeDesktopGroupsResult : public ServiceResult
			{
			public:
				struct DesktopGroup
				{
					int systemDiskSize;
					long bindAmount;
					long connectDuration;
					long memory;
					std::string desktopGroupName;
					int cpu;
					bool volumeEncryptionEnabled;
					std::string creator;
					std::string ownBundleId;
					std::string directoryType;
					long ownType;
					long loadPolicy;
					int version;
					std::string osType;
					long keepDuration;
					std::string expiredTime;
					int maxDesktopsCount;
					std::string imageId;
					long idleDisconnectDuration;
					std::string officeSiteName;
					long resetType;
					float gpuCount;
					int minDesktopsCount;
					std::string dataDiskCategory;
					std::string ownBundleName;
					int status;
					std::string policyGroupId;
					std::string comments;
					std::string createTime;
					std::string officeSiteType;
					float ratioThreshold;
					std::string policyGroupName;
					std::string payType;
					std::string systemDiskCategory;
					std::string officeSiteId;
					int endUserCount;
					std::string desktopGroupId;
					std::string directoryId;
					std::string gpuSpec;
					long stopDuration;
					std::string protocolType;
					std::string volumeEncryptionKey;
					std::string dataDiskSize;
					int buyDesktopsCount;
				};


				DescribeDesktopGroupsResult();
				explicit DescribeDesktopGroupsResult(const std::string &payload);
				~DescribeDesktopGroupsResult();
				std::vector<DesktopGroup> getDesktopGroups()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DesktopGroup> desktopGroups_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPGROUPSRESULT_H_