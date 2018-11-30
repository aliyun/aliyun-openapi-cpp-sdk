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

#ifndef ALIBABACLOUD_VOD_MODEL_ADDCATEGORYREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_ADDCATEGORYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT AddCategoryRequest : public RpcServiceRequest
			{

			public:
				AddCategoryRequest();
				~AddCategoryRequest();

				std::string getResourceOwnerId()const;
				void setResourceOwnerId(const std::string& resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				long getParentId()const;
				void setParentId(long parentId);
				std::string getCateName()const;
				void setCateName(const std::string& cateName);

            private:
				std::string resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerId_;
				long parentId_;
				std::string cateName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_ADDCATEGORYREQUEST_H_