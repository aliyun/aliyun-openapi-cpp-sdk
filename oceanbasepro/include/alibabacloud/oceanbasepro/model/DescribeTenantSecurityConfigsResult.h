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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTSECURITYCONFIGSRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTSECURITYCONFIGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeTenantSecurityConfigsResult : public ServiceResult
			{
			public:
				struct Configs
				{
					struct TenantSecurityConfigsItem
					{
						struct SecurityConfigsItem
						{
							std::string configName;
							std::string riskDescription;
							bool risk;
							std::string configDescription;
							std::string configGroup;
						};
						std::vector<TenantSecurityConfigsItem::SecurityConfigsItem> securityConfigs;
						std::string tenantId;
						std::string tenantName;
						int riskCount;
					};
					std::string checkTime;
					std::string checkId;
					std::string instanceId;
					int totalCheckCount;
					std::vector<TenantSecurityConfigsItem> tenantSecurityConfigs;
					int totalRiskCount;
				};


				DescribeTenantSecurityConfigsResult();
				explicit DescribeTenantSecurityConfigsResult(const std::string &payload);
				~DescribeTenantSecurityConfigsResult();
				Configs getConfigs()const;

			protected:
				void parse(const std::string &payload);
			private:
				Configs configs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTSECURITYCONFIGSRESULT_H_