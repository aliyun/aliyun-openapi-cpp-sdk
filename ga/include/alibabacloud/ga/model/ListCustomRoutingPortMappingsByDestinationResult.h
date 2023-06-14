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

#ifndef ALIBABACLOUD_GA_MODEL_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONRESULT_H_
#define ALIBABACLOUD_GA_MODEL_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONRESULT_H_

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
			class ALIBABACLOUD_GA_EXPORT ListCustomRoutingPortMappingsByDestinationResult : public ServiceResult
			{
			public:
				struct PortMappingsItem
				{
					struct DestinationSocketAddress
					{
						int port;
						std::string ipAddress;
					};
					std::string endpointGroupRegion;
					std::vector<std::string> protocols;
					std::string endpointGroupId;
					DestinationSocketAddress destinationSocketAddress;
					std::string endpointId;
					std::string vswitch;
					int acceleratorPort;
					std::string acceleratorId;
					std::string destinationTrafficState;
					std::string listenerId;
				};


				ListCustomRoutingPortMappingsByDestinationResult();
				explicit ListCustomRoutingPortMappingsByDestinationResult(const std::string &payload);
				~ListCustomRoutingPortMappingsByDestinationResult();
				int getTotalCount()const;
				std::vector<PortMappingsItem> getPortMappings()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<PortMappingsItem> portMappings_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONRESULT_H_