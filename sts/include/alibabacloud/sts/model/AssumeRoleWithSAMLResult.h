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

#ifndef ALIBABACLOUD_STS_MODEL_ASSUMEROLEWITHSAMLRESULT_H_
#define ALIBABACLOUD_STS_MODEL_ASSUMEROLEWITHSAMLRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sts/StsExport.h>

namespace AlibabaCloud
{
	namespace Sts
	{
		namespace Model
		{
			class ALIBABACLOUD_STS_EXPORT AssumeRoleWithSAMLResult : public ServiceResult
			{
			public:
				struct SAMLAssertionInfo
				{
					std::string subjectType;
					std::string issuer;
					std::string recipient;
					std::string subject;
				};
				struct AssumedRoleUser
				{
					std::string arn;
					std::string assumedRoleId;
				};
				struct Credentials
				{
					std::string securityToken;
					std::string accessKeyId;
					std::string accessKeySecret;
					std::string expiration;
				};


				AssumeRoleWithSAMLResult();
				explicit AssumeRoleWithSAMLResult(const std::string &payload);
				~AssumeRoleWithSAMLResult();
				std::string getSourceIdentity()const;
				SAMLAssertionInfo getSAMLAssertionInfo()const;
				AssumedRoleUser getAssumedRoleUser()const;
				Credentials getCredentials()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string sourceIdentity_;
				SAMLAssertionInfo sAMLAssertionInfo_;
				AssumedRoleUser assumedRoleUser_;
				Credentials credentials_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_STS_MODEL_ASSUMEROLEWITHSAMLRESULT_H_