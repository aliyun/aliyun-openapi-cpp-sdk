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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeDBInstancesResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct MongosAttribute
					{
						std::string nodeClass;
						std::string nodeDescription;
						std::string nodeId;
					};
					struct ShardAttribute
					{
						std::string nodeClass;
						std::string nodeDescription;
						int readonlyReplicas;
						int nodeStorage;
						std::string nodeId;
					};
					std::string resourceGroupId;
					std::string capacityUnit;
					std::string hiddenZoneId;
					std::string destroyTime;
					std::string dBInstanceType;
					std::vector<DBInstance::MongosAttribute> mongosList;
					std::string dBInstanceId;
					std::string networkType;
					std::string lastDowngradeTime;
					int dBInstanceStorage;
					std::vector<DBInstance::Tag> tags;
					std::string dBInstanceDescription;
					std::string engine;
					std::string engineVersion;
					std::string storageType;
					std::string dBInstanceStatus;
					std::string zoneId;
					std::string replicationFactor;
					std::string cloudType;
					std::string dBInstanceClass;
					std::vector<DBInstance::ShardAttribute> shardList;
					std::string lockMode;
					std::string secondaryZoneId;
					std::string releaseTime;
					std::string chargeType;
					std::string vpcAuthMode;
					std::string creationTime;
					std::string regionId;
					std::string expireTime;
					std::string kindCode;
					int backupRetentionPolicy;
				};


				DescribeDBInstancesResult();
				explicit DescribeDBInstancesResult(const std::string &payload);
				~DescribeDBInstancesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DBInstance> getDBInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<DBInstance> dBInstances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESRESULT_H_