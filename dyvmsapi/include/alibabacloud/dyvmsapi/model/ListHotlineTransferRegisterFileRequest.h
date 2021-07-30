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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_LISTHOTLINETRANSFERREGISTERFILEREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_LISTHOTLINETRANSFERREGISTERFILEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT ListHotlineTransferRegisterFileRequest : public RpcServiceRequest
			{

			public:
				ListHotlineTransferRegisterFileRequest();
				~ListHotlineTransferRegisterFileRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getHotlineNumber()const;
				void setHotlineNumber(const std::string& hotlineNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getQualificationId()const;
				void setQualificationId(const std::string& qualificationId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNo()const;
				void setPageNo(int pageNo);

            private:
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string hotlineNumber_;
				int pageSize_;
				std::string qualificationId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				int pageNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_LISTHOTLINETRANSFERREGISTERFILEREQUEST_H_