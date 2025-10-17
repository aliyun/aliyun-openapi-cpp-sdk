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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAPPLICATIONPARAMETERSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAPPLICATIONPARAMETERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeApplicationParametersResult : public ServiceResult
			{
			public:
				struct Parameters
				{
					struct ComponentParameter
					{
						struct _Parameter
						{
							std::string status;
							bool readOnly;
							std::string pattern;
							std::string type;
							std::string description;
							std::string value;
							bool needRestart;
							std::string _default;
							std::string name;
						};
						std::string componentType;
						std::vector<ComponentParameter::_Parameter> parameters1;
						std::string componentId;
					};
					std::vector<ComponentParameter> componentParameters;
				};
				struct ParameterTemplates
				{
					struct ComponentParameterTemplate
					{
						struct _Parameter3
						{
							bool readOnly;
							std::string pattern;
							std::string type;
							std::string description;
							bool needRestart;
							std::string _default;
							std::string name;
						};
						std::vector<ComponentParameterTemplate::_Parameter3> parameters2;
						std::string componentType;
						std::string parameterTemplateId;
						std::string componentId;
						std::string parentParameterTemplateId;
					};
					std::vector<ComponentParameterTemplate> componentParameterTemplates;
				};


				DescribeApplicationParametersResult();
				explicit DescribeApplicationParametersResult(const std::string &payload);
				~DescribeApplicationParametersResult();
				Parameters getParameters()const;
				ParameterTemplates getParameterTemplates()const;

			protected:
				void parse(const std::string &payload);
			private:
				Parameters parameters_;
				ParameterTemplates parameterTemplates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAPPLICATIONPARAMETERSRESULT_H_