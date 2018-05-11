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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINTOPURLVISITRESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINTOPURLVISITRESULT_H_

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
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainTopUrlVisitResult : public ServiceResult
			{
			public:
				struct UrlList
				{
					std::string visitData;
					float visitProportion;
					float flowProportion;
					std::string urlDetail;
					std::string flow;
				};


				DescribeDomainTopUrlVisitResult();
				explicit DescribeDomainTopUrlVisitResult(const std::string &payload);
				~DescribeDomainTopUrlVisitResult();
				std::vector<UrlList> getUrl200List()const;
				std::vector<UrlList> getUrl500List()const;
				std::vector<UrlList> getUrl400List()const;
				std::string getDomainName()const;
				std::string getStartTime()const;
				std::vector<UrlList> getUrl300List()const;
				std::vector<UrlList> getAllUrlList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<UrlList> url200List_;
				std::vector<UrlList> url500List_;
				std::vector<UrlList> url400List_;
				std::string domainName_;
				std::string startTime_;
				std::vector<UrlList> url300List_;
				std::vector<UrlList> allUrlList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINTOPURLVISITRESULT_H_