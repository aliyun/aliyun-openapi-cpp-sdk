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

#include <alibabacloud/ims/model/GetAccountSecurityPracticeReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

GetAccountSecurityPracticeReportResult::GetAccountSecurityPracticeReportResult() :
	ServiceResult()
{}

GetAccountSecurityPracticeReportResult::GetAccountSecurityPracticeReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountSecurityPracticeReportResult::~GetAccountSecurityPracticeReportResult()
{}

void GetAccountSecurityPracticeReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto accountSecurityPracticeInfoNode = value["AccountSecurityPracticeInfo"];
	if(!accountSecurityPracticeInfoNode["Score"].isNull())
		accountSecurityPracticeInfo_.score = std::stoi(accountSecurityPracticeInfoNode["Score"].asString());
	auto accountSecurityPracticeUserInfoNode = accountSecurityPracticeInfoNode["AccountSecurityPracticeUserInfo"];
	if(!accountSecurityPracticeUserInfoNode["UnusedAkNum"].isNull())
		accountSecurityPracticeInfo_.accountSecurityPracticeUserInfo.unusedAkNum = std::stoi(accountSecurityPracticeUserInfoNode["UnusedAkNum"].asString());
	if(!accountSecurityPracticeUserInfoNode["SubUserWithUnusedAccessKey"].isNull())
		accountSecurityPracticeInfo_.accountSecurityPracticeUserInfo.subUserWithUnusedAccessKey = std::stoi(accountSecurityPracticeUserInfoNode["SubUserWithUnusedAccessKey"].asString());
	if(!accountSecurityPracticeUserInfoNode["RootWithAccessKey"].isNull())
		accountSecurityPracticeInfo_.accountSecurityPracticeUserInfo.rootWithAccessKey = std::stoi(accountSecurityPracticeUserInfoNode["RootWithAccessKey"].asString());
	if(!accountSecurityPracticeUserInfoNode["SubUser"].isNull())
		accountSecurityPracticeInfo_.accountSecurityPracticeUserInfo.subUser = std::stoi(accountSecurityPracticeUserInfoNode["SubUser"].asString());
	if(!accountSecurityPracticeUserInfoNode["BindMfa"].isNull())
		accountSecurityPracticeInfo_.accountSecurityPracticeUserInfo.bindMfa = accountSecurityPracticeUserInfoNode["BindMfa"].asString() == "true";
	if(!accountSecurityPracticeUserInfoNode["OldAkNum"].isNull())
		accountSecurityPracticeInfo_.accountSecurityPracticeUserInfo.oldAkNum = std::stoi(accountSecurityPracticeUserInfoNode["OldAkNum"].asString());
	if(!accountSecurityPracticeUserInfoNode["SubUserPwdLevel"].isNull())
		accountSecurityPracticeInfo_.accountSecurityPracticeUserInfo.subUserPwdLevel = accountSecurityPracticeUserInfoNode["SubUserPwdLevel"].asString();
	if(!accountSecurityPracticeUserInfoNode["SubUserWithOldAccessKey"].isNull())
		accountSecurityPracticeInfo_.accountSecurityPracticeUserInfo.subUserWithOldAccessKey = std::stoi(accountSecurityPracticeUserInfoNode["SubUserWithOldAccessKey"].asString());
	if(!accountSecurityPracticeUserInfoNode["SubUserBindMfa"].isNull())
		accountSecurityPracticeInfo_.accountSecurityPracticeUserInfo.subUserBindMfa = std::stoi(accountSecurityPracticeUserInfoNode["SubUserBindMfa"].asString());

}

GetAccountSecurityPracticeReportResult::AccountSecurityPracticeInfo GetAccountSecurityPracticeReportResult::getAccountSecurityPracticeInfo()const
{
	return accountSecurityPracticeInfo_;
}

