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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCETYPESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCETYPESRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeInstanceTypesResult : public ServiceResult
			{
			public:
				struct InstanceType
				{
					float memorySize;
					long instancePpsTx;
					int cpuCoreCount;
					long localStorageCapacity;
					std::string instanceTypeFamily;
					long instancePpsRx;
					int initialCredit;
					int eniQuantity;
					int instanceBandwidthRx;
					int gPUAmount;
					int instanceBandwidthTx;
					int localStorageAmount;
					std::string localStorageCategory;
					std::string gPUSpec;
					int baselineCredit;
					std::string instanceFamilyLevel;
					std::string instanceTypeId;
					int eniPrivateIpAddressQuantity;
				};


				DescribeInstanceTypesResult();
				explicit DescribeInstanceTypesResult(const std::string &payload);
				~DescribeInstanceTypesResult();
				std::vector<InstanceType> getInstanceTypes()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InstanceType> instanceTypes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCETYPESRESULT_H_