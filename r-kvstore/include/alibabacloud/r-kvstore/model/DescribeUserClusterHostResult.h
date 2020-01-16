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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEUSERCLUSTERHOSTRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEUSERCLUSTERHOSTRESULT_H_

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
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeUserClusterHostResult : public ServiceResult
			{
			public:
				struct HostInfo
				{
					std::string hostIP;
					std::string instanceNumber;
					std::string allocationStatus;
					std::string zoneId;
					std::string clusterId;
					std::string createTime;
					std::string hostStorage;
					std::string hostId;
					std::string hostClass;
					std::string hostCpu;
					std::string chargeType;
					std::string hostMem;
					std::string hostStatus;
					int id;
					std::string regionId;
					std::string expireTime;
					std::string engine;
					std::string hostName;
				};


				DescribeUserClusterHostResult();
				explicit DescribeUserClusterHostResult(const std::string &payload);
				~DescribeUserClusterHostResult();
				std::string getMaxRecordsPerPage()const;
				std::vector<HostInfo> getHostItems()const;
				int getPageNumber()const;
				int getTotalRecords()const;
				int getItemNumbers()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string maxRecordsPerPage_;
				std::vector<HostInfo> hostItems_;
				int pageNumber_;
				int totalRecords_;
				int itemNumbers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEUSERCLUSTERHOSTRESULT_H_