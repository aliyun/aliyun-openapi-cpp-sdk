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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_GETACCOUNTDELETIONCHECKRESULTRESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_GETACCOUNTDELETIONCHECKRESULTRESULT_H_

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
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT GetAccountDeletionCheckResultResult : public ServiceResult
			{
			public:
				struct AccountDeletionCheckResultInfo
				{
					struct Reason
					{
						std::string checkName;
						std::string description;
						std::string checkId;
					};
					struct Check
					{
						std::string checkName;
						std::string description;
						std::string checkId;
					};
					std::vector<Check> abandonableChecks;
					std::string status;
					std::vector<Reason> notAllowReason;
					std::string allowDelete;
				};


				GetAccountDeletionCheckResultResult();
				explicit GetAccountDeletionCheckResultResult(const std::string &payload);
				~GetAccountDeletionCheckResultResult();
				AccountDeletionCheckResultInfo getAccountDeletionCheckResultInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				AccountDeletionCheckResultInfo accountDeletionCheckResultInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_GETACCOUNTDELETIONCHECKRESULTRESULT_H_