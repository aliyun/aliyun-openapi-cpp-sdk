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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEDEFAULTVPCRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEDEFAULTVPCRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreateDefaultVpcResult : public ServiceResult
			{
			public:
				struct DefaultVSwitch
				{
					std::string zoneId;
					std::string vSwitchId;
				};


				CreateDefaultVpcResult();
				explicit CreateDefaultVpcResult(const std::string &payload);
				~CreateDefaultVpcResult();
				std::string getVRouterId()const;
				std::vector<DefaultVSwitch> getDefaultVSwitchs()const;
				std::string getRouteTableId()const;
				std::string getVpcId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string vRouterId_;
				std::vector<DefaultVSwitch> defaultVSwitchs_;
				std::string routeTableId_;
				std::string vpcId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEDEFAULTVPCRESULT_H_