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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEGRAFANAWORKSPACERESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEGRAFANAWORKSPACERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CreateGrafanaWorkspaceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string deployType;
					std::string personalDomainPrefix;
					std::string description;
					std::string ntmId;
					float endTime;
					std::string resourceGroupId;
					std::string grafanaVersion;
					std::string privateIp;
					std::string maxAccount;
					std::string protocol;
					bool shareSynced;
					std::string privateDomain;
					std::string status;
					std::string grafanaWorkspaceDomain;
					std::string personalDomain;
					std::string grafanaWorkspaceId;
					std::vector<std::string> upgradeVersion;
					std::string grafanaWorkspaceEdition;
					std::string snatIp;
					std::vector<TagsItem> tags;
					bool commercial;
					std::string grafanaWorkspaceIp;
					float gmtCreate;
					std::string userId;
					std::string grafanaWorkspaceDomainStatus;
					std::string grafanaWorkspaceName;
					std::string regionId;
				};


				CreateGrafanaWorkspaceResult();
				explicit CreateGrafanaWorkspaceResult(const std::string &payload);
				~CreateGrafanaWorkspaceResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEGRAFANAWORKSPACERESULT_H_