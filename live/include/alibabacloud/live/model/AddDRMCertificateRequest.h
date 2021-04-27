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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDDRMCERTIFICATEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDDRMCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT AddDRMCertificateRequest : public RpcServiceRequest
			{

			public:
				AddDRMCertificateRequest();
				~AddDRMCertificateRequest();

				std::string getServCert()const;
				void setServCert(const std::string& servCert);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getPrivateKey()const;
				void setPrivateKey(const std::string& privateKey);
				std::string getCertName()const;
				void setCertName(const std::string& certName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAsk()const;
				void setAsk(const std::string& ask);
				std::string getPassphrase()const;
				void setPassphrase(const std::string& passphrase);

            private:
				std::string servCert_;
				std::string description_;
				std::string privateKey_;
				std::string certName_;
				long ownerId_;
				std::string ask_;
				std::string passphrase_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDDRMCERTIFICATEREQUEST_H_