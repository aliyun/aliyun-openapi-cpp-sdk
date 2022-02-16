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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTEMRAVAILABLERESOURCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTEMRAVAILABLERESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListEmrAvailableResourceResult : public ServiceResult
			{
			public:
				struct EmrZoneInfo
				{
					struct EmrResourceInfo
					{
						struct SupportedResource
						{
							struct EmrInstanceType
							{
								int memorySize;
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
								std::string instanceType;
							};
							int min;
							int max;
							EmrInstanceType emrInstanceType;
							std::string value;
							std::vector<std::string> supportNodeTypeList;
							std::string unit;
						};
						std::string type;
						std::vector<EmrResourceInfo::SupportedResource> supportedResourceList;
					};
					std::string zoneId;
					std::vector<EmrZoneInfo::EmrResourceInfo> emrResourceInfoList;
				};


				ListEmrAvailableResourceResult();
				explicit ListEmrAvailableResourceResult(const std::string &payload);
				~ListEmrAvailableResourceResult();
				std::vector<EmrZoneInfo> getEmrZoneInfoList()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<EmrZoneInfo> emrZoneInfoList_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTEMRAVAILABLERESOURCERESULT_H_