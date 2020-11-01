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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBEDIAGNOSEREPORTREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBEDIAGNOSEREPORTREQUEST_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT DescribeDiagnoseReportRequest : public RoaServiceRequest
			{

			public:
				DescribeDiagnoseReportRequest();
				~DescribeDiagnoseReportRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getReportId()const;
				void setReportId(const std::string& reportId);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string instanceId_;
				std::string reportId_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBEDIAGNOSEREPORTREQUEST_H_