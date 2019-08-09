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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINCCATTACKINFORESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINCCATTACKINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainCCAttackInfoResult : public ServiceResult
			{
			public:
				struct AttackIpDatas
				{
					std::string ip;
					std::string attackCount;
					std::string result;
				};
				struct AttackedUrlDatas
				{
					std::string attackCount;
					std::string url;
					std::string result;
				};


				DescribeDomainCCAttackInfoResult();
				explicit DescribeDomainCCAttackInfoResult(const std::string &payload);
				~DescribeDomainCCAttackInfoResult();
				std::string getEndTime()const;
				std::string getDomainName()const;
				std::vector<AttackIpDatas> getAttackIpDataList()const;
				std::string getStartTime()const;
				std::vector<AttackedUrlDatas> getAttackedUrlDataList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string domainName_;
				std::vector<AttackIpDatas> attackIpDataList_;
				std::string startTime_;
				std::vector<AttackedUrlDatas> attackedUrlDataList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINCCATTACKINFORESULT_H_