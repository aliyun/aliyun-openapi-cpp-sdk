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

#ifndef ALIBABACLOUD_CAS_MODEL_LISTTAGKEYSREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_LISTTAGKEYSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT ListTagKeysRequest : public RpcServiceRequest
			{

			public:
				ListTagKeysRequest();
				~ListTagKeysRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);

            private:
				std::string sourceIp_;
				std::string regionId_;
				int pageSize_;
				int currentPage_;
				std::string resourceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_LISTTAGKEYSREQUEST_H_