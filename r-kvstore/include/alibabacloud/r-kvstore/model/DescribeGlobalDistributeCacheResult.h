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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEGLOBALDISTRIBUTECACHERESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEGLOBALDISTRIBUTECACHERESULT_H_

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
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeGlobalDistributeCacheResult : public ServiceResult
			{
			public:
				struct GlobalDistributeCache
				{
					struct SubInstance
					{
						std::string instanceID;
						std::string instanceStatus;
						std::string instanceClass;
						std::string globalInstanceId;
						std::string regionId;
					};
					std::string status;
					std::vector<GlobalDistributeCache::SubInstance> subInstances;
					std::string globalInstanceId;
					std::string globalInstanceName;
				};


				DescribeGlobalDistributeCacheResult();
				explicit DescribeGlobalDistributeCacheResult(const std::string &payload);
				~DescribeGlobalDistributeCacheResult();
				int getTotalRecordCount()const;
				std::vector<GlobalDistributeCache> getGlobalDistributeCaches()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				std::vector<GlobalDistributeCache> globalDistributeCaches_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEGLOBALDISTRIBUTECACHERESULT_H_