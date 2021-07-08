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

#ifndef ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBECLUSTERSRESULT_H_
#define ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBECLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cassandra/CassandraExport.h>

namespace AlibabaCloud
{
	namespace Cassandra
	{
		namespace Model
		{
			class ALIBABACLOUD_CASSANDRA_EXPORT DescribeClustersResult : public ServiceResult
			{
			public:
				struct Cluster
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string majorVersion;
					int autoRenewPeriod;
					std::string createdTime;
					std::string resourceGroupId;
					std::string clusterId;
					std::string minorVersion;
					std::string payType;
					std::string lockMode;
					bool autoRenewal;
					int dataCenterCount;
					std::string clusterName;
					std::string expireTime;
					std::vector<Cluster::Tag> tags;
				};


				DescribeClustersResult();
				explicit DescribeClustersResult(const std::string &payload);
				~DescribeClustersResult();
				long getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Cluster> getClusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Cluster> clusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBECLUSTERSRESULT_H_