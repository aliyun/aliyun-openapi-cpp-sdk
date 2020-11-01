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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_CREATEDATATASKSRESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_CREATEDATATASKSRESULT_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT CreateDataTasksResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct SourceCluster
					{
						std::string type;
						int vpcInstancePort;
						std::string vpcId;
						std::string endpoint;
						std::string username;
						std::string dataSourceType;
						std::string vpcInstanceId;
						std::string index;
						std::string password;
					};
					struct SinkCluster
					{
						std::string type;
						std::string vpcId;
						std::string vpcInstancePort;
						std::string username;
						std::string dataSourceType;
						std::string routing;
						std::string index;
						std::string mapping;
						std::string vpcInstanceId;
						std::string settings;
						std::string password;
					};
					SourceCluster sourceCluster;
					SinkCluster sinkCluster;
				};


				CreateDataTasksResult();
				explicit CreateDataTasksResult(const std::string &payload);
				~CreateDataTasksResult();
				std::vector<ResultItem> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_CREATEDATATASKSRESULT_H_