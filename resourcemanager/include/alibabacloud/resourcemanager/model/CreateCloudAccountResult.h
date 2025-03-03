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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATECLOUDACCOUNTRESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATECLOUDACCOUNTRESULT_H_

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
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT CreateCloudAccountResult : public ServiceResult
			{
			public:
				struct Account
				{
					std::string status;
					std::string joinMethod;
					std::string modifyTime;
					std::string resourceDirectoryId;
					std::string type;
					std::string accountId;
					std::string displayName;
					std::string folderId;
					std::string recordId;
					std::string accountName;
				};


				CreateCloudAccountResult();
				explicit CreateCloudAccountResult(const std::string &payload);
				~CreateCloudAccountResult();
				Account getAccount()const;

			protected:
				void parse(const std::string &payload);
			private:
				Account account_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATECLOUDACCOUNTRESULT_H_