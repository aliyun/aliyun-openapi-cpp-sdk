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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATANETWORKLISTRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATANETWORKLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeGlobalDataNetworkListResult : public ServiceResult
			{
			public:
				struct Items
				{
					struct Network
					{
						struct NetworkTopology
						{
							struct Source
							{
								std::string sourceType;
								std::string sourceId;
								std::string sourceRegion;
								std::string sourceFileSystemPath;
							};
							struct Destination
							{
								std::string destinationFileSystemPath;
								std::string destinationRegion;
								std::string destinationType;
								std::string destinationId;
							};
							std::vector<Destination> destinations;
							std::vector<Source> sources;
						};
						struct Channel
						{
							std::string progress;
							std::string channelStatus;
							std::string channelId;
							bool freezeSourceDuringSync;
						};
						std::string networkStatus;
						NetworkTopology networkTopology;
						std::string createTime;
						std::string networkId;
						std::vector<Network::Channel> channels;
						std::string networkDescription;
					};
					std::vector<Network> networks;
				};


				DescribeGlobalDataNetworkListResult();
				explicit DescribeGlobalDataNetworkListResult(const std::string &payload);
				~DescribeGlobalDataNetworkListResult();
				std::string getTotalRecordCount()const;
				std::string getPageRecordCount()const;
				std::string getNextToken()const;
				std::string getPageNumber()const;
				int getMaxResults()const;
				Items getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalRecordCount_;
				std::string pageRecordCount_;
				std::string nextToken_;
				std::string pageNumber_;
				int maxResults_;
				Items items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATANETWORKLISTRESULT_H_