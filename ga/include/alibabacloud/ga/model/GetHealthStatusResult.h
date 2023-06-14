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

#ifndef ALIBABACLOUD_GA_MODEL_GETHEALTHSTATUSRESULT_H_
#define ALIBABACLOUD_GA_MODEL_GETHEALTHSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT GetHealthStatusResult : public ServiceResult
			{
			public:
				struct EndpointGroupHealthStatuses
				{
					struct EndpointHealthStatuses
					{
						std::string type;
						std::string address;
						std::string endpointId;
						long port;
						std::string healthStatus;
						std::string healthDetail;
					};
					std::vector<EndpointGroupHealthStatuses::EndpointHealthStatuses> endpoints;
					std::vector<std::string> forwardingRuleIds;
					std::string endpointGroupId;
					std::string healthStatus;
					std::string endpointGroupType;
				};


				GetHealthStatusResult();
				explicit GetHealthStatusResult(const std::string &payload);
				~GetHealthStatusResult();
				std::string getHealthStatus()const;
				std::vector<EndpointGroupHealthStatuses> getEndpointGroups()const;
				std::string getListenerId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string healthStatus_;
				std::vector<EndpointGroupHealthStatuses> endpointGroups_;
				std::string listenerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_GETHEALTHSTATUSRESULT_H_