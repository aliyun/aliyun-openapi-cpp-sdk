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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_CREATESERVICEREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_CREATESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT CreateServiceRequest : public RpcServiceRequest
			{
			public:
				struct PortMappings
				{
					std::string protocol;
					int port;
					std::string name;
					int nodePort;
					std::string targetPort;
				};

			public:
				CreateServiceRequest();
				~CreateServiceRequest();

				bool getHeadless()const;
				void setHeadless(bool headless);
				std::string getServiceType()const;
				void setServiceType(const std::string& serviceType);
				std::string getK8sServiceId()const;
				void setK8sServiceId(const std::string& k8sServiceId);
				std::string getName()const;
				void setName(const std::string& name);
				std::vector<PortMappings> getPortMappings()const;
				void setPortMappings(const std::vector<PortMappings>& portMappings);
				long getEnvId()const;
				void setEnvId(long envId);

            private:
				bool headless_;
				std::string serviceType_;
				std::string k8sServiceId_;
				std::string name_;
				std::vector<PortMappings> portMappings_;
				long envId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_CREATESERVICEREQUEST_H_