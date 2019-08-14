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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNCERTIFICATEDETAILREQUEST_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNCERTIFICATEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scdn/ScdnExport.h>

namespace AlibabaCloud
{
	namespace Scdn
	{
		namespace Model
		{
			class ALIBABACLOUD_SCDN_EXPORT DescribeScdnCertificateDetailRequest : public RpcServiceRequest
			{

			public:
				DescribeScdnCertificateDetailRequest();
				~DescribeScdnCertificateDetailRequest();

				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getCertName()const;
				void setCertName(const std::string& certName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string securityToken_;
				std::string certName_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNCERTIFICATEDETAILREQUEST_H_