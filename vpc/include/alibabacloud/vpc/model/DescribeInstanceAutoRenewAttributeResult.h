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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeInstanceAutoRenewAttributeResult : public ServiceResult
			{
			public:
				struct InstanceRenewAttribute
				{
					std::string instanceId;
					std::string pricingCycle;
					std::string renewalStatus;
					int duration;
				};


				DescribeInstanceAutoRenewAttributeResult();
				explicit DescribeInstanceAutoRenewAttributeResult(const std::string &payload);
				~DescribeInstanceAutoRenewAttributeResult();
				std::string getTotalCount()const;
				std::vector<InstanceRenewAttribute> getInstanceRenewAttributes()const;
				std::string getPageSize()const;
				std::string getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::vector<InstanceRenewAttribute> instanceRenewAttributes_;
				std::string pageSize_;
				std::string pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESULT_H_