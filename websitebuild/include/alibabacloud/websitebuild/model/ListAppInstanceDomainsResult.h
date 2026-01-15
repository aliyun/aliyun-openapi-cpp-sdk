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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_LISTAPPINSTANCEDOMAINSRESULT_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_LISTAPPINSTANCEDOMAINSRESULT_H_

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
			class ALIBABACLOUD_WEBSITEBUILD_EXPORT ListAppInstanceDomainsResult : public ServiceResult
			{
			public:
				struct Module
				{
					struct Next
					{
						struct Verification2
						{
							struct DnsRecord6
							{
								std::string recordType;
								std::string value;
								std::string host;
							};
							std::string verificationStatus;
							std::string errorMsg;
							DnsRecord6 dnsRecord6;
						};
						struct Resolution3
						{
							struct DnsRecord7
							{
								std::string recordType;
								std::string value;
								std::string host;
							};
							std::string resolutionStatus;
							std::string errorMsg;
							DnsRecord7 dnsRecord7;
						};
						struct Certificate4
						{
							std::string certificateType;
							std::string endTime;
							std::string certificateStatus;
							std::string certificateName;
						};
						struct Ownership5
						{
							std::string account;
							std::string provider;
						};
						Resolution3 resolution3;
						Verification2 verification2;
						std::string domainName;
						std::string createTime;
						Ownership5 ownership5;
						Certificate4 certificate4;
						std::string overallStatus;
					};
					struct DataItem
					{
						struct Verification
						{
							struct DnsRecord
							{
								std::string recordType;
								std::string value;
								std::string host;
							};
							std::string verificationStatus;
							std::string verificationStatusCode;
							std::string errorMsg;
							DnsRecord dnsRecord;
						};
						struct Resolution
						{
							struct DnsRecord1
							{
								std::string recordType;
								std::string value;
								std::string host;
							};
							std::string resolutionStatus;
							DnsRecord1 dnsRecord1;
							std::string errorMsg;
						};
						struct Certificate
						{
							std::string certificateType;
							std::string endTime;
							std::string certificateStatus;
							std::string certificateName;
						};
						struct Ownership
						{
							std::string account;
							std::string rootDomain;
							std::string provider;
						};
						Ownership ownership;
						std::string domainName;
						std::string createTime;
						Verification verification;
						Resolution resolution;
						Certificate certificate;
						std::string overallStatus;
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


				ListAppInstanceDomainsResult();
				explicit ListAppInstanceDomainsResult(const std::string &payload);
				~ListAppInstanceDomainsResult();
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
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_LISTAPPINSTANCEDOMAINSRESULT_H_