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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCERESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCERESULT_H_

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
			class ALIBABACLOUD_DRDS_EXPORT DescribeDrdsInstanceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Vip
					{
						std::string type;
						std::string vpcId;
						bool removeWeight;
						std::string port;
						std::string dns;
						std::string vswitchId;
						long expireDays;
					};
					std::string instanceSpec;
					std::string description;
					long expireDate;
					std::string resourceGroupId;
					std::string label;
					std::string instanceSeries;
					std::string productVersion;
					int mysqlVersion;
					std::string drdsInstanceId;
					long version;
					std::string networkType;
					std::string instRole;
					std::string commodityCode;
					std::vector<std::string> readOnlyDBInstanceIds;
					std::string status;
					std::string storageType;
					std::string zoneId;
					long createTime;
					std::string machineType;
					std::string versionAction;
					std::string type;
					std::string masterInstanceId;
					std::string orderInstanceId;
					std::string vpcCloudInstanceId;
					std::string regionId;
					std::vector<Vip> vips;
				};


				DescribeDrdsInstanceResult();
				explicit DescribeDrdsInstanceResult(const std::string &payload);
				~DescribeDrdsInstanceResult();
				Data getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCERESULT_H_