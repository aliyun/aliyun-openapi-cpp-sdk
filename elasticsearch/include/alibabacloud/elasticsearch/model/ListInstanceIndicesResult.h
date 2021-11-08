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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEINDICESRESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEINDICESRESULT_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListInstanceIndicesResult : public ServiceResult
			{
			public:
				struct Headers
				{
					long xOSSStorageSize;
					int xOSSCount;
					int xManagedCount;
					long xManagedStorageSize;
				};
				struct ResultItem
				{
					std::string managedStatus;
					std::string phase;
					std::string health;
					long size;
					std::string createTime;
					std::string isManaged;
					std::string ilmExplain;
					std::string name;
				};


				ListInstanceIndicesResult();
				explicit ListInstanceIndicesResult(const std::string &payload);
				~ListInstanceIndicesResult();
				Headers getHeaders()const;
				std::vector<ResultItem> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Headers headers_;
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEINDICESRESULT_H_