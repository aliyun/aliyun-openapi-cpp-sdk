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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATECLIENTCERTIFICATEWITHCSRRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_CREATECLIENTCERTIFICATEWITHCSRRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT CreateClientCertificateWithCsrResult : public ServiceResult
			{
			public:


				CreateClientCertificateWithCsrResult();
				explicit CreateClientCertificateWithCsrResult(const std::string &payload);
				~CreateClientCertificateWithCsrResult();
				std::string getCertKmcRep1()const;
				std::string getIdentifier()const;
				std::string getSerialNumber()const;
				std::string getParentX509Certificate()const;
				std::string getCertificateChain()const;
				std::string getRootX509Certificate()const;
				std::string getX509Certificate()const;
				std::string getCertSignBufKmc()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string certKmcRep1_;
				std::string identifier_;
				std::string serialNumber_;
				std::string parentX509Certificate_;
				std::string certificateChain_;
				std::string rootX509Certificate_;
				std::string x509Certificate_;
				std::string certSignBufKmc_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_CREATECLIENTCERTIFICATEWITHCSRRESULT_H_