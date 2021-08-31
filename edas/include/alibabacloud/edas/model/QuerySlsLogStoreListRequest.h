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

#ifndef ALIBABACLOUD_EDAS_MODEL_QUERYSLSLOGSTORELISTREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_QUERYSLSLOGSTORELISTREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT QuerySlsLogStoreListRequest : public RoaServiceRequest
			{

			public:
				QuerySlsLogStoreListRequest();
				~QuerySlsLogStoreListRequest();

				std::string getAppId()const;
				void setAppId(const std::string& appId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getType()const;
				void setType(const std::string& type);

            private:
				std::string appId_;
				int pageSize_;
				int currentPage_;
				std::string type_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_QUERYSLSLOGSTORELISTREQUEST_H_