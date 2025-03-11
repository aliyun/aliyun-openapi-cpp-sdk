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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSDBCLUSTERRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSDBCLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeDrdsDBClusterResult : public ServiceResult
			{
			public:
				struct DbInstance
				{
					struct Endpoint
					{
						int readWeight;
						std::string nodeIds;
						std::string endpointId;
					};
					struct DBNode
					{
						std::string dBNodeStatus;
						std::string zoneId;
						std::string dBNodeRole;
						std::string dBNodeId;
					};
					std::string dbInstType;
					std::string engineVersion;
					std::string dBInstanceStatus;
					int port;
					std::string payType;
					std::vector<Endpoint> endpoints;
					std::vector<DBNode> dBNodes;
					std::string dBInstanceId;
					std::string networkType;
					std::string readMode;
					std::string rdsInstType;
					std::string expireTime;
					std::string remainDays;
					std::string engine;
				};


				DescribeDrdsDBClusterResult();
				explicit DescribeDrdsDBClusterResult(const std::string &payload);
				~DescribeDrdsDBClusterResult();
				DbInstance getDbInstance()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				DbInstance dbInstance_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSDBCLUSTERRESULT_H_