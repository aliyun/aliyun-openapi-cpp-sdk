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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKSRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeGlobalDatabaseNetworksResult : public ServiceResult
			{
			public:
				struct GlobalDatabaseNetwork
				{
					struct DBCluster
					{
						std::string role;
						std::string dBClusterId;
						std::string regionId;
					};
					struct OutCloudDBCluster
					{
						std::string role;
						std::string dBClusterId;
						std::string outCloudType;
						std::string regionId;
					};
					std::string gDNStatus;
					std::vector<GlobalDatabaseNetwork::OutCloudDBCluster> outCloudDBClusters;
					std::string dBVersion;
					std::string gDNId;
					std::string zoneId;
					std::string createTime;
					std::string dBType;
					std::string gDNDescription;
					std::vector<GlobalDatabaseNetwork::DBCluster> dBClusters;
				};


				DescribeGlobalDatabaseNetworksResult();
				explicit DescribeGlobalDatabaseNetworksResult(const std::string &payload);
				~DescribeGlobalDatabaseNetworksResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<GlobalDatabaseNetwork> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<GlobalDatabaseNetwork> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKSRESULT_H_