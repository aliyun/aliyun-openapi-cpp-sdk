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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNGATEWAYRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNGATEWAYRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeVpnGatewayResult : public ServiceResult
			{
			public:


				DescribeVpnGatewayResult();
				explicit DescribeVpnGatewayResult(const std::string &payload);
				~DescribeVpnGatewayResult();
				std::string getStatus()const;
				std::string getIpsecVpn()const;
				std::string getSslVpn()const;
				std::string getDescription()const;
				long getEndTime()const;
				std::string getVSwitchId()const;
				long getCreateTime()const;
				std::string getBusinessStatus()const;
				std::string getName()const;
				std::string getVpcId()const;
				std::string getInternetIp()const;
				std::string getVpnGatewayId()const;
				std::string getChargeType()const;
				std::string getTag()const;
				std::string getSpec()const;
				long getSslMaxConnections()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string ipsecVpn_;
				std::string sslVpn_;
				std::string description_;
				long endTime_;
				std::string vSwitchId_;
				long createTime_;
				std::string businessStatus_;
				std::string name_;
				std::string vpcId_;
				std::string internetIp_;
				std::string vpnGatewayId_;
				std::string chargeType_;
				std::string tag_;
				std::string spec_;
				long sslMaxConnections_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNGATEWAYRESULT_H_