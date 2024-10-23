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

#include <alibabacloud/ims/model/CreateLoginProfileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

CreateLoginProfileResult::CreateLoginProfileResult() :
	ServiceResult()
{}

CreateLoginProfileResult::CreateLoginProfileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateLoginProfileResult::~CreateLoginProfileResult()
{}

void CreateLoginProfileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto loginProfileNode = value["LoginProfile"];
	if(!loginProfileNode["UserPrincipalName"].isNull())
		loginProfile_.userPrincipalName = loginProfileNode["UserPrincipalName"].asString();
	if(!loginProfileNode["Status"].isNull())
		loginProfile_.status = loginProfileNode["Status"].asString();
	if(!loginProfileNode["Password"].isNull())
		loginProfile_.password = loginProfileNode["Password"].asString();
	if(!loginProfileNode["UpdateDate"].isNull())
		loginProfile_.updateDate = loginProfileNode["UpdateDate"].asString();
	if(!loginProfileNode["PasswordResetRequired"].isNull())
		loginProfile_.passwordResetRequired = loginProfileNode["PasswordResetRequired"].asString() == "true";
	if(!loginProfileNode["MFABindRequired"].isNull())
		loginProfile_.mFABindRequired = loginProfileNode["MFABindRequired"].asString() == "true";
	if(!loginProfileNode["CreateDate"].isNull())
		loginProfile_.createDate = loginProfileNode["CreateDate"].asString();

}

CreateLoginProfileResult::LoginProfile CreateLoginProfileResult::getLoginProfile()const
{
	return loginProfile_;
}

