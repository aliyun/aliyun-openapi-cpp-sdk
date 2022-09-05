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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBECONFIGOFVERSIONRESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBECONFIGOFVERSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeConfigOfVersionResult : public ServiceResult
			{
			public:
				struct VersionConfig
				{
					struct FunctionArg
					{
						std::string argValue;
						std::string argName;
					};
					std::string status;
					std::string functionName;
					std::vector<VersionConfig::FunctionArg> functionArgs;
					std::string configId;
				};


				DescribeConfigOfVersionResult();
				explicit DescribeConfigOfVersionResult(const std::string &payload);
				~DescribeConfigOfVersionResult();
				std::vector<VersionConfig> getVersionConfigs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<VersionConfig> versionConfigs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBECONFIGOFVERSIONRESULT_H_