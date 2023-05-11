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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINRECORDINFORESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINRECORDINFORESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDomainRecordInfoResult : public ServiceResult
			{
			public:


				DescribeDomainRecordInfoResult();
				explicit DescribeDomainRecordInfoResult(const std::string &payload);
				~DescribeDomainRecordInfoResult();
				std::string getStatus()const;
				std::string getRR()const;
				std::string getGroupName()const;
				std::string getDomainName()const;
				long getPriority()const;
				std::string getPunyCode()const;
				long getTTL()const;
				std::string getGroupId()const;
				std::string getRemark()const;
				std::string getLine()const;
				bool getLocked()const;
				std::string getType()const;
				std::string getDomainId()const;
				std::string getValue()const;
				std::string getRecordId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string rR_;
				std::string groupName_;
				std::string domainName_;
				long priority_;
				std::string punyCode_;
				long tTL_;
				std::string groupId_;
				std::string remark_;
				std::string line_;
				bool locked_;
				std::string type_;
				std::string domainId_;
				std::string value_;
				std::string recordId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINRECORDINFORESULT_H_