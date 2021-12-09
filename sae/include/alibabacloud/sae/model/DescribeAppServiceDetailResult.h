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

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPSERVICEDETAILRESULT_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPSERVICEDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DescribeAppServiceDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Method
					{
						struct ParameterDefinition
						{
							std::string type;
							std::string description;
							std::string name;
						};
						std::vector<Method::ParameterDefinition> parameterDefinitions;
						std::vector<std::string> parameterDetails;
						std::string methodController;
						std::vector<std::string> requestMethods;
						std::vector<std::string> parameterTypes;
						std::vector<std::string> paths;
						std::string returnType;
						std::string returnDetails;
						std::string name;
						std::string nameDetail;
					};
					std::string group;
					std::string serviceName;
					std::string version;
					std::string serviceType;
					std::string edasAppName;
					std::string metadata;
					std::vector<Method> methods;
					std::string springApplicationName;
					std::string dubboApplicationName;
				};


				DescribeAppServiceDetailResult();
				explicit DescribeAppServiceDetailResult(const std::string &payload);
				~DescribeAppServiceDetailResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPSERVICEDETAILRESULT_H_