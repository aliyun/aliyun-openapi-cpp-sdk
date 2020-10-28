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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEFIRSTDRDSINSTANCEBYORDERIDRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEFIRSTDRDSINSTANCEBYORDERIDRESULT_H_

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
			class ALIBABACLOUD_DRDS_EXPORT DescribeFirstDrdsInstanceByOrderIdResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Vip
					{
						std::string type;
						std::string vpcId;
						std::string port;
						std::string dns;
						std::string vswitchId;
						long expireDays;
					};
					std::string status;
					std::string description;
					std::string instanceSpec;
					std::string zoneId;
					long expireDate;
					long createTime;
					std::string label;
					std::string machineType;
					std::string instanceSeries;
					std::string versionAction;
					int mysqlVersion;
					std::string type;
					std::string drdsInstanceId;
					long version;
					std::string masterInstanceId;
					std::string orderInstanceId;
					std::string networkType;
					std::string instRole;
					std::string commodityCode;
					std::vector<std::string> readOnlyDBInstanceIds;
					std::string vpcCloudInstanceId;
					std::string regionId;
					std::vector<Vip> vips;
				};


				DescribeFirstDrdsInstanceByOrderIdResult();
				explicit DescribeFirstDrdsInstanceByOrderIdResult(const std::string &payload);
				~DescribeFirstDrdsInstanceByOrderIdResult();
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
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEFIRSTDRDSINSTANCEBYORDERIDRESULT_H_