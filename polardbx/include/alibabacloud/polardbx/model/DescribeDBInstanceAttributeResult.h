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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeDBInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					struct DBNode
					{
						std::string nodeClass;
						std::string zoneId;
						std::string computeNodeId;
						std::string id;
						std::string regionId;
						std::string dataNodeId;
					};
					struct ConnAddr
					{
						std::string type;
						std::string vPCId;
						std::string vSwitchId;
						long port;
						std::string vpcInstanceId;
						std::string connectionString;
					};
					struct TagSetItem
					{
						std::string value;
						std::string key;
					};
					std::string expireDate;
					std::string resourceGroupId;
					bool differentDNSpec;
					std::vector<std::string> readDBInstances;
					std::string port;
					std::string dBInstanceType;
					std::string cnNodeClassCode;
					std::string dBType;
					std::string specCategory;
					std::string tertiaryZone;
					std::string dBVersion;
					std::vector<std::string> columnarReadDBInstances;
					std::vector<DBNode> dBNodes;
					std::string network;
					int dBNodeCount;
					std::string primaryZone;
					std::string engine;
					std::string status;
					std::string vPCId;
					std::string vSwitchId;
					bool canNotCreateColumnar;
					std::string expired;
					std::string payType;
					std::string lockMode;
					long storageUsed;
					std::vector<std::string> lTSVersions;
					std::string dnNodeClassCode;
					std::string id;
					std::string connectionString;
					std::string topologyType;
					std::string description;
					std::vector<ConnAddr> connAddrs;
					std::string maintainEndTime;
					int dnNodeCount;
					std::vector<TagSetItem> tagSet;
					std::string rightsSeparationStatus;
					std::string commodityCode;
					std::string maintainStartTime;
					std::string zoneId;
					std::string createTime;
					std::string minorVersion;
					std::string latestMinorVersion;
					bool rightsSeparationEnabled;
					std::string dBNodeClass;
					int cnNodeCount;
					std::string secondaryZone;
					std::string series;
					std::string type;
					std::string columnarInstanceName;
					std::string regionId;
					int kindCode;
				};


				DescribeDBInstanceAttributeResult();
				explicit DescribeDBInstanceAttributeResult(const std::string &payload);
				~DescribeDBInstanceAttributeResult();
				DBInstance getDBInstance()const;

			protected:
				void parse(const std::string &payload);
			private:
				DBInstance dBInstance_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_