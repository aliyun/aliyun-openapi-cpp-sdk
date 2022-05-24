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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCENETINFORESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCENETINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstanceNetInfoResult : public ServiceResult
			{
			public:
				struct DBInstanceNetInfo
				{
					struct SecurityIPGroup
					{
						std::string securityIPs;
						std::string securityIPGroupName;
					};
					struct DBInstanceWeight
					{
						std::string availability;
						std::string role;
						std::string dBInstanceId;
						std::string dBInstanceType;
						std::string weight;
					};
					std::string iPType;
					std::string vPCId;
					std::string vSwitchId;
					std::string port;
					std::string upgradeable;
					std::vector<DBInstanceNetInfo::SecurityIPGroup> securityIPGroups;
					std::vector<DBInstanceNetInfo::DBInstanceWeight> dBInstanceWeights;
					std::string connectionStringType;
					std::string maxDelayTime;
					std::string expiredTime;
					std::string connectionString;
					std::string babelfishPort;
					std::string iPAddress;
					std::string distributionType;
				};


				DescribeDBInstanceNetInfoResult();
				explicit DescribeDBInstanceNetInfoResult(const std::string &payload);
				~DescribeDBInstanceNetInfoResult();
				std::vector<DBInstanceNetInfo> getDBInstanceNetInfos()const;
				std::string getSecurityIPMode()const;
				std::string getInstanceNetworkType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstanceNetInfo> dBInstanceNetInfos_;
				std::string securityIPMode_;
				std::string instanceNetworkType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCENETINFORESULT_H_