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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTQUEUESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTQUEUESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListQueuesResult : public ServiceResult
			{
			public:
				struct QueueInfo
				{
					struct Instance
					{
						float spotPriceLimit;
						std::string instanceType;
					};
					std::string hostNameSuffix;
					std::string networkInterfaceTrafficMode;
					std::vector<QueueInfo::Instance> spotInstanceTypes;
					bool enableAutoGrow;
					std::string resourceGroupId;
					std::vector<std::string> computeInstanceType;
					std::string deploymentSetId;
					bool useESS;
					std::string type;
					std::string imageId;
					std::string hostNamePrefix;
					std::string queueName;
					std::string spotStrategy;
				};


				ListQueuesResult();
				explicit ListQueuesResult(const std::string &payload);
				~ListQueuesResult();
				std::vector<QueueInfo> getQueues()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<QueueInfo> queues_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTQUEUESRESULT_H_