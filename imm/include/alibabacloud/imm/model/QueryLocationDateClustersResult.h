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

#ifndef ALIBABACLOUD_IMM_MODEL_QUERYLOCATIONDATECLUSTERSRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_QUERYLOCATIONDATECLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT QueryLocationDateClustersResult : public ServiceResult
			{
			public:
				struct LocationDateClustersItem
				{
					struct AddressesItem
					{
						std::string language;
						std::string township;
						std::string addressLine;
						std::string country;
						std::string city;
						std::string district;
						std::string province;
					};
					std::vector<LocationDateClustersItem::AddressesItem> addresses;
					std::string locationDateClusterEndTime;
					std::string customLabels;
					std::string locationDateClusterLevel;
					std::string objectId;
					std::string createTime;
					std::string customId;
					std::string updateTime;
					std::string title;
					std::string locationDateClusterStartTime;
				};


				QueryLocationDateClustersResult();
				explicit QueryLocationDateClustersResult(const std::string &payload);
				~QueryLocationDateClustersResult();
				std::string getNextToken()const;
				std::vector<LocationDateClustersItem> getLocationDateClusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<LocationDateClustersItem> locationDateClusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_QUERYLOCATIONDATECLUSTERSRESULT_H_