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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBEZONESRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBEZONESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeZonesResult : public ServiceResult
			{
			public:
				struct Zone
				{
					struct SlaveZone
					{
						std::string zoneId;
						std::string localName;
					};
					std::vector<Zone::SlaveZone> slaveZones;
					std::string zoneId;
					std::string localName;
				};


				DescribeZonesResult();
				explicit DescribeZonesResult(const std::string &payload);
				~DescribeZonesResult();
				std::vector<Zone> getZones()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Zone> zones_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBEZONESRESULT_H_