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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEGADINSTANCESRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEGADINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeGadInstancesResult : public ServiceResult
			{
			public:
				struct GadInstancesItem
				{
					struct GadInstanceMembersItem
					{
						std::string role;
						std::string status;
						std::string engineVersion;
						std::string resourceGroupId;
						std::string dBInstanceID;
						std::string regionId;
						std::string dtsInstance;
						std::string engine;
					};
					std::string status;
					std::string description;
					std::string creationTime;
					std::string gadInstanceName;
					std::string service;
					std::string modificationTime;
					std::vector<GadInstancesItem::GadInstanceMembersItem> gadInstanceMembers;
				};


				DescribeGadInstancesResult();
				explicit DescribeGadInstancesResult(const std::string &payload);
				~DescribeGadInstancesResult();
				std::vector<GadInstancesItem> getGadInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<GadInstancesItem> gadInstances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEGADINSTANCESRESULT_H_