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

#ifndef ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCELISTRESULT_H_
#define ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hitsdb/HitsdbExport.h>

namespace AlibabaCloud
{
	namespace Hitsdb
	{
		namespace Model
		{
			class ALIBABACLOUD_HITSDB_EXPORT GetLindormInstanceListResult : public ServiceResult
			{
			public:
				struct LindormInstanceSummary
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					long expiredMilliseconds;
					std::string instanceStorage;
					std::string zoneId;
					std::string resourceGroupId;
					std::string instanceId;
					std::string createTime;
					std::string payType;
					std::string vpcId;
					bool enableCompute;
					std::string networkType;
					std::string serviceType;
					std::string instanceAlias;
					std::string instanceStatus;
					bool enableStream;
					std::string engineType;
					std::string regionId;
					std::string expireTime;
					long createMilliseconds;
					std::vector<LindormInstanceSummary::Tag> tags;
					long aliUid;
				};


				GetLindormInstanceListResult();
				explicit GetLindormInstanceListResult(const std::string &payload);
				~GetLindormInstanceListResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<LindormInstanceSummary> getInstanceList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<LindormInstanceSummary> instanceList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCELISTRESULT_H_