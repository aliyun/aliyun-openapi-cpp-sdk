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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTNETWORKZONESRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTNETWORKZONESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT ListNetworkZonesResult : public ServiceResult
			{
			public:
				struct NetworkZone
				{
					std::string networkZoneId;
					std::string description;
					std::string vpcId;
					std::string instanceId;
					std::vector<std::string> ipv6Cidrs;
					std::string networkZoneName;
					std::string networkZoneType;
					std::vector<std::string> ipv4Cidrs;
				};


				ListNetworkZonesResult();
				explicit ListNetworkZonesResult(const std::string &payload);
				~ListNetworkZonesResult();
				std::vector<NetworkZone> getNetworkZones()const;
				long getTotalCount()const;
				std::string getPreviousToken()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NetworkZone> networkZones_;
				long totalCount_;
				std::string previousToken_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTNETWORKZONESRESULT_H_