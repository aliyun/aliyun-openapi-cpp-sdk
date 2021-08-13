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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEQOSPOLICIESRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEQOSPOLICIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeQosPoliciesResult : public ServiceResult
			{
			public:
				struct QosPolicy
				{
					std::string description;
					std::string endTime;
					std::string qosPolicyId;
					std::string sourcePortRange;
					std::string sourceCidr;
					int priority;
					std::string startTime;
					std::string destPortRange;
					std::vector<std::string> dpiGroupIds;
					std::string name;
					std::string destCidr;
					std::vector<std::string> dpiSignatureIds;
					std::string ipProtocol;
					std::string qosId;
				};


				DescribeQosPoliciesResult();
				explicit DescribeQosPoliciesResult(const std::string &payload);
				~DescribeQosPoliciesResult();
				std::vector<QosPolicy> getQosPolicies()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<QosPolicy> qosPolicies_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEQOSPOLICIESRESULT_H_