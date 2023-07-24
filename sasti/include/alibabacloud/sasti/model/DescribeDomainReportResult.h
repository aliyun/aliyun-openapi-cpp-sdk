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

#ifndef ALIBABACLOUD_SASTI_MODEL_DESCRIBEDOMAINREPORTRESULT_H_
#define ALIBABACLOUD_SASTI_MODEL_DESCRIBEDOMAINREPORTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sasti/SastiExport.h>

namespace AlibabaCloud
{
	namespace Sasti
	{
		namespace Model
		{
			class ALIBABACLOUD_SASTI_EXPORT DescribeDomainReportResult : public ServiceResult
			{
			public:


				DescribeDomainReportResult();
				explicit DescribeDomainReportResult(const std::string &payload);
				~DescribeDomainReportResult();
				std::string getContext()const;
				std::string getBasic()const;
				std::string getGroup()const;
				std::string getSslCert()const;
				std::string getThreatTypes()const;
				std::string getIntelligences()const;
				std::string getScenario()const;
				std::string getAttackCntByThreatType()const;
				std::string getWhois()const;
				std::string getThreatLevel()const;
				std::string getConfidence()const;
				std::string getDomain()const;
				std::string getAttackPreferenceTop5()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string context_;
				std::string basic_;
				std::string group_;
				std::string sslCert_;
				std::string threatTypes_;
				std::string intelligences_;
				std::string scenario_;
				std::string attackCntByThreatType_;
				std::string whois_;
				std::string threatLevel_;
				std::string confidence_;
				std::string domain_;
				std::string attackPreferenceTop5_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SASTI_MODEL_DESCRIBEDOMAINREPORTRESULT_H_