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

#ifndef ALIBABACLOUD_CC5G_MODEL_LISTWIRELESSCLOUDCONNECTORGROUPSRESULT_H_
#define ALIBABACLOUD_CC5G_MODEL_LISTWIRELESSCLOUDCONNECTORGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cc5g/CC5GExport.h>

namespace AlibabaCloud
{
	namespace CC5G
	{
		namespace Model
		{
			class ALIBABACLOUD_CC5G_EXPORT ListWirelessCloudConnectorGroupsResult : public ServiceResult
			{
			public:
				struct WirelessCloudConnectorGroup
				{
					struct WirelessCloudConnector
					{
						std::string status;
						std::string dataPackageType;
						std::string wirelessCloudConnectorId;
						std::string description;
						std::string cardCount;
						std::string serviceType;
						std::string createTime;
						std::string businessType;
						std::string useCase;
						std::string dataPackageId;
						std::string regionId;
						std::string name;
					};
					std::string status;
					std::string description;
					std::vector<WirelessCloudConnectorGroup::WirelessCloudConnector> wirelessCloudConnectors;
					std::string createTime;
					std::string regionId;
					std::string wirelessCloudConnectorGroupId;
					std::string name;
				};


				ListWirelessCloudConnectorGroupsResult();
				explicit ListWirelessCloudConnectorGroupsResult(const std::string &payload);
				~ListWirelessCloudConnectorGroupsResult();
				std::string getTotalCount()const;
				std::string getNextToken()const;
				std::string getMaxResults()const;
				std::vector<WirelessCloudConnectorGroup> getWirelessCloudConnectorGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string nextToken_;
				std::string maxResults_;
				std::vector<WirelessCloudConnectorGroup> wirelessCloudConnectorGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CC5G_MODEL_LISTWIRELESSCLOUDCONNECTORGROUPSRESULT_H_