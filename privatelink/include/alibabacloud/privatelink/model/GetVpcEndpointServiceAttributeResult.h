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
				std::string getPayer()const;
				std::string getServiceDescription()const;
				int getMaxBandwidth()const;
				std::string getCreateTime()const;
				std::string getServiceDomain()const;
				int getMinBandwidth()const;
				std::vector<std::string> getZones()const;
				std::string getServiceId()const;
				bool getAutoAcceptEnabled()const;
				std::string getServiceBusinessStatus()const;
				std::string getServiceName()const;
				std::string getServiceStatus()const;
				int getConnectBandwidth()const;
				std::string getRegionId()const;
				bool getZoneAffinityEnabled()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string payer_;
				std::string serviceDescription_;
				int maxBandwidth_;
				std::string createTime_;
				std::string serviceDomain_;
				int minBandwidth_;
				std::vector<std::string> zones_;
				std::string serviceId_;
				bool autoAcceptEnabled_;
				std::string serviceBusinessStatus_;
				std::string serviceName_;
				std::string serviceStatus_;
				int connectBandwidth_;
				std::string regionId_;
				bool zoneAffinityEnabled_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_GETVPCENDPOINTSERVICEATTRIBUTERESULT_H_