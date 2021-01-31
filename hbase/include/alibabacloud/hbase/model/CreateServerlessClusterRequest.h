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

#ifndef ALIBABACLOUD_HBASE_MODEL_CREATESERVERLESSCLUSTERREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_CREATESERVERLESSCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT CreateServerlessClusterRequest : public RpcServiceRequest
			{

			public:
				CreateServerlessClusterRequest();
				~CreateServerlessClusterRequest();

				std::string getClientType()const;
				void setClientType(const std::string& clientType);
				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getDiskType()const;
				void setDiskType(const std::string& diskType);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				int getServerlessCapability()const;
				void setServerlessCapability(int serverlessCapability);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				int getServerlessStorage()const;
				void setServerlessStorage(int serverlessStorage);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getServerlessSpec()const;
				void setServerlessSpec(const std::string& serverlessSpec);

            private:
				std::string clientType_;
				std::string clusterName_;
				std::string clientToken_;
				std::string engineVersion_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string engine_;
				int autoRenewPeriod_;
				int period_;
				std::string diskType_;
				std::string vSwitchId_;
				std::string periodUnit_;
				int serverlessCapability_;
				std::string vpcId_;
				std::string zoneId_;
				int serverlessStorage_;
				std::string payType_;
				std::string serverlessSpec_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_CREATESERVERLESSCLUSTERREQUEST_H_