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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETPROJECTRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETPROJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetProjectResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					int destination;
					std::string projectOwnerBaseId;
					std::string projectName;
					int isAllowDownload;
					std::string gmtModified;
					int developmentType;
					bool disableDevelopment;
					bool baseProject;
					std::string resourceManagerResourceGroupId;
					int projectMode;
					std::string projectDescription;
					std::vector<Tag> tags;
					int status;
					std::string devStorageQuota;
					int isDefault;
					std::string projectIdentifier;
					int schedulerMaxRetryTimes;
					int projectId;
					std::string residentArea;
					bool useProxyOdpsAccount;
					std::string gmtCreate;
					long tenantId;
					int maxFlowNode;
					int protectedMode;
					std::string appkey;
					int tablePrivacyMode;
					std::string prodStorageQuota;
					std::string defaultDiResourceGroupIdentifier;
					std::vector<std::string> envTypes;
					int schedulerRetryInterval;
				};


				GetProjectResult();
				explicit GetProjectResult(const std::string &payload);
				~GetProjectResult();
				int getHttpStatusCode()const;
				Data getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				Data data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETPROJECTRESULT_H_