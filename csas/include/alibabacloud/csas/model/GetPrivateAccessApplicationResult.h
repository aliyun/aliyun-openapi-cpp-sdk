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

#ifndef ALIBABACLOUD_CSAS_MODEL_GETPRIVATEACCESSAPPLICATIONRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_GETPRIVATEACCESSAPPLICATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csas/CsasExport.h>

namespace AlibabaCloud
{
	namespace Csas
	{
		namespace Model
		{
			class ALIBABACLOUD_CSAS_EXPORT GetPrivateAccessApplicationResult : public ServiceResult
			{
			public:
				struct Application
				{
					struct PortRange
					{
						int begin;
						int end;
					};
					std::string status;
					std::string browserAccessStatus;
					std::string description;
					std::vector<std::string> tagIds;
					std::vector<PortRange> portRanges;
					std::string createTime;
					std::vector<std::string> connectorIds;
					std::string name;
					std::vector<std::string> addresses;
					std::string l7ProxyDomainAutomatic;
					std::string l7ProxyDomainCustom;
					std::vector<std::string> policyIds;
					std::string applicationId;
					std::string protocol;
				};


				GetPrivateAccessApplicationResult();
				explicit GetPrivateAccessApplicationResult(const std::string &payload);
				~GetPrivateAccessApplicationResult();
				Application getApplication()const;

			protected:
				void parse(const std::string &payload);
			private:
				Application application_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_GETPRIVATEACCESSAPPLICATIONRESULT_H_