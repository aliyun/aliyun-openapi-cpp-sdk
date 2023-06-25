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

#ifndef ALIBABACLOUD_DDOSBGP_MODEL_DESCRIBEINSTANCELISTRESULT_H_
#define ALIBABACLOUD_DDOSBGP_MODEL_DESCRIBEINSTANCELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddosbgp/DdosbgpExport.h>

namespace AlibabaCloud
{
	namespace Ddosbgp
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSBGP_EXPORT DescribeInstanceListResult : public ServiceResult
			{
			public:
				struct Instance
				{
					std::string status;
					long gmtCreate;
					bool autoRenewal;
					std::string ipType;
					std::string instanceId;
					std::string blackholdingCount;
					std::string product;
					long expireTime;
					std::string instanceType;
					int coverageType;
					std::string remark;
				};


				DescribeInstanceListResult();
				explicit DescribeInstanceListResult(const std::string &payload);
				~DescribeInstanceListResult();
				long getTotal()const;
				std::vector<Instance> getInstanceList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long total_;
				std::vector<Instance> instanceList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSBGP_MODEL_DESCRIBEINSTANCELISTRESULT_H_