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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBECLUSTERMEMBERINFORESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBECLUSTERMEMBERINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeClusterMemberInfoResult : public ServiceResult
			{
			public:
				struct Children
				{
					struct Item
					{
						std::string status;
						std::string role;
						std::string zoneId;
						std::string ip;
						std::vector<std::string> ports;
						int id;
						std::string hostName;
					};
					long connections;
					std::string primaryInsName;
					std::string health;
					std::string service;
					std::string bizType;
					int diskSizeMB;
					int creator;
					long currentBandWidth;
					std::string name;
					int binlogRetentionDays;
					long bandWidth;
					std::string classCode;
					long capacity;
					std::string userId;
					std::string serviceVersion;
					std::vector<Children::Item> items;
					long id;
					std::string lockReason;
					int modifier;
					std::string resourceGroupName;
					std::string nickname;
					int replicaSize;
				};


				DescribeClusterMemberInfoResult();
				explicit DescribeClusterMemberInfoResult(const std::string &payload);
				~DescribeClusterMemberInfoResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Children> getClusterChildren()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Children> clusterChildren_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBECLUSTERMEMBERINFORESULT_H_