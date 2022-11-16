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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETPROJECTDETAILRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETPROJECTDETAILRESULT_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetProjectDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					int status;
					std::string projectIdentifier;
					int isDefault;
					std::string projectOwnerBaseId;
					int schedulerMaxRetryTimes;
					std::string projectName;
					int isAllowDownload;
					int projectId;
					std::string gmtModified;
					int developmentType;
					bool disableDevelopment;
					std::string residentArea;
					std::string resourceManagerResourceGroupId;
					bool useProxyOdpsAccount;
					std::string gmtCreate;
					long tenantId;
					int protectedMode;
					int tablePrivacyMode;
					int projectMode;
					std::string projectDescription;
					std::string defaultDiResourceGroupIdentifier;
					std::vector<Tag> tags;
					std::vector<std::string> envTypes;
					int schedulerRetryInterval;
				};


				GetProjectDetailResult();
				explicit GetProjectDetailResult(const std::string &payload);
				~GetProjectDetailResult();
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
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETPROJECTDETAILRESULT_H_