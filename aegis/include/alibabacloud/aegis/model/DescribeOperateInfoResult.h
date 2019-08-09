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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEOPERATEINFORESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEOPERATEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeOperateInfoResult : public ServiceResult
			{
			public:


				DescribeOperateInfoResult();
				explicit DescribeOperateInfoResult(const std::string &payload);
				~DescribeOperateInfoResult();
				std::vector<std::string> getVulValueArray()const;
				std::vector<std::string> getVulAaggregatValueArray()const;
				std::vector<std::string> getHealthCheckAaggregatValueArray()const;
				int getSecurityEventDealedCount()const;
				std::vector<std::string> getSuspEventValueArray()const;
				std::vector<std::string> getSuspEventAaggregatValueArray()const;
				int getVulnerabilityDealedCount()const;
				std::vector<std::string> getDateArray()const;
				std::vector<std::string> getHealthCheckValueArray()const;
				int getHealthCheckDealedCount()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> vulValueArray_;
				std::vector<std::string> vulAaggregatValueArray_;
				std::vector<std::string> healthCheckAaggregatValueArray_;
				int securityEventDealedCount_;
				std::vector<std::string> suspEventValueArray_;
				std::vector<std::string> suspEventAaggregatValueArray_;
				int vulnerabilityDealedCount_;
				std::vector<std::string> dateArray_;
				std::vector<std::string> healthCheckValueArray_;
				int healthCheckDealedCount_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEOPERATEINFORESULT_H_