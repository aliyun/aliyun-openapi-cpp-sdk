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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNHTTPSDOMAINLISTREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNHTTPSDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnHttpsDomainListRequest : public RpcServiceRequest
			{

			public:
				DescribeDcdnHttpsDomainListRequest();
				~DescribeDcdnHttpsDomainListRequest();

				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				int pageNumber_;
				int pageSize_;
				std::string keyword_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNHTTPSDOMAINLISTREQUEST_H_