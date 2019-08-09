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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTAVAILABLEECSTYPESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTAVAILABLEECSTYPESRESULT_H_

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
			class ALIBABACLOUD_EHPC_EXPORT ListAvailableEcsTypesResult : public ServiceResult
			{
			public:
				struct InstanceTypeFamilyInfo
				{
					struct TypesInfo
					{
						std::string status;
						int memorySize;
						int instancePpsTx;
						int cpuCoreCount;
						std::string gPUSpec;
						int instancePpsRx;
						std::string instanceTypeId;
						int instanceBandwidthRx;
						int eniQuantity;
						int gPUAmount;
						int instanceBandwidthTx;
					};
					std::string instanceTypeFamilyId;
					std::vector<InstanceTypeFamilyInfo::TypesInfo> types;
					std::string generation;
				};


				ListAvailableEcsTypesResult();
				explicit ListAvailableEcsTypesResult(const std::string &payload);
				~ListAvailableEcsTypesResult();
				bool getSupportSpotInstance()const;
				std::vector<InstanceTypeFamilyInfo> getInstanceTypeFamilies()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool supportSpotInstance_;
				std::vector<InstanceTypeFamilyInfo> instanceTypeFamilies_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTAVAILABLEECSTYPESRESULT_H_