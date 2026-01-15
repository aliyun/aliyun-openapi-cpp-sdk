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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_GETAPPINSTANCERESULT_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_GETAPPINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/websitebuild/WebsiteBuildExport.h>

namespace AlibabaCloud
{
	namespace WebsiteBuild
	{
		namespace Model
		{
			class ALIBABACLOUD_WEBSITEBUILD_EXPORT GetAppInstanceResult : public ServiceResult
			{
			public:
				struct Module
				{
					struct Profile
					{
						std::string customerService;
						std::string instanceId;
						std::string seoSite;
						std::string orderId;
						std::string deployArea;
						std::string source;
						std::string applicationType;
						std::string siteVersionText;
						std::string ordTime;
						std::string templateEtag;
						std::string commodityCode;
						std::string applicationTypeText;
						std::string payTime;
						std::string bizId;
						std::string siteVersion;
						std::string templateId;
					};
					struct AppOperationAddress
					{
						struct ActionsItem3
						{
							std::string actionText;
							std::string href;
							bool enable;
							std::string actionKey;
						};
						std::vector<ActionsItem3> actions2;
					};
					struct AiStaffListItem
					{
						std::string status;
						std::string staffType;
						std::string staffId;
						std::string staffName;
					};
					struct AppServiceListItem
					{
						struct Profile1
						{
							std::string designTypeText;
							std::string instanceId;
							std::string designType;
							std::string serviceSpec;
							std::string orderId;
							std::string bizId;
							std::string serviceSpecText;
						};
						struct OperationAddress
						{
							struct ActionsItem
							{
								std::string actionText;
								std::string href;
								bool enable;
								std::string actionKey;
							};
							std::vector<ActionsItem> actions;
						};
						std::string status;
						std::string serviceTypeText;
						std::string instanceBizId;
						OperationAddress operationAddress;
						std::string endTime;
						std::string gmtModified;
						std::string startTime;
						std::string slug;
						std::string name;
						std::string gmtCreate;
						Profile1 profile1;
						std::string serviceType;
						std::string userId;
						int deleted;
						std::string espBizId;
						std::string bizId;
					};
					std::string gmtDelete;
					std::vector<AiStaffListItem> aiStaffList;
					std::string description;
					std::string thumbnailUrl;
					std::string endTime;
					std::string statusText;
					std::string sourceType;
					std::string gmtModified;
					std::string designSpecId;
					Profile profile;
					std::string name;
					std::string buildType;
					int deleted;
					std::string espBizId;
					std::string status;
					AppOperationAddress appOperationAddress;
					std::vector<AppServiceListItem> appServiceList;
					std::string createTime;
					std::string startTime;
					std::string appSubType;
					std::string slug;
					std::string iconUrl;
					std::string designSpecBizId;
					std::string userId;
					std::string gmtPublish;
					std::string domain;
					std::string siteHost;
					std::string bizId;
					std::string appType;
				};


				GetAppInstanceResult();
				explicit GetAppInstanceResult(const std::string &payload);
				~GetAppInstanceResult();
				std::string getRootErrorMsg()const;
				std::string getAccessDeniedDetail()const;
				bool getAllowRetry()const;
				bool getSynchro()const;
				std::vector<std::string> getErrorArgs()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				Module getModule()const;
				std::string getRootErrorCode()const;
				std::string getAppName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string rootErrorMsg_;
				std::string accessDeniedDetail_;
				bool allowRetry_;
				bool synchro_;
				std::vector<std::string> errorArgs_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				Module module_;
				std::string rootErrorCode_;
				std::string appName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_GETAPPINSTANCERESULT_H_