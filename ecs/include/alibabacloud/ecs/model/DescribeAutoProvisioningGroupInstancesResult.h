<<<<<<< HEAD
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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPINSTANCESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeAutoProvisioningGroupInstancesResult : public ServiceResult
			{
			public:
=======
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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPINSTANCESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeAutoProvisioningGroupInstancesResult : public ServiceResult
			{
			public:
>>>>>>> master
				struct Instance
				{
					std::string status;
					bool isSpot;
					bool ioOptimized;
					std::string zoneId;
					std::string instanceId;
					std::string osType;
					int memory;
					std::string networkType;
					std::string creationTime;
					int cPU;
					std::string regionId;
					std::string instanceType;
				};
<<<<<<< HEAD


				DescribeAutoProvisioningGroupInstancesResult();
				explicit DescribeAutoProvisioningGroupInstancesResult(const std::string &payload);
				~DescribeAutoProvisioningGroupInstancesResult();
=======


				DescribeAutoProvisioningGroupInstancesResult();
				explicit DescribeAutoProvisioningGroupInstancesResult(const std::string &payload);
				~DescribeAutoProvisioningGroupInstancesResult();
>>>>>>> master
				std::vector<Instance> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
<<<<<<< HEAD

			protected:
				void parse(const std::string &payload);
			private:
=======

			protected:
				void parse(const std::string &payload);
			private:
>>>>>>> master
				std::vector<Instance> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;
<<<<<<< HEAD

			};
		}
	}
}
=======

			};
		}
	}
}
>>>>>>> master
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPINSTANCESRESULT_H_