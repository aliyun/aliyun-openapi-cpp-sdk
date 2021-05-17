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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEDOMAINDETAILRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEDOMAINDETAILRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeDomainDetailResult : public ServiceResult
			{
			public:
				struct DomainDetailItem
				{
					std::string instanceName;
					std::string assetType;
					std::string uuid;
					std::string internetIp;
					std::string instanceId;
					std::string machineIp;
					std::string intranetIp;
				};


				DescribeDomainDetailResult();
				explicit DescribeDomainDetailResult(const std::string &payload);
				~DescribeDomainDetailResult();
				std::vector<DomainDetailItem> getDomainDetailItems()const;
				std::string getRootDomain()const;
				std::string getDomain()const;
				int getVulCount()const;
				int getAlarmCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DomainDetailItem> domainDetailItems_;
				std::string rootDomain_;
				std::string domain_;
				int vulCount_;
				int alarmCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEDOMAINDETAILRESULT_H_