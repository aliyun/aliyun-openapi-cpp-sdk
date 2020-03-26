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

#ifndef ALIBABACLOUD_CMS_MODEL_REMOVETAGSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_REMOVETAGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT RemoveTagsRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				RemoveTagsRequest();
				~RemoveTagsRequest();

				std::vector<std::string> getGroupIds()const;
				void setGroupIds(const std::vector<std::string>& groupIds);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);

            private:
				std::vector<std::string> groupIds_;
				std::vector<Tag> tag_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_REMOVETAGSREQUEST_H_