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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_GETVPCENDPOINTATTRIBUTERESULT_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_GETVPCENDPOINTATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/privatelink/PrivatelinkExport.h>

namespace AlibabaCloud
{
	namespace Privatelink
	{
		namespace Model
		{
			class ALIBABACLOUD_PRIVATELINK_EXPORT GetVpcEndpointAttributeResult : public ServiceResult
			{
			public:


				GetVpcEndpointAttributeResult();
				explicit GetVpcEndpointAttributeResult(const std::string &payload);
				~GetVpcEndpointAttributeResult();
				std::string getPayer()const;
				std::string getEndpointDomain()const;
				std::string getResourceGroupId()const;
				std::string getCreateTime()const;
				bool getResourceOwner()const;
				long getZonePrivateIpAddressCount()const;
				std::string getEndpointBusinessStatus()const;
				std::string getEndpointDescription()const;
				std::string getServiceId()const;
				std::string getEndpointStatus()const;
				std::string getVpcId()const;
				std::string getEndpointName()const;
				std::string getServiceName()const;
				int getBandwidth()const;
				std::string getEndpointId()const;
				std::string getEndpointType()const;
				std::string getPrivateServiceName()const;
				std::string getRegionId()const;
				std::string getConnectionStatus()const;
				bool getZoneAffinityEnabled()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string payer_;
				std::string endpointDomain_;
				std::string resourceGroupId_;
				std::string createTime_;
				bool resourceOwner_;
				long zonePrivateIpAddressCount_;
				std::string endpointBusinessStatus_;
				std::string endpointDescription_;
				std::string serviceId_;
				std::string endpointStatus_;
				std::string vpcId_;
				std::string endpointName_;
				std::string serviceName_;
				int bandwidth_;
				std::string endpointId_;
				std::string endpointType_;
				std::string privateServiceName_;
				std::string regionId_;
				std::string connectionStatus_;
				bool zoneAffinityEnabled_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_GETVPCENDPOINTATTRIBUTERESULT_H_