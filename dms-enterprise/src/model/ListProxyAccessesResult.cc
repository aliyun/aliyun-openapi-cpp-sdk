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

#include <alibabacloud/dms-enterprise/model/ListProxyAccessesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListProxyAccessesResult::ListProxyAccessesResult() :
	ServiceResult()
{}

ListProxyAccessesResult::ListProxyAccessesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProxyAccessesResult::~ListProxyAccessesResult()
{}

void ListProxyAccessesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProxyAccessListNode = value["ProxyAccessList"]["ProxyAccessListItem"];
	for (auto valueProxyAccessListProxyAccessListItem : allProxyAccessListNode)
	{
		ProxyAccessListItem proxyAccessListObject;
		if(!valueProxyAccessListProxyAccessListItem["ProxyAccessId"].isNull())
			proxyAccessListObject.proxyAccessId = std::stol(valueProxyAccessListProxyAccessListItem["ProxyAccessId"].asString());
		if(!valueProxyAccessListProxyAccessListItem["GmtCreate"].isNull())
			proxyAccessListObject.gmtCreate = valueProxyAccessListProxyAccessListItem["GmtCreate"].asString();
		if(!valueProxyAccessListProxyAccessListItem["AccessId"].isNull())
			proxyAccessListObject.accessId = valueProxyAccessListProxyAccessListItem["AccessId"].asString();
		if(!valueProxyAccessListProxyAccessListItem["OriginInfo"].isNull())
			proxyAccessListObject.originInfo = valueProxyAccessListProxyAccessListItem["OriginInfo"].asString();
		if(!valueProxyAccessListProxyAccessListItem["IndepAccount"].isNull())
			proxyAccessListObject.indepAccount = valueProxyAccessListProxyAccessListItem["IndepAccount"].asString();
		if(!valueProxyAccessListProxyAccessListItem["UserId"].isNull())
			proxyAccessListObject.userId = std::stol(valueProxyAccessListProxyAccessListItem["UserId"].asString());
		if(!valueProxyAccessListProxyAccessListItem["UserUid"].isNull())
			proxyAccessListObject.userUid = valueProxyAccessListProxyAccessListItem["UserUid"].asString();
		if(!valueProxyAccessListProxyAccessListItem["UserName"].isNull())
			proxyAccessListObject.userName = valueProxyAccessListProxyAccessListItem["UserName"].asString();
		if(!valueProxyAccessListProxyAccessListItem["ProxyId"].isNull())
			proxyAccessListObject.proxyId = std::stol(valueProxyAccessListProxyAccessListItem["ProxyId"].asString());
		if(!valueProxyAccessListProxyAccessListItem["InstanceId"].isNull())
			proxyAccessListObject.instanceId = std::stol(valueProxyAccessListProxyAccessListItem["InstanceId"].asString());
		proxyAccessList_.push_back(proxyAccessListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListProxyAccessesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListProxyAccessesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListProxyAccessesResult::getSuccess()const
{
	return success_;
}

std::vector<ListProxyAccessesResult::ProxyAccessListItem> ListProxyAccessesResult::getProxyAccessList()const
{
	return proxyAccessList_;
}

