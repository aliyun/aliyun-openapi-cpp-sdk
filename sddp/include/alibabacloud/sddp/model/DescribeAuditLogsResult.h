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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEAUDITLOGSRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEAUDITLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeAuditLogsResult : public ServiceResult
			{
			public:
				struct Log
				{
					std::string userName;
					std::string productCode;
					std::string packageName;
					std::string ossObjectKey;
					long executeTime;
					long logTime;
					std::string ruleId;
					std::string clientUa;
					std::string databaseName;
					std::string clientPort;
					int executeStatus;
					long productId;
					std::string clientIp;
					long effectRow;
					std::string instanceName;
					std::string tableName;
					std::string columnName;
					std::string warnLevel;
					std::string userId;
					long creationTime;
					long id;
					std::string operateType;
					std::string ruleName;
				};


				DescribeAuditLogsResult();
				explicit DescribeAuditLogsResult(const std::string &payload);
				~DescribeAuditLogsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Log> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Log> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEAUDITLOGSRESULT_H_