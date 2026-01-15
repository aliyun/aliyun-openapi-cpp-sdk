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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_REFRESHAPPINSTANCETICKETRESULT_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_REFRESHAPPINSTANCETICKETRESULT_H_

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
			class ALIBABACLOUD_WEBSITEBUILD_EXPORT RefreshAppInstanceTicketResult : public ServiceResult
			{
			public:
				struct Module
				{
					std::string parentPk;
					std::string refreshTokenExpiresAt;
					std::string uuid;
					std::string authorizationGrantType;
					std::string refreshTokenIssuedAt;
					std::string aliyunPk;
					std::string accessTokenValue;
					std::string refreshTokenValue;
					std::string attributes;
					std::string accessTokenIssuedAt;
					std::string bid;
					std::string accessTokenExpiresAt;
				};


				RefreshAppInstanceTicketResult();
				explicit RefreshAppInstanceTicketResult(const std::string &payload);
				~RefreshAppInstanceTicketResult();
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
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_REFRESHAPPINSTANCETICKETRESULT_H_