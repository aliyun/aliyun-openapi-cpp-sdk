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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCESRESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCESRESULT_H_

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
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeDBInstancesResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					struct PolarDBXNode
					{
						std::string classCode;
						std::string zoneId;
						std::string id;
						std::string regionId;
					};
					struct TagSetItem
					{
						std::string value;
						std::string key;
					};
					std::string topologyType;
					std::string description;
					std::string resourceGroupId;
					std::vector<std::string> readDBInstances;
					bool containBinlogX;
					std::string cnNodeClassCode;
					std::string dBType;
					std::string nodeClass;
					std::string tertiaryZone;
					std::string dBVersion;
					std::vector<std::string> columnarReadDBInstances;
					std::string gdnRole;
					int dnNodeCount;
					std::vector<DBInstance::TagSetItem> tagSet;
					std::string network;
					std::string commodityCode;
					std::string primaryZone;
					std::string cpuType;
					std::string lockReason;
					std::string engine;
					std::string dBInstanceName;
					bool supportBinlogX;
					std::string status;
					int nodeCount;
					std::string zoneId;
					std::string vPCId;
					std::string createTime;
					std::string minorVersion;
					std::string cdcInstanceName;
					bool expired;
					std::string payType;
					std::string lockMode;
					std::vector<DBInstance::PolarDBXNode> nodes;
					long storageUsed;
					int cnNodeCount;
					std::string secondaryZone;
					std::string series;
					std::string type;
					std::string dnNodeClassCode;
					std::string columnarInstanceName;
					std::string regionId;
					std::string id;
					std::string expireTime;
					bool isInGdn;
				};


				DescribeDBInstancesResult();
				explicit DescribeDBInstancesResult(const std::string &payload);
				~DescribeDBInstancesResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotalNumber()const;
				std::vector<DBInstance> getDBInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int totalNumber_;
				std::vector<DBInstance> dBInstances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCESRESULT_H_