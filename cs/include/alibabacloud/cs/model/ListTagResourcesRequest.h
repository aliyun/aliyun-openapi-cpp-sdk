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

#ifndef ALIBABACLOUD_CS_MODEL_LISTTAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_LISTTAGRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT ListTagResourcesRequest : public RoaServiceRequest
			{

			public:
				ListTagResourcesRequest();
				~ListTagResourcesRequest();

				std::string getResource_type()const;
				void setResource_type(const std::string& resource_type);
				std::string getNext_token()const;
				void setNext_token(const std::string& next_token);
				std::string getResource_ids()const;
				void setResource_ids(const std::string& resource_ids);
				std::string getTags()const;
				void setTags(const std::string& tags);

            private:
				std::string resource_type_;
				std::string next_token_;
				std::string resource_ids_;
				std::string tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_LISTTAGRESOURCESREQUEST_H_