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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBECDNWAFDOMAINRESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBECDNWAFDOMAINRESULT_H_

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
			class ALIBABACLOUD_CDN_EXPORT DescribeCdnWafDomainResult : public ServiceResult
			{
			public:
				struct OutPutDomain
				{
					std::string status;
					std::string aclStatus;
					std::string ccStatus;
					std::string domain;
					std::string wafStatus;
				};


				DescribeCdnWafDomainResult();
				explicit DescribeCdnWafDomainResult(const std::string &payload);
				~DescribeCdnWafDomainResult();
				int getTotalCount()const;
				std::vector<OutPutDomain> getOutPutDomains()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<OutPutDomain> outPutDomains_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBECDNWAFDOMAINRESULT_H_