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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBEACCESSPOINTSRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBEACCESSPOINTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT DescribeAccessPointsResult : public ServiceResult
			{
			public:
				struct AccessPoint
				{
					struct PosixUser
					{
						int posixGroupId;
						int posixUserId;
						std::vector<std::string> posixSecondaryGroupIds;
					};
					struct RootPathPermission
					{
						long ownerUserId;
						std::string permission;
						long ownerGroupId;
					};
					std::string status;
					std::string modifyTime;
					std::string rootPath;
					std::string domainName;
					std::string createTime;
					std::string vSwitchId;
					PosixUser posixUser;
					bool enabledRam;
					std::string accessPointName;
					std::string vpcId;
					RootPathPermission rootPathPermission;
					std::string accessGroup;
					std::string accessPointId;
					std::string fileSystemId;
					std::string aRN;
					std::string rootPathStatus;
				};


				DescribeAccessPointsResult();
				explicit DescribeAccessPointsResult(const std::string &payload);
				~DescribeAccessPointsResult();
				std::vector<AccessPoint> getAccessPoints()const;
				int getTotalCount()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AccessPoint> accessPoints_;
				int totalCount_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBEACCESSPOINTSRESULT_H_