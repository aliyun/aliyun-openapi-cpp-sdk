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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEWORKFLOWACTIVITYRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEWORKFLOWACTIVITYRESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribeWorkflowActivityResult : public ServiceResult
			{
			public:
				struct ActivityInfos
				{
					std::string gmtStart;
					std::string gmtEnd;
					std::string gmtCreate;
					std::string input;
					std::string activityName;
					std::string state;
					std::string activityId;
					std::string output;
					std::string workerNode;
					std::string error;
					std::string duration;
					std::string method;
				};


				DescribeWorkflowActivityResult();
				explicit DescribeWorkflowActivityResult(const std::string &payload);
				~DescribeWorkflowActivityResult();
				std::vector<ActivityInfos> getActivityInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ActivityInfos> activityInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEWORKFLOWACTIVITYRESULT_H_