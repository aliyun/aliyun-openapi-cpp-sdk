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

#include <alibabacloud/lto/model/ListPrivacyRuleSharedMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListPrivacyRuleSharedMemberResult::ListPrivacyRuleSharedMemberResult() :
	ServiceResult()
{}

ListPrivacyRuleSharedMemberResult::ListPrivacyRuleSharedMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivacyRuleSharedMemberResult::~ListPrivacyRuleSharedMemberResult()
{}

void ListPrivacyRuleSharedMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["BizChainInfo"];
	for (auto valueDataBizChainInfo : allDataNode)
	{
		BizChainInfo dataObject;
		if(!valueDataBizChainInfo["BizChainId"].isNull())
			dataObject.bizChainId = valueDataBizChainInfo["BizChainId"].asString();
		if(!valueDataBizChainInfo["BizChainName"].isNull())
			dataObject.bizChainName = valueDataBizChainInfo["BizChainName"].asString();
		auto allMemberListNode = valueDataBizChainInfo["MemberList"]["MemberInfo"];
		for (auto valueDataBizChainInfoMemberListMemberInfo : allMemberListNode)
		{
			BizChainInfo::MemberInfo memberListObject;
			if(!valueDataBizChainInfoMemberListMemberInfo["Shared"].isNull())
				memberListObject.shared = valueDataBizChainInfoMemberListMemberInfo["Shared"].asString();
			if(!valueDataBizChainInfoMemberListMemberInfo["MemberId"].isNull())
				memberListObject.memberId = valueDataBizChainInfoMemberListMemberInfo["MemberId"].asString();
			if(!valueDataBizChainInfoMemberListMemberInfo["MemberName"].isNull())
				memberListObject.memberName = valueDataBizChainInfoMemberListMemberInfo["MemberName"].asString();
			dataObject.memberList.push_back(memberListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListPrivacyRuleSharedMemberResult::getMessage()const
{
	return message_;
}

int ListPrivacyRuleSharedMemberResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListPrivacyRuleSharedMemberResult::BizChainInfo> ListPrivacyRuleSharedMemberResult::getData()const
{
	return data_;
}

std::string ListPrivacyRuleSharedMemberResult::getCode()const
{
	return code_;
}

bool ListPrivacyRuleSharedMemberResult::getSuccess()const
{
	return success_;
}

