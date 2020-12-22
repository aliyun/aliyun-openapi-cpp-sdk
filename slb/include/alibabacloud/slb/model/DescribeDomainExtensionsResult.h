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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBEDOMAINEXTENSIONSRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBEDOMAINEXTENSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeDomainExtensionsResult : public ServiceResult
			{
			public:
				struct DomainExtension
				{
					struct Certificate
					{
						std::string certificateId;
						std::string encryptionAlgorithm;
					};
					struct ServerCertificate
					{
						std::string certificateId;
						std::string bindingType;
						std::string encryptionAlgorithm;
						std::string standardType;
					};
					std::string domainExtensionId;
					std::vector<DomainExtension::Certificate> certificates;
					std::vector<DomainExtension::ServerCertificate> serverCertificates;
					std::string serverCertificateId;
					std::string domain;
				};


				DescribeDomainExtensionsResult();
				explicit DescribeDomainExtensionsResult(const std::string &payload);
				~DescribeDomainExtensionsResult();
				std::vector<DomainExtension> getDomainExtensions()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DomainExtension> domainExtensions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBEDOMAINEXTENSIONSRESULT_H_