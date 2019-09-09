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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBEINSTANCERESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBEINSTANCERESULT_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT DescribeInstanceResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct NodeSpec
					{
						std::string diskType;
						std::string spec;
						int disk;
					};
					struct NetworkConfig
					{
						std::string type;
						std::string vpcId;
						std::string vswitchId;
						std::string vsArea;
					};
					struct KibanaConfiguration
					{
						std::string diskType;
						int amount;
						std::string spec;
						int disk;
					};
					struct MasterConfiguration
					{
						std::string diskType;
						int amount;
						std::string spec;
						int disk;
					};
					struct ClientNodeConfiguration
					{
						std::string diskType;
						int amount;
						std::string spec;
						int disk;
					};
					struct WarmNodeConfiguration
					{
						std::string diskType;
						int amount;
						std::string spec;
						int disk;
					};
					struct DictListItem
					{
						std::string type;
						std::string sourceType;
						std::string name;
						long fileSize;
					};
					struct SynonymsDictsItem
					{
						std::string type;
						std::string sourceType;
						std::string name;
						long fileSize;
					};
					struct ZoneInfo
					{
						std::string status;
						std::string zoneId;
					};
					MasterConfiguration masterConfiguration;
					std::string description;
					bool dedicateMaster;
					std::vector<std::string> esIPBlacklist;
					std::vector<ZoneInfo> zoneInfos;
					std::string createdAt;
					int port;
					bool enablePublic;
					KibanaConfiguration kibanaConfiguration;
					bool advancedDedicateMaster;
					std::string paymentType;
					std::string protocol;
					bool haveKibana;
					std::string status;
					std::vector<std::string> publicIpWhitelist;
					std::string instanceId;
					int kibanaPort;
					bool enableKibanaPublicNetwork;
					NetworkConfig networkConfig;
					int nodeAmount;
					std::string esVersion;
					std::string updatedAt;
					std::vector<DictListItem> dictList;
					std::string kibanaDomain;
					std::string publicDomain;
					std::string esConfig;
					std::vector<std::string> esIPWhitelist;
					std::vector<std::string> kibanaIPWhitelist;
					NodeSpec nodeSpec;
					bool warmNode;
					std::vector<std::string> privateNetworkIpWhiteList;
					std::string vpcInstanceId;
					WarmNodeConfiguration warmNodeConfiguration;
					std::vector<SynonymsDictsItem> synonymsDicts;
					std::string domain;
					bool haveClientNode;
					int publicPort;
					ClientNodeConfiguration clientNodeConfiguration;
					int zoneCount;
				};


				DescribeInstanceResult();
				explicit DescribeInstanceResult(const std::string &payload);
				~DescribeInstanceResult();
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBEINSTANCERESULT_H_