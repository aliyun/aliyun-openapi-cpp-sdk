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

#ifndef ALIBABACLOUD_CLOUDPHOTO_MODEL_LISTREGISTEREDTAGSREQUEST_H_
#define ALIBABACLOUD_CLOUDPHOTO_MODEL_LISTREGISTEREDTAGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudphoto/CloudPhotoExport.h>

namespace AlibabaCloud
{
	namespace CloudPhoto
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDPHOTO_EXPORT ListRegisteredTagsRequest : public RpcServiceRequest
			{

			public:
				ListRegisteredTagsRequest();
				~ListRegisteredTagsRequest();

				std::string getStoreName()const;
				void setStoreName(const std::string& storeName);
				std::vector<std::string> getLang()const;
				void setLang(const std::vector<std::string>& lang);

            private:
				std::string storeName_;
				std::vector<std::string> lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDPHOTO_MODEL_LISTREGISTEREDTAGSREQUEST_H_