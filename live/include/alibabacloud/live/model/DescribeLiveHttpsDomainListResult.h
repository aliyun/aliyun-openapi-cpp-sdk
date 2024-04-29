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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEHTTPSDOMAINLISTRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEHTTPSDOMAINLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveHttpsDomainListResult : public ServiceResult
			{
			public:
				struct CertInfo
				{
					std::string certUpdateTime;
					std::string certStatus;
					std::string domainName;
					std::string certCommonName;
					std::string certType;
					std::string certExpireTime;
					std::string certName;
					std::string certStartTime;
				};


				DescribeLiveHttpsDomainListResult();
				explicit DescribeLiveHttpsDomainListResult(const std::string &payload);
				~DescribeLiveHttpsDomainListResult();
				std::vector<CertInfo> getCertInfos()const;
				int getTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CertInfo> certInfos_;
				int totalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEHTTPSDOMAINLISTRESULT_H_