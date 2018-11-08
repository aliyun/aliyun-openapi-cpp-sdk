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

#ifndef ALIBABACLOUD_HSM_MODEL_DESCRIBEINSTANCESRESULT_H_
#define ALIBABACLOUD_HSM_MODEL_DESCRIBEINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hsm/HsmExport.h>

namespace AlibabaCloud
{
	namespace Hsm
	{
		namespace Model
		{
			class ALIBABACLOUD_HSM_EXPORT DescribeInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					std::string zoneId;
					std::string instanceId;
					std::string ip;
					long createTime;
					std::vector<std::string> whiteList;
					std::string vswitchId;
					std::string remark;
					std::string hsmOem;
					int hsmStatus;
					std::string vpcId;
					long expiredTime;
					std::string regionId;
					std::string hsmDeviceType;
				};


				DescribeInstancesResult();
				explicit DescribeInstancesResult(const std::string &payload);
				~DescribeInstancesResult();
				std::vector<Instance> getInstances()const;
				int getTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				int totalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HSM_MODEL_DESCRIBEINSTANCESRESULT_H_