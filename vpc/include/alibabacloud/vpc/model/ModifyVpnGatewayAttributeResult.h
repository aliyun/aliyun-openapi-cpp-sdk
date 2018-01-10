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
				void setStatus(const std::string& status);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getInternetIp()const;
				void setInternetIp(const std::string& internetIp);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::string getVpnGatewayId()const;
				void setVpnGatewayId(const std::string& vpnGatewayId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				long getCreateTime()const;
				void setCreateTime(long createTime);
				std::string getSpec()const;
				void setSpec(const std::string& spec);
				std::string getIntranetIp()const;
				void setIntranetIp(const std::string& intranetIp);
				std::string getBusinessStatus()const;
				void setBusinessStatus(const std::string& businessStatus);
				std::string getName()const;
				void setName(const std::string& name);

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string description_;
				std::string vpcId_;
				std::string internetIp_;
				long endTime_;
				std::string vpnGatewayId_;
				std::string vSwitchId_;
				long createTime_;
				std::string spec_;
				std::string intranetIp_;
				std::string businessStatus_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYVPNGATEWAYATTRIBUTERESULT_H_