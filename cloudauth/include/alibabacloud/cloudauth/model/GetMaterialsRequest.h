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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_GETMATERIALSREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_GETMATERIALSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT GetMaterialsRequest : public RpcServiceRequest
			{

			public:
				GetMaterialsRequest();
				~GetMaterialsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getBiz()const;
				void setBiz(const std::string& biz);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getTicketId()const;
				void setTicketId(const std::string& ticketId);

            private:
				long resourceOwnerId_;
				std::string biz_;
				std::string sourceIp_;
				std::string ticketId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_GETMATERIALSREQUEST_H_