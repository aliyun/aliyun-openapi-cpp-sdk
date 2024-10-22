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

#ifndef ALIBABACLOUD_EAIS_MODEL_STARTEAIJUPYTERRESULT_H_
#define ALIBABACLOUD_EAIS_MODEL_STARTEAIJUPYTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eais/EaisExport.h>

namespace AlibabaCloud
{
	namespace Eais
	{
		namespace Model
		{
			class ALIBABACLOUD_EAIS_EXPORT StartEaiJupyterResult : public ServiceResult
			{
			public:
				struct AccessDeniedDetail
				{
					std::string policyType;
					std::string authPrincipalOwnerId;
					std::string encodedDiagnosticMessage;
					std::string authPrincipalType;
					std::string authPrincipalDisplayName;
					std::string noPermissionType;
					std::string authAction;
				};


				StartEaiJupyterResult();
				explicit StartEaiJupyterResult(const std::string &payload);
				~StartEaiJupyterResult();
				AccessDeniedDetail getAccessDeniedDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				AccessDeniedDetail accessDeniedDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAIS_MODEL_STARTEAIJUPYTERRESULT_H_