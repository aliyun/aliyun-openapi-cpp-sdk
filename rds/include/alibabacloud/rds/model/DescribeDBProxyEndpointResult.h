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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBPROXYENDPOINTRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBPROXYENDPOINTRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeDBProxyEndpointResult : public ServiceResult
			{
			public:
				struct DBProxyNodesItem
				{
					std::string zoneId;
					std::string cpuCores;
					std::string nodeId;
				};
				struct EndpointConnectItemsItem
				{
					std::string dbProxyEndpointNetType;
					std::string dbProxyEndpointPort;
					std::string dbProxyEndpointConnectString;
				};


				DescribeDBProxyEndpointResult();
				explicit DescribeDBProxyEndpointResult(const std::string &payload);
				~DescribeDBProxyEndpointResult();
				std::string getDbProxyEndpointVswitchId()const;
				std::string getDbProxyEndpointReadWriteMode()const;
				std::string getDbProxyEndpointZoneId()const;
				std::string getDBProxyEndpointId()const;
				std::string getDbProxyEndpointAliases()const;
				std::string getReadOnlyInstanceWeight()const;
				std::string getReadOnlyInstanceMaxDelayTime()const;
				std::string getDBProxyConnectStringNetType()const;
				std::string getDbProxyEndpointVpcId()const;
				std::string getDBProxyEngineType()const;
				std::string getDBProxyEndpointMinSlaveCount()const;
				std::string getReadOnlyInstanceDistributionType()const;
				std::string getDBProxyConnectString()const;
				std::string getDBProxyFeatures()const;
				std::vector<DBProxyNodesItem> getDBProxyNodes()const;
				std::vector<EndpointConnectItemsItem> getEndpointConnectItems()const;
				std::string getCausalConsistReadTimeout()const;
				std::string getDBProxyConnectStringPort()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dbProxyEndpointVswitchId_;
				std::string dbProxyEndpointReadWriteMode_;
				std::string dbProxyEndpointZoneId_;
				std::string dBProxyEndpointId_;
				std::string dbProxyEndpointAliases_;
				std::string readOnlyInstanceWeight_;
				std::string readOnlyInstanceMaxDelayTime_;
				std::string dBProxyConnectStringNetType_;
				std::string dbProxyEndpointVpcId_;
				std::string dBProxyEngineType_;
				std::string dBProxyEndpointMinSlaveCount_;
				std::string readOnlyInstanceDistributionType_;
				std::string dBProxyConnectString_;
				std::string dBProxyFeatures_;
				std::vector<DBProxyNodesItem> dBProxyNodes_;
				std::vector<EndpointConnectItemsItem> endpointConnectItems_;
				std::string causalConsistReadTimeout_;
				std::string dBProxyConnectStringPort_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBPROXYENDPOINTRESULT_H_