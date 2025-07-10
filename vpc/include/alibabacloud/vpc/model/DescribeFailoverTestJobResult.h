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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEFAILOVERTESTJOBRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEFAILOVERTESTJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeFailoverTestJobResult : public ServiceResult
			{
			public:
				struct FailoverTestJobModel
				{
					std::string status;
					std::string description;
					std::string jobType;
					std::string jobDuration;
					std::vector<std::string> resourceId;
					std::string startTime;
					std::string resourceType;
					std::string jobId;
					std::string name;
					std::string stopTime;
				};


				DescribeFailoverTestJobResult();
				explicit DescribeFailoverTestJobResult(const std::string &payload);
				~DescribeFailoverTestJobResult();
				FailoverTestJobModel getFailoverTestJobModel()const;

			protected:
				void parse(const std::string &payload);
			private:
				FailoverTestJobModel failoverTestJobModel_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEFAILOVERTESTJOBRESULT_H_