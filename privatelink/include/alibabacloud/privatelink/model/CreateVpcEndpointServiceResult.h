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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTSERVICERESULT_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTSERVICERESULT_H_

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
			class ALIBABACLOUD_PRIVATELINK_EXPORT CreateVpcEndpointServiceResult : public ServiceResult
			{
			public:


				CreateVpcEndpointServiceResult();
				explicit CreateVpcEndpointServiceResult(const std::string &payload);
				~CreateVpcEndpointServiceResult();
				std::string getServiceBusinessStatus()const;
				std::string getResourceGroupId()const;
				std::string getServiceName()const;
				std::string getServiceStatus()const;
				std::string getServiceDescription()const;
				std::string getCreateTime()const;
				std::string getServiceDomain()const;
				bool getZoneAffinityEnabled()const;
				bool getAutoAcceptEnabled()const;
				std::string getServiceId()const;
				bool getServiceSupportIPv6()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string serviceBusinessStatus_;
				std::string resourceGroupId_;
				std::string serviceName_;
				std::string serviceStatus_;
				std::string serviceDescription_;
				std::string createTime_;
				std::string serviceDomain_;
				bool zoneAffinityEnabled_;
				bool autoAcceptEnabled_;
				std::string serviceId_;
				bool serviceSupportIPv6_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTSERVICERESULT_H_