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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINDETAILRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT DescribeVodDomainDetailResult : public ServiceResult
			{
			public:
				struct DomainDetail
				{
					struct Source
					{
						std::string type;
						std::string priority;
						std::string content;
						int port;
						std::string enabled;
						std::string weight;
					};
					std::string description;
					std::string scope;
					std::string domainName;
					std::string sSLPub;
					std::string gmtModified;
					std::string gmtCreated;
					std::string certName;
					std::vector<Source> sources;
					std::string cname;
					std::string weight;
					std::string domainStatus;
					std::string sSLProtocol;
				};


				DescribeVodDomainDetailResult();
				explicit DescribeVodDomainDetailResult(const std::string &payload);
				~DescribeVodDomainDetailResult();
				DomainDetail getDomainDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				DomainDetail domainDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINDETAILRESULT_H_