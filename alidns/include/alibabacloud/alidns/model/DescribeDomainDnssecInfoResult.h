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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINDNSSECINFORESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINDNSSECINFORESULT_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDomainDnssecInfoResult : public ServiceResult
			{
			public:


				DescribeDomainDnssecInfoResult();
				explicit DescribeDomainDnssecInfoResult(const std::string &payload);
				~DescribeDomainDnssecInfoResult();
				std::string getStatus()const;
				std::string getDigest()const;
				std::string getDomainName()const;
				std::string getPublicKey()const;
				std::string getDigestType()const;
				std::string getDsRecord()const;
				std::string getKeyTag()const;
				std::string getFlags()const;
				std::string getAlgorithm()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string digest_;
				std::string domainName_;
				std::string publicKey_;
				std::string digestType_;
				std::string dsRecord_;
				std::string keyTag_;
				std::string flags_;
				std::string algorithm_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINDNSSECINFORESULT_H_