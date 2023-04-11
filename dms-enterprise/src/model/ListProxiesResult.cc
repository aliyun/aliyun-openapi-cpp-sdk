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

#include <alibabacloud/dms-enterprise/model/ListProxiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListProxiesResult::ListProxiesResult() :
	ServiceResult()
{}

ListProxiesResult::ListProxiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProxiesResult::~ListProxiesResult()
{}

void ListProxiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProxyListNode = value["ProxyList"]["ProxyListItem"];
	for (auto valueProxyListProxyListItem : allProxyListNode)
	{
		ProxyListItem proxyListObject;
		if(!valueProxyListProxyListItem["ProxyId"].isNull())
			proxyListObject.proxyId = std::stol(valueProxyListProxyListItem["ProxyId"].asString());
		if(!valueProxyListProxyListItem["CreatorId"].isNull())
			proxyListObject.creatorId = std::stol(valueProxyListProxyListItem["CreatorId"].asString());
		if(!valueProxyListProxyListItem["CreatorName"].isNull())
			proxyListObject.creatorName = valueProxyListProxyListItem["CreatorName"].asString();
		if(!valueProxyListProxyListItem["InstanceId"].isNull())
			proxyListObject.instanceId = std::stol(valueProxyListProxyListItem["InstanceId"].asString());
		if(!valueProxyListProxyListItem["PrivateEnable"].isNull())
			proxyListObject.privateEnable = valueProxyListProxyListItem["PrivateEnable"].asString() == "true";
		if(!valueProxyListProxyListItem["PrivateHost"].isNull())
			proxyListObject.privateHost = valueProxyListProxyListItem["PrivateHost"].asString();
		if(!valueProxyListProxyListItem["PublicEnable"].isNull())
			proxyListObject.publicEnable = valueProxyListProxyListItem["PublicEnable"].asString() == "true";
		if(!valueProxyListProxyListItem["PublicHost"].isNull())
			proxyListObject.publicHost = valueProxyListProxyListItem["PublicHost"].asString();
		if(!valueProxyListProxyListItem["HttpsPort"].isNull())
			proxyListObject.httpsPort = std::stoi(valueProxyListProxyListItem["HttpsPort"].asString());
		if(!valueProxyListProxyListItem["ProtocolType"].isNull())
			proxyListObject.protocolType = valueProxyListProxyListItem["ProtocolType"].asString();
		if(!valueProxyListProxyListItem["ProtocolPort"].isNull())
			proxyListObject.protocolPort = std::stoi(valueProxyListProxyListItem["ProtocolPort"].asString());
		if(!valueProxyListProxyListItem["RegionId"].isNull())
			proxyListObject.regionId = valueProxyListProxyListItem["RegionId"].asString();
		proxyList_.push_back(proxyListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<ListProxiesResult::ProxyListItem> ListProxiesResult::getProxyList()const
{
	return proxyList_;
}

std::string ListProxiesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListProxiesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListProxiesResult::getSuccess()const
{
	return success_;
}

