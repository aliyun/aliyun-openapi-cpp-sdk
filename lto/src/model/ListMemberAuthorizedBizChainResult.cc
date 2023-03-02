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

#include <alibabacloud/lto/model/ListMemberAuthorizedBizChainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListMemberAuthorizedBizChainResult::ListMemberAuthorizedBizChainResult() :
	ServiceResult()
{}

ListMemberAuthorizedBizChainResult::ListMemberAuthorizedBizChainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMemberAuthorizedBizChainResult::~ListMemberAuthorizedBizChainResult()
{}

void ListMemberAuthorizedBizChainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["MemberAuthorizedBizChainInfo"];
	for (auto valueDataMemberAuthorizedBizChainInfo : allDataNode)
	{
		MemberAuthorizedBizChainInfo dataObject;
		if(!valueDataMemberAuthorizedBizChainInfo["BizChainType"].isNull())
			dataObject.bizChainType = valueDataMemberAuthorizedBizChainInfo["BizChainType"].asString();
		if(!valueDataMemberAuthorizedBizChainInfo["BizChainName"].isNull())
			dataObject.bizChainName = valueDataMemberAuthorizedBizChainInfo["BizChainName"].asString();
		if(!valueDataMemberAuthorizedBizChainInfo["BizChainId"].isNull())
			dataObject.bizChainId = valueDataMemberAuthorizedBizChainInfo["BizChainId"].asString();
		if(!valueDataMemberAuthorizedBizChainInfo["Authorized"].isNull())
			dataObject.authorized = valueDataMemberAuthorizedBizChainInfo["Authorized"].asString() == "true";
		auto allPeerListNode = valueDataMemberAuthorizedBizChainInfo["PeerList"]["PeerInfo"];
		for (auto valueDataMemberAuthorizedBizChainInfoPeerListPeerInfo : allPeerListNode)
		{
			MemberAuthorizedBizChainInfo::PeerInfo peerListObject;
			if(!valueDataMemberAuthorizedBizChainInfoPeerListPeerInfo["PeerName"].isNull())
				peerListObject.peerName = valueDataMemberAuthorizedBizChainInfoPeerListPeerInfo["PeerName"].asString();
			if(!valueDataMemberAuthorizedBizChainInfoPeerListPeerInfo["Authorized"].isNull())
				peerListObject.authorized = valueDataMemberAuthorizedBizChainInfoPeerListPeerInfo["Authorized"].asString() == "true";
			dataObject.peerList.push_back(peerListObject);
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

std::string ListMemberAuthorizedBizChainResult::getMessage()const
{
	return message_;
}

int ListMemberAuthorizedBizChainResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListMemberAuthorizedBizChainResult::MemberAuthorizedBizChainInfo> ListMemberAuthorizedBizChainResult::getData()const
{
	return data_;
}

std::string ListMemberAuthorizedBizChainResult::getCode()const
{
	return code_;
}

bool ListMemberAuthorizedBizChainResult::getSuccess()const
{
	return success_;
}

