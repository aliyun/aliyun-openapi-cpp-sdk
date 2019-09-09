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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_GETREGIONCONFIGURATIONRESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_GETREGIONCONFIGURATIONRESULT_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT GetRegionConfigurationResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Node
					{
						int minAmount;
						int maxAmount;
					};
					struct JvmConfine
					{
						std::vector<std::string> supportGcs;
						int memory;
						std::vector<std::string> supportEsVersions;
					};
					struct ClientNodeAmountRange
					{
						int minAmount;
						int maxAmount;
					};
					struct WarmNodeProperties
					{
						struct AmountRange
						{
							int minAmount;
							int maxAmount;
						};
						struct Disk1
						{
							std::string diskType;
							int minSize;
							int scaleLimit;
							std::vector<std::string> valueLimitSet2;
							int maxSize;
						};
						std::vector<Disk1> diskList;
						AmountRange amountRange;
						std::vector<std::string> spec;
					};
					struct KibanaNodeProperties
					{
						struct AmountRange4
						{
							int minAmount;
							int maxAmount;
						};
						AmountRange4 amountRange4;
						std::vector<std::string> spec3;
					};
					struct DataDiskListItem
					{
						std::string diskType;
						int minSize;
						int scaleLimit;
						int maxSize;
						std::vector<std::string> valueLimitSet;
					};
					struct EsVersionsLatestListItem
					{
						std::string value;
						std::string key;
					};
					struct NodeSpecListItem
					{
						std::string diskType;
						int memorySize;
						int cpuCount;
						bool enable;
						std::string spec;
						std::string specGroupType;
						int disk;
					};
					struct Disk
					{
						std::string diskType;
						int minSize;
						int scaleLimit;
						int maxSize;
					};
					std::vector<DataDiskListItem> dataDiskList;
					std::vector<NodeSpecListItem> nodeSpecList;
					ClientNodeAmountRange clientNodeAmountRange;
					std::vector<Disk> masterDiskList;
					Node node;
					WarmNodeProperties warmNodeProperties;
					std::vector<Disk> clientNodeDiskList;
					std::vector<EsVersionsLatestListItem> esVersionsLatestList;
					std::string env;
					std::vector<std::string> clientNodeSpec;
					std::string createUrl;
					std::vector<std::string> zones;
					JvmConfine jvmConfine;
					KibanaNodeProperties kibanaNodeProperties;
					std::string regionId;
					std::vector<std::string> esVersions;
					std::vector<std::string> masterSpec;
				};


				GetRegionConfigurationResult();
				explicit GetRegionConfigurationResult(const std::string &payload);
				~GetRegionConfigurationResult();
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_GETREGIONCONFIGURATIONRESULT_H_