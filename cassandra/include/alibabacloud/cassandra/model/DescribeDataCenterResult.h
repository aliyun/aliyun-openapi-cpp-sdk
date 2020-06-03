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

#ifndef ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBEDATACENTERRESULT_H_
#define ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBEDATACENTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cassandra/CassandraExport.h>

namespace AlibabaCloud
{
	namespace Cassandra
	{
		namespace Model
		{
			class ALIBABACLOUD_CASSANDRA_EXPORT DescribeDataCenterResult : public ServiceResult
			{
			public:


				DescribeDataCenterResult();
				explicit DescribeDataCenterResult(const std::string &payload);
				~DescribeDataCenterResult();
				std::string getStatus()const;
				int getAutoRenewPeriod()const;
				std::string getDataCenterId()const;
				std::string getCreatedTime()const;
				std::string getCommodityInstance()const;
				std::string getZoneId()const;
				int getNodeCount()const;
				std::string getClusterId()const;
				std::string getPayType()const;
				std::string getLockMode()const;
				std::string getDataCenterName()const;
				std::string getVswitchId()const;
				std::string getDiskType()const;
				std::string getVpcId()const;
				bool getAutoRenewal()const;
				int getDiskSize()const;
				std::string getRegionId()const;
				std::string getInstanceType()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				int autoRenewPeriod_;
				std::string dataCenterId_;
				std::string createdTime_;
				std::string commodityInstance_;
				std::string zoneId_;
				int nodeCount_;
				std::string clusterId_;
				std::string payType_;
				std::string lockMode_;
				std::string dataCenterName_;
				std::string vswitchId_;
				std::string diskType_;
				std::string vpcId_;
				bool autoRenewal_;
				int diskSize_;
				std::string regionId_;
				std::string instanceType_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBEDATACENTERRESULT_H_