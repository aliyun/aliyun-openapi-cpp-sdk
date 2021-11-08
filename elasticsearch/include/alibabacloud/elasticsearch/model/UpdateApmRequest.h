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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_UPDATEAPMREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_UPDATEAPMREQUEST_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT UpdateApmRequest : public RoaServiceRequest
			{

			public:
				UpdateApmRequest();
				~UpdateApmRequest();

				std::string getOutputES()const;
				void setOutputES(const std::string& outputES);
				std::string getOutputESPassword()const;
				void setOutputESPassword(const std::string& outputESPassword);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getYml()const;
				void setYml(const std::string& yml);
				std::string getOutputESUserName()const;
				void setOutputESUserName(const std::string& outputESUserName);
				std::string getToken()const;
				void setToken(const std::string& token);

            private:
				std::string outputES_;
				std::string outputESPassword_;
				std::string instanceId_;
				std::string yml_;
				std::string outputESUserName_;
				std::string token_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_UPDATEAPMREQUEST_H_