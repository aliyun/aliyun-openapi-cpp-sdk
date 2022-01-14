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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTTRUSTEDSERVICESTATUSRESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTTRUSTEDSERVICESTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcemanager/ResourceManagerExport.h>

namespace AlibabaCloud
{
	namespace ResourceManager
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ListTrustedServiceStatusResult : public ServiceResult
			{
			public:
				struct EnabledServicePrincipal
				{
					std::string servicePrincipal;
					std::string enableTime;
				};


				ListTrustedServiceStatusResult();
				explicit ListTrustedServiceStatusResult(const std::string &payload);
				~ListTrustedServiceStatusResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<EnabledServicePrincipal> getEnabledServicePrincipals()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<EnabledServicePrincipal> enabledServicePrincipals_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTTRUSTEDSERVICESTATUSRESULT_H_