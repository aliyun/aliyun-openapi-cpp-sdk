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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTLOGSTASHREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTLOGSTASHREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/elasticsearch/ElasticsearchExport.h>

namespace AlibabaCloud
{
	namespace Elasticsearch
	{
		namespace Model
		{
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListLogstashRequest : public RoaServiceRequest
			{

			public:
				ListLogstashRequest();
				~ListLogstashRequest();

				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getSize()const;
				void setSize(int size);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getPage()const;
				void setPage(int page);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getVersion()const;
				void setVersion(const std::string& version);

            private:
				std::string resourceGroupId_;
				std::string instanceId_;
				int size_;
				std::string description_;
				int page_;
				std::string ownerId_;
				std::string version_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTLOGSTASHREQUEST_H_