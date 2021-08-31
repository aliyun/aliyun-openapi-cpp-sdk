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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTSTATUSREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ListStatusRequest : public RoaServiceRequest
			{

			public:
				ListStatusRequest();
				~ListStatusRequest();

				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getPodName()const;
				void setPodName(const std::string& podName);
				std::string getSource()const;
				void setSource(const std::string& source);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				std::string getNamespaceId()const;
				void setNamespaceId(const std::string& namespaceId);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getTenantId()const;
				void setTenantId(const std::string& tenantId);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string ip_;
				std::string podName_;
				std::string source_;
				std::string accountId_;
				std::string namespaceId_;
				std::string appId_;
				std::string tenantId_;
				std::string region_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTSTATUSREQUEST_H_