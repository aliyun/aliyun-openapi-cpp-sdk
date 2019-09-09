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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCERESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCERESULT_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListInstanceResult : public ServiceResult
			{
			public:
				struct Headers
				{
					int xTotalCount;
				};
				struct Instance
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
					struct MasterConfiguration
					{
						std::string diskType;
						int amount;
						std::string spec;
						int disk;
					};
					struct KibanaConfiguration
					{
						std::string diskType;
						int amount;
						std::string spec;
						int disk;
					};
					MasterConfiguration masterConfiguration;
					std::string status;
					std::string description;
					std::string instanceId;
					bool dedicateMaster;
					std::string createdAt;
					NetworkConfig networkConfig;
					int nodeAmount;
					std::string esVersion;
					std::string updatedAt;
					KibanaConfiguration kibanaConfiguration;
					bool advancedDedicateMaster;
					NodeSpec nodeSpec;
					std::string paymentType;
				};


				ListInstanceResult();
				explicit ListInstanceResult(const std::string &payload);
				~ListInstanceResult();
				Headers getHeaders()const;
				std::vector<Instance> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Headers headers_;
				std::vector<Instance> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCERESULT_H_