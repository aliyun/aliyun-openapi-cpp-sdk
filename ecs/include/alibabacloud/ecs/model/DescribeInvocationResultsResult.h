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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONRESULTSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONRESULTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeInvocationResultsResult : public ServiceResult
			{
			public:
				struct Invocation
				{
					struct InvocationResult
					{
						std::string instanceId;
						std::string output;
						long exitCode;
						std::string startTime;
						std::string commandId;
						std::string invokeRecordStatus;
						std::string finishedTime;
						std::string invokeId;
					};
					std::vector<InvocationResult> invocationResults;
					long totalCount;
					long pageSize;
					long pageNumber;
				};


				DescribeInvocationResultsResult();
				explicit DescribeInvocationResultsResult(const std::string &payload);
				~DescribeInvocationResultsResult();
				Invocation getInvocation()const;

			protected:
				void parse(const std::string &payload);
			private:
				Invocation invocation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONRESULTSRESULT_H_