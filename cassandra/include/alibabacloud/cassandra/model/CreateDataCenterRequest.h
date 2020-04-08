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

#ifndef ALIBABACLOUD_CASSANDRA_MODEL_CREATEDATACENTERREQUEST_H_
#define ALIBABACLOUD_CASSANDRA_MODEL_CREATEDATACENTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cassandra/CassandraExport.h>

namespace AlibabaCloud
{
	namespace Cassandra
	{
		namespace Model
		{
			class ALIBABACLOUD_CASSANDRA_EXPORT CreateDataCenterRequest : public RpcServiceRequest
			{

			public:
				CreateDataCenterRequest();
				~CreateDataCenterRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				int getDiskSize()const;
				void setDiskSize(int diskSize);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getDiskType()const;
				void setDiskType(const std::string& diskType);
				std::string getVswitchId()const;
				void setVswitchId(const std::string& vswitchId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getDataCenterName()const;
				void setDataCenterName(const std::string& dataCenterName);
				int getNodeCount()const;
				void setNodeCount(int nodeCount);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				std::string clientToken_;
				std::string regionId_;
				std::string instanceType_;
				int autoRenewPeriod_;
				int period_;
				int diskSize_;
				std::string clusterId_;
				std::string diskType_;
				std::string vswitchId_;
				std::string periodUnit_;
				bool autoRenew_;
				std::string dataCenterName_;
				int nodeCount_;
				std::string vpcId_;
				std::string zoneId_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CASSANDRA_MODEL_CREATEDATACENTERREQUEST_H_