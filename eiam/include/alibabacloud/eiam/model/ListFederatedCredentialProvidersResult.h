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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTFEDERATEDCREDENTIALPROVIDERSRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTFEDERATEDCREDENTIALPROVIDERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT ListFederatedCredentialProvidersResult : public ServiceResult
			{
			public:
				struct FederatedCredentialProvider
				{
					struct PrivateCaProviderConfig
					{
						struct Certificate
						{
							struct CertificateMetadata
							{
								long notBefore;
								long notAfter;
							};
							CertificateMetadata certificateMetadata;
							std::string fingerprint;
							std::string content;
						};
						std::string trustAnchorSource;
						std::vector<Certificate> certificates;
						std::string trustCondition;
					};
					struct OidcProviderConfig
					{
						std::string jwksUri;
						std::string issuer;
						std::vector<std::string> audiences;
						long jwksLastObtainedTime;
						std::string staticJwks;
						std::string jwksSource;
						std::string trustCondition;
						std::string dynamicJwks;
					};
					struct Pkcs7ProviderConfig
					{
						struct Certificate2
						{
							struct CertificateMetadata3
							{
								long notBefore;
								long notAfter;
							};
							std::string fingerprint;
							std::string content;
							CertificateMetadata3 certificateMetadata3;
						};
						long signatureEffectiveTime;
						std::vector<Certificate2> certificates1;
						std::string trustAnchorSource;
						std::string cmsVerificationMode;
						std::string signingTimeValueExpression;
						std::string trustCondition;
					};
					std::string status;
					PrivateCaProviderConfig privateCaProviderConfig;
					std::string description;
					std::string instanceId;
					OidcProviderConfig oidcProviderConfig;
					Pkcs7ProviderConfig pkcs7ProviderConfig;
					long createTime;
					long updateTime;
					std::string federatedCredentialProviderType;
					std::string networkAccessEndpointId;
					std::string federatedCredentialProviderName;
					std::string federatedCredentialProviderId;
				};


				ListFederatedCredentialProvidersResult();
				explicit ListFederatedCredentialProvidersResult(const std::string &payload);
				~ListFederatedCredentialProvidersResult();
				std::vector<FederatedCredentialProvider> getFederatedCredentialProviders()const;
				int getTotalCount()const;
				std::string getPreviousToken()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FederatedCredentialProvider> federatedCredentialProviders_;
				int totalCount_;
				std::string previousToken_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTFEDERATEDCREDENTIALPROVIDERSRESULT_H_