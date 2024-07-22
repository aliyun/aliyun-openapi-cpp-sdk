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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_GETREGIONALINSTANCECONFIGRESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_GETREGIONALINSTANCECONFIGRESULT_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT GetRegionalInstanceConfigResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ClientNodeAmountRange
					{
						int minAmount;
						int maxAmount;
					};
					struct DataNodeAmountRange
					{
						int minAmount;
						int maxAmount;
					};
					struct MasterDiskListItem
					{
						struct SubClassificationConfinesItem
						{
							int minSize;
							std::string performanceLevel;
							int maxSize;
						};
						std::string diskType;
						int minSize;
						int scaleLimit;
						std::vector<MasterDiskListItem::SubClassificationConfinesItem> subClassificationConfines;
						int maxSize;
					};
					struct ClientNodeDiskListItem
					{
						std::string diskType;
						int minSize;
						int scaleLimit;
						int maxSize;
					};
					struct DataNodeDiskListItem
					{
						struct SubClassificationConfinesItem2
						{
							int minSize;
							std::string performanceLevel;
							int maxSize;
						};
						std::string diskType;
						int minSize;
						std::vector<DataNodeDiskListItem::SubClassificationConfinesItem2> subClassificationConfines1;
						int scaleLimit;
						int maxSize;
						std::vector<std::string> valueLimitSet;
					};
					std::vector<std::string> dataNodeSpecs;
					std::vector<std::string> masterSpecs;
					ClientNodeAmountRange clientNodeAmountRange;
					std::vector<std::string> versions;
					std::vector<MasterDiskListItem> masterDiskList;
					std::vector<std::string> masterAmountRange;
					DataNodeAmountRange dataNodeAmountRange;
					std::vector<std::string> kibanaSpecs;
					std::vector<DataNodeDiskListItem> dataNodeDiskList;
					std::vector<ClientNodeDiskListItem> clientNodeDiskList;
					std::vector<std::string> clientSpecs;
					std::string specInfoMap;
				};


				GetRegionalInstanceConfigResult();
				explicit GetRegionalInstanceConfigResult(const std::string &payload);
				~GetRegionalInstanceConfigResult();
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_GETREGIONALINSTANCECONFIGRESULT_H_