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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEISPFLUSHCACHETASKRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEISPFLUSHCACHETASKRESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeIspFlushCacheTaskResult : public ServiceResult
			{
			public:
				struct FlushCacheResult
				{
					struct DnsNode
					{
						struct Answer
						{
							std::string type;
							std::string record;
							long ttl;
							std::string name;
						};
						std::string status;
						std::vector<DnsNode::Answer> answers;
						std::string spName;
						std::string nodeIp;
					};
					std::vector<FlushCacheResult::DnsNode> dnsNodes;
					std::string province;
				};


				DescribeIspFlushCacheTaskResult();
				explicit DescribeIspFlushCacheTaskResult(const std::string &payload);
				~DescribeIspFlushCacheTaskResult();
				std::string getInstanceName()const;
				std::string getTaskId()const;
				std::string getDomainName()const;
				std::string getInstanceId()const;
				std::string getIsp()const;
				std::string getCreateTime()const;
				std::vector<FlushCacheResult> getFlushCacheResults()const;
				std::string getTaskStatus()const;
				long getCreateTimestamp()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string instanceName_;
				std::string taskId_;
				std::string domainName_;
				std::string instanceId_;
				std::string isp_;
				std::string createTime_;
				std::vector<FlushCacheResult> flushCacheResults_;
				std::string taskStatus_;
				long createTimestamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEISPFLUSHCACHETASKRESULT_H_