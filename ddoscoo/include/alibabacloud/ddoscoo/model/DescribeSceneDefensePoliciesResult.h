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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBESCENEDEFENSEPOLICIESRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBESCENEDEFENSEPOLICIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeSceneDefensePoliciesResult : public ServiceResult
			{
			public:
				struct Policy
				{
					struct Policy1
					{
						int status;
						int policyType;
						std::string oldValue;
						std::string newValue;
					};
					int status;
					int done;
					std::string _template;
					long endTime;
					long startTime;
					int objectCount;
					std::vector<Policy::Policy1> runtimePolicies;
					std::string policyId;
					std::string name;
				};


				DescribeSceneDefensePoliciesResult();
				explicit DescribeSceneDefensePoliciesResult(const std::string &payload);
				~DescribeSceneDefensePoliciesResult();
				std::vector<Policy> getPolicies()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Policy> policies_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBESCENEDEFENSEPOLICIESRESULT_H_