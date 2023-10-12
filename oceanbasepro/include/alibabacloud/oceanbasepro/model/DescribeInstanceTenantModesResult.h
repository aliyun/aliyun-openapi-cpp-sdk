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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCETENANTMODESRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCETENANTMODESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeInstanceTenantModesResult : public ServiceResult
			{
			public:


				DescribeInstanceTenantModesResult();
				explicit DescribeInstanceTenantModesResult(const std::string &payload);
				~DescribeInstanceTenantModesResult();
				std::vector<std::string> getInstanceModes()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> instanceModes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCETENANTMODESRESULT_H_