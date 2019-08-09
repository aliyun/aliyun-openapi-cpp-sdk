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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBELOGICINSTANCETOPOLOGYRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBELOGICINSTANCETOPOLOGYRESULT_H_

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
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeLogicInstanceTopologyResult : public ServiceResult
			{
			public:
				struct NodeInfo
				{
					std::string capacity;
					std::string bandwidth;
					std::string nodeType;
					std::string nodeId;
					std::string connection;
				};


				DescribeLogicInstanceTopologyResult();
				explicit DescribeLogicInstanceTopologyResult(const std::string &payload);
				~DescribeLogicInstanceTopologyResult();
				std::vector<NodeInfo> getRedisShardList()const;
				std::string getInstanceId()const;
				std::vector<NodeInfo> getRedisProxyList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NodeInfo> redisShardList_;
				std::string instanceId_;
				std::vector<NodeInfo> redisProxyList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBELOGICINSTANCETOPOLOGYRESULT_H_