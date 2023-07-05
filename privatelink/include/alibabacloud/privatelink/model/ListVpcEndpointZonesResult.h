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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTZONESRESULT_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTZONESRESULT_H_

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
			class ALIBABACLOUD_PRIVATELINK_EXPORT ListVpcEndpointZonesResult : public ServiceResult
			{
			public:
				struct Zone
				{
					long nsiIndex;
					std::string zoneId;
					std::string eniId;
					std::string zoneIpv6Address;
					std::string serviceStatus;
					std::string nsiIndexString;
					std::string vSwitchId;
					std::string eniIp;
					std::string zoneStatus;
					std::string regionId;
					std::string zoneDomain;
				};


				ListVpcEndpointZonesResult();
				explicit ListVpcEndpointZonesResult(const std::string &payload);
				~ListVpcEndpointZonesResult();
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<Zone> getZones()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				int maxResults_;
				std::vector<Zone> zones_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTZONESRESULT_H_