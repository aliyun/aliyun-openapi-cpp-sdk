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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCESRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string moduleStackVersion;
					bool isHa;
					std::string createdTime;
					std::string resourceGroupId;
					std::string masterInstanceType;
					bool isDeletionProtection;
					int moduleId;
					std::string networkType;
					std::string coreInstanceType;
					std::string clusterName;
					std::string masterDiskType;
					std::vector<Instance::Tag> tags;
					std::string engine;
					std::string status;
					std::string parentId;
					std::string majorVersion;
					std::string coreDiskCount;
					std::string expireTimeUTC;
					int masterDiskSize;
					std::string zoneId;
					std::string clusterId;
					std::string instanceId;
					int coreNodeCount;
					std::string coldStorageStatus;
					std::string createdTimeUTC;
					int duration;
					std::string payType;
					std::string clusterType;
					std::string vswitchId;
					int masterNodeCount;
					std::string instanceName;
					std::string vpcId;
					bool autoRenewal;
					std::string coreDiskType;
					std::string regionId;
					std::string expireTime;
					std::string backupStatus;
					int coreDiskSize;
				};


				DescribeInstancesResult();
				explicit DescribeInstancesResult(const std::string &payload);
				~DescribeInstancesResult();
				std::vector<Instance> getInstances()const;
				long getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				long totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCESRESULT_H_