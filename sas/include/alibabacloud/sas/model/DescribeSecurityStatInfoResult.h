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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESECURITYSTATINFORESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESECURITYSTATINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeSecurityStatInfoResult : public ServiceResult
			{
			public:
				struct SecurityEvent
				{
					std::vector<std::string> suspiciousList;
					int totalCount;
					std::vector<std::string> levelsOn;
					int suspiciousCount;
					std::vector<std::string> seriousList;
					std::vector<std::string> timeArray;
					int remindCount;
					int seriousCount;
					std::vector<std::string> valueArray;
					std::vector<std::string> remindList;
					std::vector<std::string> dateArray;
				};
				struct AttackEvent
				{
					int totalCount;
					std::vector<std::string> dateArray1;
					std::vector<std::string> valueArray2;
				};
				struct HealthCheck
				{
					std::vector<std::string> levelsOn5;
					int totalCount;
					std::vector<std::string> highList;
					int highCount;
					std::vector<std::string> lowList;
					std::vector<std::string> mediumList;
					std::vector<std::string> valueArray3;
					int lowCount;
					int mediumCount;
					std::vector<std::string> timeArray4;
					std::vector<std::string> dateArray6;
				};
				struct Vulnerability
				{
					int totalCount;
					std::vector<std::string> asapList;
					std::vector<std::string> valueArray7;
					std::vector<std::string> laterList;
					std::vector<std::string> dateArray10;
					int laterCount;
					int asapCount;
					std::vector<std::string> timeArray8;
					std::vector<std::string> nntfList;
					std::vector<std::string> levelsOn9;
					int nntfCount;
				};


				DescribeSecurityStatInfoResult();
				explicit DescribeSecurityStatInfoResult(const std::string &payload);
				~DescribeSecurityStatInfoResult();
				SecurityEvent getSecurityEvent()const;
				HealthCheck getHealthCheck()const;
				Vulnerability getVulnerability()const;
				AttackEvent getAttackEvent()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				SecurityEvent securityEvent_;
				HealthCheck healthCheck_;
				Vulnerability vulnerability_;
				AttackEvent attackEvent_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESECURITYSTATINFORESULT_H_