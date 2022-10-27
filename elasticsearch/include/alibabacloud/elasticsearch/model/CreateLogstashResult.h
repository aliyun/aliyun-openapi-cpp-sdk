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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_CREATELOGSTASHRESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_CREATELOGSTASHRESULT_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT CreateLogstashResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct NetworkConfig
					{
						std::string type;
						std::string vpcId;
						std::string vswitchId;
						std::string vsArea;
					};
					struct NodeSpec
					{
						std::string diskType;
						std::string spec;
						long disk;
					};
					struct EndpointListItem
					{
						std::string zoneId;
						long port;
						std::string host;
					};
					struct ZoneInfosItem
					{
						std::string status;
						std::string zoneId;
					};
					struct TagsItem
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					std::string description;
					std::string resourceGroupId;
					long endTime;
					std::string instanceId;
					std::string config;
					std::vector<ZoneInfosItem> zoneInfos;
					std::string createdAt;
					NetworkConfig networkConfig;
					long nodeAmount;
					std::string updatedAt;
					std::vector<TagsItem> tags;
					std::string version;
					bool dataNode;
					NodeSpec nodeSpec;
					std::string paymentType;
					std::vector<EndpointListItem> endpointList;
					std::string protocol;
					long zoneCount;
				};


				CreateLogstashResult();
				explicit CreateLogstashResult(const std::string &payload);
				~CreateLogstashResult();
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_CREATELOGSTASHRESULT_H_