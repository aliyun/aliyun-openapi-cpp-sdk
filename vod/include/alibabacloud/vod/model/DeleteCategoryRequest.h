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

#ifndef ALIBABACLOUD_VOD_MODEL_DELETECATEGORYREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DELETECATEGORYREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT DeleteCategoryRequest : public RpcServiceRequest
			{

			public:
				DeleteCategoryRequest();
				~DeleteCategoryRequest();

				std::string getResourceOwnerId()const;
				void setResourceOwnerId(const std::string& resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getCateId()const;
				void setCateId(long cateId);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);

            private:
				std::string resourceOwnerId_;
				std::string resourceOwnerAccount_;
				long cateId_;
				std::string ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_DELETECATEGORYREQUEST_H_