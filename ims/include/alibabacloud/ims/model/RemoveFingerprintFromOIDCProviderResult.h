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

#ifndef ALIBABACLOUD_IMS_MODEL_REMOVEFINGERPRINTFROMOIDCPROVIDERRESULT_H_
#define ALIBABACLOUD_IMS_MODEL_REMOVEFINGERPRINTFROMOIDCPROVIDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ims/ImsExport.h>

namespace AlibabaCloud
{
	namespace Ims
	{
		namespace Model
		{
			class ALIBABACLOUD_IMS_EXPORT RemoveFingerprintFromOIDCProviderResult : public ServiceResult
			{
			public:
				struct OIDCProvider
				{
					std::string updateDate;
					std::string gmtCreate;
					std::string description;
					std::string oIDCProviderName;
					std::string issuerUrl;
					std::string fingerprints;
					std::string gmtModified;
					long issuanceLimitTime;
					std::string arn;
					std::string createDate;
					std::string clientIds;
				};


				RemoveFingerprintFromOIDCProviderResult();
				explicit RemoveFingerprintFromOIDCProviderResult(const std::string &payload);
				~RemoveFingerprintFromOIDCProviderResult();
				OIDCProvider getOIDCProvider()const;

			protected:
				void parse(const std::string &payload);
			private:
				OIDCProvider oIDCProvider_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMS_MODEL_REMOVEFINGERPRINTFROMOIDCPROVIDERRESULT_H_