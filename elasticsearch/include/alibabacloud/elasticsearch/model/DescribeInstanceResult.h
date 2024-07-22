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
						std::string specInfo;
						bool diskEncryption;
						std::string performanceLevel;
						std::string spec;
						int disk;
					};
					struct NetworkConfig
					{
						struct WhiteIpGroupListItem
						{
							std::string groupName;
							std::string whiteIpType;
							std::vector<std::string> ips;
						};
						std::string type;
						std::string vpcId;
						std::vector<WhiteIpGroupListItem> whiteIpGroupList;
						std::string vswitchId;
						std::string vsArea;
					};
					struct KibanaConfiguration
					{
						std::string specInfo;
						int amount;
						std::string spec;
						int disk;
					};
					struct MasterConfiguration
					{
						std::string diskType;
						std::string specInfo;
						int amount;
						std::string spec;
						int disk;
					};
					struct ClientNodeConfiguration
					{
						std::string diskType;
						std::string specInfo;
						int amount;
						std::string spec;
						int disk;
					};
					struct WarmNodeConfiguration
					{
						std::string diskType;
						std::string specInfo;
						bool diskEncryption;
						int amount;
						std::string spec;
						int disk;
					};
					struct AdvancedSetting
					{
						std::string gcName;
					};
					struct ElasticDataNodeConfiguration
					{
						std::string diskType;
						std::string specInfo;
						bool diskEncryption;
						int amount;
						std::string spec;
						int disk;
					};
					struct DictListItem
					{
						std::string type;
						std::string sourceType;
						long fileSize;
						std::string name;
					};
					struct SynonymsDictsItem
					{
						std::string type;
						std::string sourceType;
						long fileSize;
						std::string name;
					};
					struct ZoneInfo
					{
						std::string status;
						std::string zoneId;
					};
					struct Dict
					{
						std::string type;
						std::string sourceType;
						long fileSize;
						std::string name;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					struct IkHotDictsItem
					{
						std::string type;
						std::string sourceType;
						int fileSize;
						std::string name;
					};
					MasterConfiguration masterConfiguration;
					std::string resourceGroupId;
					ElasticDataNodeConfiguration elasticDataNodeConfiguration;
					bool dedicateMaster;
					std::vector<std::string> esIPBlacklist;
					std::vector<ZoneInfo> zoneInfos;
					std::string createdAt;
					int port;
					std::vector<std::string> kibanaPrivateIPWhitelist;
					KibanaConfiguration kibanaConfiguration;
					bool serviceVpc;
					std::string postpaidServiceStatus;
					bool haveKibana;
					std::string status;
					std::vector<std::string> extendConfigs;
					std::string instanceId;
					bool isNewDeployment;
					bool enableKibanaPrivateNetwork;
					std::vector<DictListItem> dictList;
					std::string kibanaDomain;
					std::vector<Tag> tags;
					std::vector<IkHotDictsItem> ikHotDicts;
					NodeSpec nodeSpec;
					bool warmNode;
					WarmNodeConfiguration warmNodeConfiguration;
					std::string domain;
					bool haveClientNode;
					ClientNodeConfiguration clientNodeConfiguration;
					std::string description;
					bool enablePublic;
					std::string archType;
					bool advancedDedicateMaster;
					std::string paymentType;
					std::string protocol;
					std::vector<std::string> publicIpWhitelist;
					std::vector<Dict> aliwsDicts;
					int kibanaPort;
					bool enableKibanaPublicNetwork;
					NetworkConfig networkConfig;
					AdvancedSetting advancedSetting;
					std::string instanceCategory;
					int nodeAmount;
					std::string esVersion;
					std::string updatedAt;
					std::string publicDomain;
					std::string esConfig;
					long endtime;
					std::vector<std::string> esIPWhitelist;
					std::vector<std::string> kibanaIPWhitelist;
					std::vector<std::string> privateNetworkIpWhiteList;
					std::string vpcInstanceId;
					std::vector<SynonymsDictsItem> synonymsDicts;
					int publicPort;
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