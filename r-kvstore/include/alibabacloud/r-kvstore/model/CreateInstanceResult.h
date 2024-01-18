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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_CREATEINSTANCERESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_CREATEINSTANCERESULT_H_

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
			class ALIBABACLOUD_R_KVSTORE_EXPORT CreateInstanceResult : public ServiceResult
			{
			public:


				CreateInstanceResult();
				explicit CreateInstanceResult(const std::string &payload);
				~CreateInstanceResult();
				long getConnections()const;
				std::string getUserName()const;
				std::string getEndTime()const;
				std::string getZoneId()const;
				std::string getInstanceId()const;
				std::string getConfig()const;
				int getPort()const;
				std::string getVSwitchId()const;
				std::string getPrivateIpAddr()const;
				long getOrderId()const;
				std::string getConnectionDomain()const;
				std::string getInstanceName()const;
				std::string getVpcId()const;
				long getQPS()const;
				long getCapacity()const;
				std::string getChargeType()const;
				std::string getNetworkType()const;
				std::string getInstanceStatus()const;
				std::string getNodeType()const;
				long getBandwidth()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				long connections_;
				std::string userName_;
				std::string endTime_;
				std::string zoneId_;
				std::string instanceId_;
				std::string config_;
				int port_;
				std::string vSwitchId_;
				std::string privateIpAddr_;
				long orderId_;
				std::string connectionDomain_;
				std::string instanceName_;
				std::string vpcId_;
				long qPS_;
				long capacity_;
				std::string chargeType_;
				std::string networkType_;
				std::string instanceStatus_;
				std::string nodeType_;
				long bandwidth_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_CREATEINSTANCERESULT_H_