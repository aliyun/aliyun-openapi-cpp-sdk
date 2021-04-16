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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_UPDATEVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_UPDATEVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_PRIVATELINK_EXPORT UpdateVpcEndpointServiceAttributeRequest : public RpcServiceRequest
			{

			public:
				UpdateVpcEndpointServiceAttributeRequest();
				~UpdateVpcEndpointServiceAttributeRequest();

				bool getAutoAcceptEnabled()const;
				void setAutoAcceptEnabled(bool autoAcceptEnabled);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				int getConnectBandwidth()const;
				void setConnectBandwidth(int connectBandwidth);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getZoneAffinityEnabled()const;
				void setZoneAffinityEnabled(bool zoneAffinityEnabled);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getServiceDescription()const;
				void setServiceDescription(const std::string& serviceDescription);
				std::string getServiceId()const;
				void setServiceId(const std::string& serviceId);

            private:
				bool autoAcceptEnabled_;
				std::string clientToken_;
				int connectBandwidth_;
				std::string regionId_;
				bool zoneAffinityEnabled_;
				bool dryRun_;
				std::string serviceDescription_;
				std::string serviceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_UPDATEVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_