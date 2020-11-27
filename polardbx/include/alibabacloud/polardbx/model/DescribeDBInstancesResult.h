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
					std::string status;
					std::string description;
					std::string zoneId;
					int nodeCount;
					std::string vPCId;
					std::vector<std::string> readDBInstances;
					std::string createTime;
					bool expired;
					std::string payType;
					std::string dBType;
					std::string lockMode;
					std::vector<DBInstance::PolarDBXNode> nodes;
					int storageUsed;
					std::string nodeClass;
					std::string dBVersion;
					std::string type;
					std::string network;
					std::string commodityCode;
					std::string id;
					std::string regionId;
					std::string expireTime;
					std::string lockReason;
					std::string engine;
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