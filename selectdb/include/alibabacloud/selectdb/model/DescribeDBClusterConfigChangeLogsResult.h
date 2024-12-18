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

#ifndef ALIBABACLOUD_SELECTDB_MODEL_DESCRIBEDBCLUSTERCONFIGCHANGELOGSRESULT_H_
#define ALIBABACLOUD_SELECTDB_MODEL_DESCRIBEDBCLUSTERCONFIGCHANGELOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/selectdb/SelectdbExport.h>

namespace AlibabaCloud
{
	namespace Selectdb
	{
		namespace Model
		{
			class ALIBABACLOUD_SELECTDB_EXPORT DescribeDBClusterConfigChangeLogsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ParamChangeLog
					{
						std::string oldValue;
						bool isApplied;
						std::string gmtModified;
						std::string newValue;
						long id;
						std::string gmtCreated;
						std::string name;
					};
					std::vector<ParamChangeLog> paramChangeLogs;
					int taskId;
					std::string dbClusterId;
					std::string dbInstanceName;
					std::string dbInstanceId;
				};


				DescribeDBClusterConfigChangeLogsResult();
				explicit DescribeDBClusterConfigChangeLogsResult(const std::string &payload);
				~DescribeDBClusterConfigChangeLogsResult();
				std::string getAccessDeniedDetail()const;
				Data getData()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string accessDeniedDetail_;
				Data data_;
				std::string dynamicCode_;
				std::string dynamicMessage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SELECTDB_MODEL_DESCRIBEDBCLUSTERCONFIGCHANGELOGSRESULT_H_