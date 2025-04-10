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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEINSTANCESDGSTATUSRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEINSTANCESDGSTATUSRESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribeInstanceSDGStatusResult : public ServiceResult
			{
			public:
				struct DeploymentStatusItem
				{
					std::string sDGId;
					std::string status;
					std::string mountType;
					std::string phase;
					std::string instanceId;
					std::string updateTime;
					std::string ensRegionId;
				};


				DescribeInstanceSDGStatusResult();
				explicit DescribeInstanceSDGStatusResult(const std::string &payload);
				~DescribeInstanceSDGStatusResult();
				std::string getTotalCount()const;
				std::string getPageSize()const;
				long getPageNumber()const;
				std::vector<DeploymentStatusItem> getDeploymentStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string pageSize_;
				long pageNumber_;
				std::vector<DeploymentStatusItem> deploymentStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEINSTANCESDGSTATUSRESULT_H_