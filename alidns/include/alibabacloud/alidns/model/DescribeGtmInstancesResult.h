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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCESRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeGtmInstancesResult : public ServiceResult
			{
			public:
				struct GtmInstance
				{
					long expireTimestamp;
					std::string userDomainName;
					std::string lbaStrategy;
					std::string resourceGroupId;
					std::string instanceId;
					std::string createTime;
					std::string cnameMode;
					int ttl;
					std::string cname;
					std::string instanceName;
					std::string versionCode;
					std::string alertGroup;
					int addressPoolNum;
					int accessStrategyNum;
					std::string expireTime;
					long createTimestamp;
				};


				DescribeGtmInstancesResult();
				explicit DescribeGtmInstancesResult(const std::string &payload);
				~DescribeGtmInstancesResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<GtmInstance> getGtmInstances()const;
				int getTotalPages()const;
				int getTotalItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::vector<GtmInstance> gtmInstances_;
				int totalPages_;
				int totalItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCESRESULT_H_