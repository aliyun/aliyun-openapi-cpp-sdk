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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_GETFUNCTIONCURRENTVERSIONRESULT_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_GETFUNCTIONCURRENTVERSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/opensearch/OpenSearchExport.h>

namespace AlibabaCloud
{
	namespace OpenSearch
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENSEARCH_EXPORT GetFunctionCurrentVersionResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct VersionConfig
					{
						struct CreateParametersItem
						{
							std::string required;
							std::string name;
						};
						struct DependsItem
						{
							std::string condition;
							std::string description;
							std::string dependency;
						};
						struct UsageParametersItem
						{
							std::string required;
							std::string name;
						};
						std::vector<UsageParametersItem> usageParameters;
						std::vector<DependsItem> depends;
						std::vector<CreateParametersItem> createParameters;
					};
					long versionId;
					std::string functionName;
					std::string functionType;
					std::string modelType;
					std::string versionName;
					VersionConfig versionConfig;
				};


				GetFunctionCurrentVersionResult();
				explicit GetFunctionCurrentVersionResult(const std::string &payload);
				~GetFunctionCurrentVersionResult();
				std::string getStatus()const;
				long getHttpCode()const;
				std::string getMessage()const;
				std::string getCode()const;
				Result getResult()const;
				long getLatency()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				long httpCode_;
				std::string message_;
				std::string code_;
				Result result_;
				long latency_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_GETFUNCTIONCURRENTVERSIONRESULT_H_