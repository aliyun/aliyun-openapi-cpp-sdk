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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBEDIAGNOSEREPORTRESULT_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBEDIAGNOSEREPORTRESULT_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT DescribeDiagnoseReportResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct DiagnoseItemsItem
					{
						struct Detail
						{
							std::string desc;
							std::string type;
							std::string suggest;
							std::string name;
							std::string result;
						};
						std::string item;
						std::string health;
						Detail detail;
					};
					std::string trigger;
					std::string instanceId;
					std::string health;
					std::string state;
					long createTime;
					std::vector<DiagnoseItemsItem> diagnoseItems;
					std::string reportId;
				};


				DescribeDiagnoseReportResult();
				explicit DescribeDiagnoseReportResult(const std::string &payload);
				~DescribeDiagnoseReportResult();
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_DESCRIBEDIAGNOSEREPORTRESULT_H_