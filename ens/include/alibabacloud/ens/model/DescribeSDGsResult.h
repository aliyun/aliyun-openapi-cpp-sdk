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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBESDGSRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBESDGSRESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribeSDGsResult : public ServiceResult
			{
			public:
				struct SDGsItem
				{
					struct AvaliableRegionIdsItem
					{
						std::string status;
						std::string snapshotId;
						std::string creationTime;
						std::string regionId;
					};
					struct DeployedInstanceIdsItem
					{
						std::string status;
						std::string instanceId;
						std::string creationTime;
						std::string deploymentType;
					};
					std::string sDGId;
					std::string status;
					std::vector<SDGsItem::AvaliableRegionIdsItem> avaliableRegionIds;
					std::string description;
					long size;
					std::string creationRegionId;
					std::string creationTime;
					std::string updateTime;
					std::vector<SDGsItem::DeployedInstanceIdsItem> deployedInstanceIds;
					std::string parentSDGId;
					std::string creationInstanceId;
				};


				DescribeSDGsResult();
				explicit DescribeSDGsResult(const std::string &payload);
				~DescribeSDGsResult();
				std::vector<SDGsItem> getSDGs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SDGsItem> sDGs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBESDGSRESULT_H_