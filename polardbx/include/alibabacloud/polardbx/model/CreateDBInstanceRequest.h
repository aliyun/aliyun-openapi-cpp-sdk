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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_CREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_CREATEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT CreateDBInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateDBInstanceRequest();
				~CreateDBInstanceRequest();

				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getDBNodeClass()const;
				void setDBNodeClass(const std::string& dBNodeClass);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getSecurityIPList()const;
				void setSecurityIPList(const std::string& securityIPList);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getDBNodeCount()const;
				void setDBNodeCount(int dBNodeCount);
				int getUsedTime()const;
				void setUsedTime(int usedTime);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				std::string resourceGroupId_;
				std::string dBNodeClass_;
				std::string dBInstanceDescription_;
				std::string period_;
				std::string securityIPList_;
				std::string vSwitchId_;
				bool autoRenew_;
				std::string zoneId_;
				std::string instanceNetworkType_;
				std::string clientToken_;
				std::string regionId_;
				int dBNodeCount_;
				int usedTime_;
				std::string vPCId_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_CREATEDBINSTANCEREQUEST_H_