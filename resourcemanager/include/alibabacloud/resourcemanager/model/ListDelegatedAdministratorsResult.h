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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTDELEGATEDADMINISTRATORSRESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTDELEGATEDADMINISTRATORSRESULT_H_

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
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ListDelegatedAdministratorsResult : public ServiceResult
			{
			public:
				struct Account
				{
					std::string joinMethod;
					std::string delegationEnabledTime;
					std::string accountId;
					std::string servicePrincipal;
					std::string displayName;
				};


				ListDelegatedAdministratorsResult();
				explicit ListDelegatedAdministratorsResult(const std::string &payload);
				~ListDelegatedAdministratorsResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<Account> getAccounts()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<Account> accounts_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTDELEGATEDADMINISTRATORSRESULT_H_