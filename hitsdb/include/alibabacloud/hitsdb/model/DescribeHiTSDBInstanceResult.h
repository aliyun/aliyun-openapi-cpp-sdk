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

#ifndef ALIBABACLOUD_HITSDB_MODEL_DESCRIBEHITSDBINSTANCERESULT_H_
#define ALIBABACLOUD_HITSDB_MODEL_DESCRIBEHITSDBINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hitsdb/HitsdbExport.h>

namespace AlibabaCloud
{
	namespace Hitsdb
	{
		namespace Model
		{
			class ALIBABACLOUD_HITSDB_EXPORT DescribeHiTSDBInstanceResult : public ServiceResult
			{
			public:
				struct SecurityIp
				{
					std::string ip;
				};


				DescribeHiTSDBInstanceResult();
				explicit DescribeHiTSDBInstanceResult(const std::string &payload);
				~DescribeHiTSDBInstanceResult();
				bool getAutoRenew()const;
				std::string getGmtCreated()const;
				std::string getCpuNumber()const;
				std::string getInstanceAlias()const;
				std::string getInstanceStatus()const;
				std::string getNetworkType()const;
				std::string getGmtExpire()const;
				std::string getMemSize()const;
				long getExpiredTime()const;
				std::string getMaxTimelineLimit()const;
				std::string getReverseVpcPort()const;
				std::string getPaymentType()const;
				std::string getPublicConnectionString()const;
				std::string getEngineType()const;
				std::string getInstanceTps()const;
				std::string getRDSStatus()const;
				std::string getStatus()const;
				std::string getInstanceStorage()const;
				std::string getZoneId()const;
				std::string getInstanceId()const;
				long getCreateTime()const;
				std::string getDiskCategory()const;
				std::string getInstanceClass()const;
				std::string getVswitchId()const;
				int getSeries()const;
				std::string getVpcId()const;
				std::vector<SecurityIp> getSecurityIpList()const;
				std::string getChargeType()const;
				std::string getReverseVpcIp()const;
				std::string getInstanceDescription()const;
				std::string getRegionId()const;
				std::string getConnectionString()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool autoRenew_;
				std::string gmtCreated_;
				std::string cpuNumber_;
				std::string instanceAlias_;
				std::string instanceStatus_;
				std::string networkType_;
				std::string gmtExpire_;
				std::string memSize_;
				long expiredTime_;
				std::string maxTimelineLimit_;
				std::string reverseVpcPort_;
				std::string paymentType_;
				std::string publicConnectionString_;
				std::string engineType_;
				std::string instanceTps_;
				std::string rDSStatus_;
				std::string status_;
				std::string instanceStorage_;
				std::string zoneId_;
				std::string instanceId_;
				long createTime_;
				std::string diskCategory_;
				std::string instanceClass_;
				std::string vswitchId_;
				int series_;
				std::string vpcId_;
				std::vector<SecurityIp> securityIpList_;
				std::string chargeType_;
				std::string reverseVpcIp_;
				std::string instanceDescription_;
				std::string regionId_;
				std::string connectionString_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_DESCRIBEHITSDBINSTANCERESULT_H_