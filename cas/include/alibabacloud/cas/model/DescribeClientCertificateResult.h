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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBECLIENTCERTIFICATERESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBECLIENTCERTIFICATERESULT_H_

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
			class ALIBABACLOUD_CAS_EXPORT DescribeClientCertificateResult : public ServiceResult
			{
			public:
				struct Certificate
				{
					std::string status;
					long afterDate;
					std::string sha2;
					std::string organization;
					std::string locality;
					std::string subjectDN;
					std::string algorithm;
					std::string parentIdentifier;
					std::string x509Certificate;
					std::string certificateType;
					std::string identifier;
					std::string serialNumber;
					std::string sans;
					std::string organizationUnit;
					std::string state;
					int days;
					std::string countryCode;
					int keySize;
					std::string commonName;
					long beforeDate;
					std::string signAlgorithm;
					std::string md5;
				};


				DescribeClientCertificateResult();
				explicit DescribeClientCertificateResult(const std::string &payload);
				~DescribeClientCertificateResult();
				Certificate getCertificate()const;

			protected:
				void parse(const std::string &payload);
			private:
				Certificate certificate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBECLIENTCERTIFICATERESULT_H_