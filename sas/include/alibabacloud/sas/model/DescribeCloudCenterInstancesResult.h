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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBECLOUDCENTERINSTANCESRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBECLOUDCENTERINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeCloudCenterInstancesResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct Instance
				{
					long createdTime;
					std::string os;
					std::string vulStatus;
					std::string ip;
					std::string clientVersion;
					std::string intranetIp;
					std::string riskCount;
					int importance;
					int podCount;
					int autoSnapshotsLevel;
					std::string internetIp;
					std::string regionName;
					std::string clusterName;
					std::string status;
					int exposedStatus;
					std::string clientStatus;
					int safeEventCount;
					std::string instanceId;
					std::string clusterId;
					std::string osName;
					int healthCheckCount;
					int flag;
					std::string riskStatus;
					int vulCount;
					std::string groupId;
					std::string instanceName;
					std::string assetType;
					std::string uuid;
					std::string alarmStatus;
					std::string region;
					std::string vpcInstanceId;
					std::string tag;
					std::string regionId;
					std::string hcStatus;
				};


				DescribeCloudCenterInstancesResult();
				explicit DescribeCloudCenterInstancesResult(const std::string &payload);
				~DescribeCloudCenterInstancesResult();
				std::vector<Instance> getInstances()const;
				PageInfo getPageInfo()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				PageInfo pageInfo_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBECLOUDCENTERINSTANCESRESULT_H_