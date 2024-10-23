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

#ifndef ALIBABACLOUD_IMS_MODEL_GETAPPLICATIONRESULT_H_
#define ALIBABACLOUD_IMS_MODEL_GETAPPLICATIONRESULT_H_

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
			class ALIBABACLOUD_IMS_EXPORT GetApplicationResult : public ServiceResult
			{
			public:
				struct Application
				{
					struct DelegatedScope
					{
						struct PredefinedScope
						{
							std::string description;
							bool required;
							std::string name;
						};
						std::vector<PredefinedScope> predefinedScopes;
					};
					std::string accountId;
					bool secretRequired;
					bool isMultiTenant;
					std::string createDate;
					std::string appName;
					DelegatedScope delegatedScope;
					std::string updateDate;
					std::string tenantId;
					std::string appId;
					std::string displayName;
					int accessTokenValidity;
					std::string appPrincipalName;
					std::vector<std::string> redirectUris;
					int refreshTokenValidity;
					std::string appType;
				};


				GetApplicationResult();
				explicit GetApplicationResult(const std::string &payload);
				~GetApplicationResult();
				Application getApplication()const;

			protected:
				void parse(const std::string &payload);
			private:
				Application application_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMS_MODEL_GETAPPLICATIONRESULT_H_