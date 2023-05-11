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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAININFORESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAININFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDomainInfoResult : public ServiceResult
			{
			public:
				struct RecordLine
				{
					std::string fatherCode;
					std::string lineDisplayName;
					std::string lineCode;
					std::string lineName;
				};


				DescribeDomainInfoResult();
				explicit DescribeDomainInfoResult(const std::string &payload);
				~DescribeDomainInfoResult();
				std::string getRecordLineTreeJson()const;
				std::string getGroupName()const;
				bool getInBlackHole()const;
				bool getRegionLines()const;
				bool getSlaveDns()const;
				bool getAliDomain()const;
				std::string getResourceGroupId()const;
				std::string getInstanceId()const;
				std::string getDomainName()const;
				std::string getCreateTime()const;
				std::string getPunyCode()const;
				std::vector<std::string> getDnsServers()const;
				std::string getRemark()const;
				std::string getGroupId()const;
				std::vector<RecordLine> getRecordLines()const;
				std::string getVersionCode()const;
				std::string getDomainId()const;
				std::vector<std::string> getAvailableTtls()const;
				long getMinTtl()const;
				bool getInClean()const;
				std::string getVersionName()const;
				std::string getLineType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string recordLineTreeJson_;
				std::string groupName_;
				bool inBlackHole_;
				bool regionLines_;
				bool slaveDns_;
				bool aliDomain_;
				std::string resourceGroupId_;
				std::string instanceId_;
				std::string domainName_;
				std::string createTime_;
				std::string punyCode_;
				std::vector<std::string> dnsServers_;
				std::string remark_;
				std::string groupId_;
				std::vector<RecordLine> recordLines_;
				std::string versionCode_;
				std::string domainId_;
				std::vector<std::string> availableTtls_;
				long minTtl_;
				bool inClean_;
				std::string versionName_;
				std::string lineType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAININFORESULT_H_