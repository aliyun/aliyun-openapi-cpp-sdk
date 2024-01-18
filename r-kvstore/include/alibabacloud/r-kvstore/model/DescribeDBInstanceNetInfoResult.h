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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEDBINSTANCENETINFORESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEDBINSTANCENETINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeDBInstanceNetInfoResult : public ServiceResult
			{
			public:
				struct InstanceNetInfo
				{
					std::string iPType;
					std::string vPCInstanceId;
					std::string dBInstanceNetType;
					std::string vPCId;
					std::string vSwitchId;
					std::string expiredTime;
					std::string port;
					int directConnection;
					std::string upgradeable;
					int isSlaveProxy;
					std::string connectionString;
					std::string iPAddress;
				};


				DescribeDBInstanceNetInfoResult();
				explicit DescribeDBInstanceNetInfoResult(const std::string &payload);
				~DescribeDBInstanceNetInfoResult();
				std::vector<InstanceNetInfo> getNetInfoItems()const;
				std::string getInstanceNetworkType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InstanceNetInfo> netInfoItems_;
				std::string instanceNetworkType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEDBINSTANCENETINFORESULT_H_