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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTLLMCONFIGSRESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTLLMCONFIGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>

namespace AlibabaCloud
{
	namespace PaiFeatureStore
	{
		namespace Model
		{
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT ListLLMConfigsResult : public ServiceResult
			{
			public:
				struct LlmConfigsItem
				{
					int batchSize;
					std::string apiKey;
					std::string lLMConfigId;
					int rps;
					std::string resourceGroupId;
					int maxTokens;
					std::string model;
					std::string workspaceId;
					std::string baseUrl;
					std::string gmtCreateTime;
					std::string gmtModifiedTime;
					std::string name;
				};


				ListLLMConfigsResult();
				explicit ListLLMConfigsResult(const std::string &payload);
				~ListLLMConfigsResult();
				long getTotalCount()const;
				std::string getNextToken()const;
				std::vector<LlmConfigsItem> getLLMConfigs()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string nextToken_;
				std::vector<LlmConfigsItem> lLMConfigs_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTLLMCONFIGSRESULT_H_