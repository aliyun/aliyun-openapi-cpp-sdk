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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_DESCRIBETRAILSRESULT_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_DESCRIBETRAILSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/actiontrail/ActiontrailExport.h>

namespace AlibabaCloud
{
	namespace Actiontrail
	{
		namespace Model
		{
			class ALIBABACLOUD_ACTIONTRAIL_EXPORT DescribeTrailsResult : public ServiceResult
			{
			public:
				struct Trail
				{
					std::string status;
					std::string homeRegion;
					std::string createTime;
					std::string startLoggingTime;
					std::string stopLoggingTime;
					std::string slsWriteRoleArn;
					std::string organizationId;
					std::string trailRegion;
					std::string ossBucketLocation;
					bool isOrganizationTrail;
					std::string name;
					std::string slsProjectArn;
					std::string eventRW;
					std::string updateTime;
					std::string ossKeyPrefix;
					std::string region;
					std::string ossBucketName;
					std::string ossWriteRoleArn;
					long isShadowTrail;
					std::string trailArn;
				};


				DescribeTrailsResult();
				explicit DescribeTrailsResult(const std::string &payload);
				~DescribeTrailsResult();
				std::vector<Trail> getTrailList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Trail> trailList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_DESCRIBETRAILSRESULT_H_