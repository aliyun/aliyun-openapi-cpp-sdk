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

#ifndef ALIBABACLOUD_MTS_MODEL_DESCRIBEMTSUSERRESOURCEPACKAGERESULT_H_
#define ALIBABACLOUD_MTS_MODEL_DESCRIBEMTSUSERRESOURCEPACKAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT DescribeMtsUserResourcePackageResult : public ServiceResult
			{
			public:
				struct ResourcePackageInfo
				{
					std::string status;
					std::string initCapacity;
					std::string instanceId;
					std::string displayName;
					std::string commodityCode;
					std::string currCapacity;
				};


				DescribeMtsUserResourcePackageResult();
				explicit DescribeMtsUserResourcePackageResult(const std::string &payload);
				~DescribeMtsUserResourcePackageResult();
				std::vector<ResourcePackageInfo> getResourcePackageInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResourcePackageInfo> resourcePackageInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_DESCRIBEMTSUSERRESOURCEPACKAGERESULT_H_