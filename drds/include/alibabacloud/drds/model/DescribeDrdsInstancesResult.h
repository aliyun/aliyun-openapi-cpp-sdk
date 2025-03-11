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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCESRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCESRESULT_H_

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
			class ALIBABACLOUD_DRDS_EXPORT DescribeDrdsInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct Vip
					{
						std::string type;
						std::string vpcId;
						std::string port;
						std::string iP;
						std::string dns;
						std::string vswitchId;
					};
					std::string instanceSpec;
					std::string description;
					std::string resourceGroupId;
					long expireDate;
					std::string label;
					std::string instanceSeries;
					std::string productVersion;
					std::string drdsInstanceId;
					long version;
					std::string networkType;
					std::string instRole;
					std::string commodityCode;
					std::vector<std::string> readOnlyDBInstanceIds;
					std::string status;
					std::string zoneId;
					long createTime;
					std::string machineType;
					std::string versionAction;
					std::string series;
					std::string type;
					std::string vpcId;
					std::string masterInstanceId;
					std::string orderInstanceId;
					std::string vpcCloudInstanceId;
					std::string regionId;
					std::vector<Instance::Vip> vips;
				};


				DescribeDrdsInstancesResult();
				explicit DescribeDrdsInstancesResult(const std::string &payload);
				~DescribeDrdsInstancesResult();
				std::vector<Instance> getInstances()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				int pageSize_;
				int pageNumber_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCESRESULT_H_