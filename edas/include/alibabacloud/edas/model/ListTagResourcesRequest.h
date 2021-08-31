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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTTAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTTAGRESOURCESREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT ListTagResourcesRequest : public RoaServiceRequest
			{

			public:
				ListTagResourcesRequest();
				~ListTagResourcesRequest();

				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getResourceRegionId()const;
				void setResourceRegionId(const std::string& resourceRegionId);
				std::map<std::string, std::string> getResourceIds()const;
				void setResourceIds(const std::map<std::string, std::string>& resourceIds);
				std::map<std::string, std::string> getTags()const;
				void setTags(const std::map<std::string, std::string>& tags);

            private:
				std::string resourceType_;
				std::string resourceRegionId_;
				std::map<std::string, std::string> resourceIds_;
				std::map<std::string, std::string> tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTTAGRESOURCESREQUEST_H_