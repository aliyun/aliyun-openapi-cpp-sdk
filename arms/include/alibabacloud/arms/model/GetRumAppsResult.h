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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETRUMAPPSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_GETRUMAPPSRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT GetRumAppsResult : public ServiceResult
			{
			public:
				struct AppListItem
				{
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					struct ServiceDomainConfigsItem
					{
						std::string description;
						std::vector<std::string> propagatorTypes;
						std::string tracing;
						std::string domain;
					};
					std::string status;
					std::string slsProject;
					std::string description;
					std::string resourceGroupId;
					std::string packageName;
					ObjectOfAny createTime;
					std::string pid;
					std::string nickName;
					std::string slsLogstore;
					std::string name;
					std::string type;
					std::string endpoint;
					std::string regionId;
					bool isSubscription;
					std::string appType;
					std::vector<AppListItem::TagsItem> tags;
					std::vector<AppListItem::ServiceDomainConfigsItem> serviceDomainConfigs;
				};


				GetRumAppsResult();
				explicit GetRumAppsResult(const std::string &payload);
				~GetRumAppsResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<AppListItem> getAppList()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<AppListItem> appList_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_GETRUMAPPSRESULT_H_