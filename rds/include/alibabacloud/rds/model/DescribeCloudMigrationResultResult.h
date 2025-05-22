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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBECLOUDMIGRATIONRESULTRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBECLOUDMIGRATIONRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeCloudMigrationResultResult : public ServiceResult
			{
			public:
				struct Tasks
				{
					std::string status;
					long taskId;
					std::string sourceAccount;
					std::string gmtModified;
					std::string gmtCreated;
					std::string replicationState;
					long sourcePort;
					std::string targetEip;
					std::string taskName;
					std::string targetInstanceName;
					std::string replicationInfo;
					std::string migrateStage;
					std::string sourceCategory;
					std::string sourcePassword;
					std::string detail;
					std::string sourceIpAddress;
					std::string switchTime;
				};


				DescribeCloudMigrationResultResult();
				explicit DescribeCloudMigrationResultResult(const std::string &payload);
				~DescribeCloudMigrationResultResult();
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<Tasks> getItems()const;
				int getTotalSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				long pageSize_;
				long pageNumber_;
				std::vector<Tasks> items_;
				int totalSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBECLOUDMIGRATIONRESULTRESULT_H_