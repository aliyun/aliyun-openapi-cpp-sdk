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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_GETVPCENDPOINTSERVICEATTRIBUTERESULT_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_GETVPCENDPOINTSERVICEATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_PRIVATELINK_EXPORT GetVpcEndpointServiceAttributeResult : public ServiceResult
			{
			public:


				GetVpcEndpointServiceAttributeResult();
				explicit GetVpcEndpointServiceAttributeResult(const std::string &payload);
				~GetVpcEndpointServiceAttributeResult();
				std::string getResourceGroupId()const;
				int getMaxBandwidth()const;
				bool getPrivateServiceDomainEnabled()const;
				int getMinBandwidth()const;
				std::vector<std::string> getZones()const;
				bool getAutoAcceptEnabled()const;
				std::string getServiceId()const;
				bool getServiceSupportIPv6()const;
				std::string getPrivateServiceDomainVerifyStatus()const;
				std::string getPrivateServiceDomainVerifyName()const;
				std::string getServiceStatus()const;
				std::string getServiceType()const;
				std::string getServiceResourceType()const;
				std::string getPrivateServiceName()const;
				std::string getPayer()const;
				std::string getPrivateServiceDomainBusinessStatus()const;
				std::string getServiceDescription()const;
				std::string getCreateTime()const;
				std::string getPrivateServiceDomain()const;
				std::string getServiceDomain()const;
				std::string getServiceBusinessStatus()const;
				std::string getServiceName()const;
				int getConnectBandwidth()const;
				std::string getRegionId()const;
				bool getZoneAffinityEnabled()const;
				std::string getPrivateServiceDomainVerifyValue()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string resourceGroupId_;
				int maxBandwidth_;
				bool privateServiceDomainEnabled_;
				int minBandwidth_;
				std::vector<std::string> zones_;
				bool autoAcceptEnabled_;
				std::string serviceId_;
				bool serviceSupportIPv6_;
				std::string privateServiceDomainVerifyStatus_;
				std::string privateServiceDomainVerifyName_;
				std::string serviceStatus_;
				std::string serviceType_;
				std::string serviceResourceType_;
				std::string privateServiceName_;
				std::string payer_;
				std::string privateServiceDomainBusinessStatus_;
				std::string serviceDescription_;
				std::string createTime_;
				std::string privateServiceDomain_;
				std::string serviceDomain_;
				std::string serviceBusinessStatus_;
				std::string serviceName_;
				int connectBandwidth_;
				std::string regionId_;
				bool zoneAffinityEnabled_;
				std::string privateServiceDomainVerifyValue_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_GETVPCENDPOINTSERVICEATTRIBUTERESULT_H_