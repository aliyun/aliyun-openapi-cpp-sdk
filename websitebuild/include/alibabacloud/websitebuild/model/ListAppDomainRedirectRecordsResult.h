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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_LISTAPPDOMAINREDIRECTRECORDSRESULT_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_LISTAPPDOMAINREDIRECTRECORDSRESULT_H_

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
			class ALIBABACLOUD_WEBSITEBUILD_EXPORT ListAppDomainRedirectRecordsResult : public ServiceResult
			{
			public:
				struct Module
				{
					struct Next
					{
						std::string sourceDomain;
						std::string targetDomain;
						std::string recordId;
					};
					struct DataItem
					{
						std::string sourceDomain;
						std::string targetDomain;
						std::string recordId;
					};
					bool prePage;
					int currentPageNum;
					int pageSize;
					Next next;
					int totalPageNum;
					std::vector<DataItem> data;
					bool resultLimit;
					int totalItemNum;
					bool nextPage;
				};


				ListAppDomainRedirectRecordsResult();
				explicit ListAppDomainRedirectRecordsResult(const std::string &payload);
				~ListAppDomainRedirectRecordsResult();
				std::string getRootErrorMsg()const;
				std::string getAccessDeniedDetail()const;
				bool getAllowRetry()const;
				std::string getNextToken()const;
				bool getSynchro()const;
				int getMaxResults()const;
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
				std::string nextToken_;
				bool synchro_;
				int maxResults_;
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
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_LISTAPPDOMAINREDIRECTRECORDSRESULT_H_