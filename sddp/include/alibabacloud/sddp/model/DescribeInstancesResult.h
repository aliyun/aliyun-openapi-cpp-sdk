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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct ModelTagsItem
					{
						long id;
						std::string name;
					};
					std::string owner;
					std::string odpsRiskLevelName;
					std::string productId;
					int s2Count;
					long riskLevelId;
					std::string name;
					std::string regionName;
					int s1Count;
					std::vector<Instance::ModelTagsItem> modelTags;
					bool sensitive;
					std::string engineType;
					bool protection;
					std::string ruleName;
					std::string productCode;
					std::string tenantName;
					std::string countDetails;
					float riskScore;
					std::string acl;
					std::string departName;
					float lastRiskScore;
					bool labelsec;
					std::string fileCountDetails;
					int totalCount;
					std::string sensLevelName;
					long lastFinishTime;
					long creationTime;
					std::string instanceDescription;
					std::string riskLevelName;
					std::string regionId;
					long id;
					int sensitiveCount;
					int s3Count;
				};


				DescribeInstancesResult();
				explicit DescribeInstancesResult(const std::string &payload);
				~DescribeInstancesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Instance> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Instance> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESRESULT_H_