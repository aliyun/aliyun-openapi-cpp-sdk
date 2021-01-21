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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTREQUEST_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/privatelink/PrivatelinkExport.h>

namespace AlibabaCloud
{
	namespace Privatelink
	{
		namespace Model
		{
			class ALIBABACLOUD_PRIVATELINK_EXPORT CreateVpcEndpointRequest : public RpcServiceRequest
			{
			public:
				struct Zone
				{
					std::string vSwitchId;
					std::string zoneId;
				};

			public:
				CreateVpcEndpointRequest();
				~CreateVpcEndpointRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::vector<std::string> getSecurityGroupId()const;
				void setSecurityGroupId(const std::vector<std::string>& securityGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<Zone> getZone()const;
				void setZone(const std::vector<Zone>& zone);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getEndpointDescription()const;
				void setEndpointDescription(const std::string& endpointDescription);
				std::string getEndpointName()const;
				void setEndpointName(const std::string& endpointName);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getServiceId()const;
				void setServiceId(const std::string& serviceId);

            private:
				std::string clientToken_;
				std::vector<std::string> securityGroupId_;
				std::string regionId_;
				std::vector<Zone> zone_;
				std::string serviceName_;
				bool dryRun_;
				std::string endpointDescription_;
				std::string endpointName_;
				std::string vpcId_;
				std::string serviceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTREQUEST_H_