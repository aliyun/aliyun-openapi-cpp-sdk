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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBE95TRAFFICRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBE95TRAFFICRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT Describe95TrafficResult : public ServiceResult
			{
			public:
				struct Traffic95Summary
				{
					struct Traffic95Detail
					{
						std::string inBandwidth;
						std::string outBandwidth;
						std::string billBandwidth;
						std::string time;
					};
					std::vector<Traffic95Detail> traffic95DetailList;
					std::string instanceId;
					std::string fifthPeakBandwidth;
					long bandwidth;
					std::string minimumConsumeBandwidth;
					std::string internetChargeType;
				};


				Describe95TrafficResult();
				explicit Describe95TrafficResult(const std::string &payload);
				~Describe95TrafficResult();
				Traffic95Summary getTraffic95Summary()const;

			protected:
				void parse(const std::string &payload);
			private:
				Traffic95Summary traffic95Summary_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBE95TRAFFICRESULT_H_