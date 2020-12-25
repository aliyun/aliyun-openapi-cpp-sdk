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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTVSWITCHRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTVSWITCHRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListVswitchResult : public ServiceResult
			{
			public:
				struct Vswitch
				{
					std::string status;
					bool isDefault;
					std::string description;
					std::string vpcId;
					std::string zoneId;
					std::string resourceGroupId;
					std::string vSwitchId;
					std::string availableIpAddressCount;
					std::string creationTime;
					std::string cidrBlock;
					std::string vSwitchName;
				};


				ListVswitchResult();
				explicit ListVswitchResult(const std::string &payload);
				~ListVswitchResult();
				std::vector<Vswitch> getVswitchList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Vswitch> vswitchList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTVSWITCHRESULT_H_