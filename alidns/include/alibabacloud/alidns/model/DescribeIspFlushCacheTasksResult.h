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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEISPFLUSHCACHETASKSRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEISPFLUSHCACHETASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeIspFlushCacheTasksResult : public ServiceResult
			{
			public:
				struct IspFlushCacheTask
				{
					std::string instanceName;
					std::string taskId;
					std::string domainName;
					std::string instanceId;
					std::string isp;
					std::string createTime;
					std::string taskStatus;
					long createTimestamp;
				};


				DescribeIspFlushCacheTasksResult();
				explicit DescribeIspFlushCacheTasksResult(const std::string &payload);
				~DescribeIspFlushCacheTasksResult();
				std::vector<IspFlushCacheTask> getIspFlushCacheTasks()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotalPages()const;
				int getTotalItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<IspFlushCacheTask> ispFlushCacheTasks_;
				int pageSize_;
				int pageNumber_;
				int totalPages_;
				int totalItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEISPFLUSHCACHETASKSRESULT_H_