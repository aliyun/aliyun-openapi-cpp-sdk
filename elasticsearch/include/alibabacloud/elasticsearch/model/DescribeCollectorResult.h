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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBECOLLECTORRESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBECOLLECTORRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/elasticsearch/ElasticsearchExport.h>

namespace AlibabaCloud
{
	namespace Elasticsearch
	{
		namespace Model
		{
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT DescribeCollectorResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ConfigsItem
					{
						std::string content;
						std::string fileName;
					};
					struct ExtendConfigsItem
					{
						struct MachinesItem
						{
							std::string agentStatus;
							std::string instanceId;
						};
						std::vector<std::string> hosts;
						std::string userName;
						std::string instanceId;
						bool enableMonitoring;
						std::string host;
						std::string kibanaHost;
						std::string groupId;
						std::string type;
						std::string totalPodsCount;
						std::string successPodsCount;
						std::vector<ExtendConfigsItem::MachinesItem> machines;
						std::string protocol;
						std::string instanceType;
						std::string configType;
					};
					std::string status;
					std::vector<ConfigsItem> configs;
					std::string resVersion;
					std::string gmtCreatedTime;
					std::string resId;
					bool dryRun;
					std::string gmtUpdateTime;
					std::vector<ExtendConfigsItem> extendConfigs;
					std::string resType;
					std::string name;
					std::vector<std::string> collectorPaths;
					std::string ownerId;
					std::string vpcId;
				};


				DescribeCollectorResult();
				explicit DescribeCollectorResult(const std::string &payload);
				~DescribeCollectorResult();
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBECOLLECTORRESULT_H_