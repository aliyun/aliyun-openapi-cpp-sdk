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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEACCESSKEYLEAKDETAILRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEACCESSKEYLEAKDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeAccessKeyLeakDetailResult : public ServiceResult
			{
			public:


				DescribeAccessKeyLeakDetailResult();
				explicit DescribeAccessKeyLeakDetailResult(const std::string &payload);
				~DescribeAccessKeyLeakDetailResult();
				std::string getGithubRepoName()const;
				std::string getGithubRepoUrl()const;
				std::string getGithubFileName()const;
				std::string getDealType()const;
				std::string getWhitelistStatus()const;
				std::string getGmtModified()const;
				std::string getCode()const;
				std::string getSource()const;
				std::string getRemark()const;
				long getWhitelistTime()const;
				std::string getType()const;
				std::string getGithubUserPicUrl()const;
				std::string getGithubFileUpdateTime()const;
				std::string getGmtCreate()const;
				int getTokenValid()const;
				std::string getAccesskeyId()const;
				std::string getGithubFileUrl()const;
				std::string getGithubFileType()const;
				std::string getAsset()const;
				std::string getGithubUser()const;
				std::string getDealTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string githubRepoName_;
				std::string githubRepoUrl_;
				std::string githubFileName_;
				std::string dealType_;
				std::string whitelistStatus_;
				std::string gmtModified_;
				std::string code_;
				std::string source_;
				std::string remark_;
				long whitelistTime_;
				std::string type_;
				std::string githubUserPicUrl_;
				std::string githubFileUpdateTime_;
				std::string gmtCreate_;
				int tokenValid_;
				std::string accesskeyId_;
				std::string githubFileUrl_;
				std::string githubFileType_;
				std::string asset_;
				std::string githubUser_;
				std::string dealTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEACCESSKEYLEAKDETAILRESULT_H_