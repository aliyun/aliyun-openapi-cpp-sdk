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

#ifndef ALIBABACLOUD_FOAS_MODEL_LISTTAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_LISTTAGRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT ListTagResourcesRequest : public RoaServiceRequest
			{

			public:
				ListTagResourcesRequest();
				~ListTagResourcesRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getResourceIds()const;
				void setResourceIds(const std::string& resourceIds);
				std::string getTags()const;
				void setTags(const std::string& tags);

            private:
				std::string regionId_;
				std::string nextToken_;
				std::string resourceType_;
				std::string resourceIds_;
				std::string tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_LISTTAGRESOURCESREQUEST_H_