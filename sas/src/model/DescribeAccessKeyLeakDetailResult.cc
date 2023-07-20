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

#include <alibabacloud/sas/model/DescribeAccessKeyLeakDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAccessKeyLeakDetailResult::DescribeAccessKeyLeakDetailResult() :
	ServiceResult()
{}

DescribeAccessKeyLeakDetailResult::DescribeAccessKeyLeakDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessKeyLeakDetailResult::~DescribeAccessKeyLeakDetailResult()
{}

void DescribeAccessKeyLeakDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["GithubUserPicUrl"].isNull())
		githubUserPicUrl_ = value["GithubUserPicUrl"].asString();
	if(!value["GithubUser"].isNull())
		githubUser_ = value["GithubUser"].asString();
	if(!value["GithubRepoName"].isNull())
		githubRepoName_ = value["GithubRepoName"].asString();
	if(!value["GithubFileType"].isNull())
		githubFileType_ = value["GithubFileType"].asString();
	if(!value["Remark"].isNull())
		remark_ = value["Remark"].asString();
	if(!value["GithubFileUpdateTime"].isNull())
		githubFileUpdateTime_ = value["GithubFileUpdateTime"].asString();
	if(!value["WhitelistStatus"].isNull())
		whitelistStatus_ = value["WhitelistStatus"].asString();
	if(!value["GithubFileName"].isNull())
		githubFileName_ = value["GithubFileName"].asString();
	if(!value["Source"].isNull())
		source_ = value["Source"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["Asset"].isNull())
		asset_ = value["Asset"].asString();
	if(!value["DealTime"].isNull())
		dealTime_ = value["DealTime"].asString();
	if(!value["AccesskeyId"].isNull())
		accesskeyId_ = value["AccesskeyId"].asString();
	if(!value["GithubFileUrl"].isNull())
		githubFileUrl_ = value["GithubFileUrl"].asString();
	if(!value["DealType"].isNull())
		dealType_ = value["DealType"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = value["GmtCreate"].asString();
	if(!value["GithubRepoUrl"].isNull())
		githubRepoUrl_ = value["GithubRepoUrl"].asString();
	if(!value["TokenValid"].isNull())
		tokenValid_ = std::stoi(value["TokenValid"].asString());
	if(!value["WhitelistTime"].isNull())
		whitelistTime_ = std::stol(value["WhitelistTime"].asString());

}

std::string DescribeAccessKeyLeakDetailResult::getGithubRepoName()const
{
	return githubRepoName_;
}

std::string DescribeAccessKeyLeakDetailResult::getGithubRepoUrl()const
{
	return githubRepoUrl_;
}

std::string DescribeAccessKeyLeakDetailResult::getGithubFileName()const
{
	return githubFileName_;
}

std::string DescribeAccessKeyLeakDetailResult::getDealType()const
{
	return dealType_;
}

std::string DescribeAccessKeyLeakDetailResult::getWhitelistStatus()const
{
	return whitelistStatus_;
}

std::string DescribeAccessKeyLeakDetailResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeAccessKeyLeakDetailResult::getCode()const
{
	return code_;
}

std::string DescribeAccessKeyLeakDetailResult::getSource()const
{
	return source_;
}

std::string DescribeAccessKeyLeakDetailResult::getRemark()const
{
	return remark_;
}

long DescribeAccessKeyLeakDetailResult::getWhitelistTime()const
{
	return whitelistTime_;
}

std::string DescribeAccessKeyLeakDetailResult::getType()const
{
	return type_;
}

std::string DescribeAccessKeyLeakDetailResult::getGithubUserPicUrl()const
{
	return githubUserPicUrl_;
}

std::string DescribeAccessKeyLeakDetailResult::getGithubFileUpdateTime()const
{
	return githubFileUpdateTime_;
}

std::string DescribeAccessKeyLeakDetailResult::getGmtCreate()const
{
	return gmtCreate_;
}

int DescribeAccessKeyLeakDetailResult::getTokenValid()const
{
	return tokenValid_;
}

std::string DescribeAccessKeyLeakDetailResult::getAccesskeyId()const
{
	return accesskeyId_;
}

std::string DescribeAccessKeyLeakDetailResult::getGithubFileUrl()const
{
	return githubFileUrl_;
}

std::string DescribeAccessKeyLeakDetailResult::getGithubFileType()const
{
	return githubFileType_;
}

std::string DescribeAccessKeyLeakDetailResult::getAsset()const
{
	return asset_;
}

std::string DescribeAccessKeyLeakDetailResult::getGithubUser()const
{
	return githubUser_;
}

std::string DescribeAccessKeyLeakDetailResult::getDealTime()const
{
	return dealTime_;
}

