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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEENSREGIONIDIPV6INFORESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEENSREGIONIDIPV6INFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeEnsRegionIdIpv6InfoResult : public ServiceResult
			{
			public:
				struct SupportIpv6Info
				{
					bool supportIpv6;
					std::string ensRegionId;
				};


				DescribeEnsRegionIdIpv6InfoResult();
				explicit DescribeEnsRegionIdIpv6InfoResult(const std::string &payload);
				~DescribeEnsRegionIdIpv6InfoResult();
				SupportIpv6Info getSupportIpv6Info()const;

			protected:
				void parse(const std::string &payload);
			private:
				SupportIpv6Info supportIpv6Info_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEENSREGIONIDIPV6INFORESULT_H_