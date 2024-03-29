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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETSERVICELISTPAGEREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_GETSERVICELISTPAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT GetServiceListPageRequest : public RoaServiceRequest
			{

			public:
				GetServiceListPageRequest();
				~GetServiceListPageRequest();

				std::string getServiceType()const;
				void setServiceType(const std::string& serviceType);
				std::string getSide()const;
				void setSide(const std::string& side);
				int getSize()const;
				void setSize(int size);
				std::string getOrigin()const;
				void setOrigin(const std::string& origin);
				std::string getSearchType()const;
				void setSearchType(const std::string& searchType);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				int getPage()const;
				void setPage(int page);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getSearchValue()const;
				void setSearchValue(const std::string& searchValue);

            private:
				std::string serviceType_;
				std::string side_;
				int size_;
				std::string origin_;
				std::string searchType_;
				std::string _namespace_;
				int page_;
				std::string region_;
				std::string searchValue_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETSERVICELISTPAGEREQUEST_H_