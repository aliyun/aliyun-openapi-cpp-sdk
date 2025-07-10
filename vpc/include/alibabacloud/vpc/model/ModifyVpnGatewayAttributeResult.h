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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYVPNGATEWAYATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYVPNGATEWAYATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ModifyVpnGatewayAttributeResult : public ServiceResult
			{
			public:


				ModifyVpnGatewayAttributeResult();
				explicit ModifyVpnGatewayAttributeResult(const std::string &payload);
				~ModifyVpnGatewayAttributeResult();
				std::string getStatus()const;
				std::string getDescription()const;
				bool getEnableBgp()const;
				std::string getDisasterRecoveryVSwitchId()const;
				long getEndTime()const;
				std::string getResourceGroupId()const;
				long getCreateTime()const;
				std::string getVSwitchId()const;
				bool getAutoPropagate()const;
				std::string getIntranetIp()const;
				std::string getBusinessStatus()const;
				std::string getName()const;
				std::string getVpcId()const;
				std::string getInternetIp()const;
				std::string getVpnGatewayId()const;
				std::string getDisasterRecoveryInternetIp()const;
				std::string getSslVpnInternetIp()const;
				std::string getSpec()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string description_;
				bool enableBgp_;
				std::string disasterRecoveryVSwitchId_;
				long endTime_;
				std::string resourceGroupId_;
				long createTime_;
				std::string vSwitchId_;
				bool autoPropagate_;
				std::string intranetIp_;
				std::string businessStatus_;
				std::string name_;
				std::string vpcId_;
				std::string internetIp_;
				std::string vpnGatewayId_;
				std::string disasterRecoveryInternetIp_;
				std::string sslVpnInternetIp_;
				std::string spec_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYVPNGATEWAYATTRIBUTERESULT_H_