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

#include <alibabacloud/quickbi-public/model/ListPortalMenuAuthorizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListPortalMenuAuthorizationResult::ListPortalMenuAuthorizationResult() :
	ServiceResult()
{}

ListPortalMenuAuthorizationResult::ListPortalMenuAuthorizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPortalMenuAuthorizationResult::~ListPortalMenuAuthorizationResult()
{}

void ListPortalMenuAuthorizationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["MenuId"].isNull())
			resultObject.menuId = valueResultData["MenuId"].asString();
		if(!valueResultData["ShowOnlyWithAccess"].isNull())
			resultObject.showOnlyWithAccess = valueResultData["ShowOnlyWithAccess"].asString() == "true";
		auto allReceiversNode = valueResultData["Receivers"]["ReceiversItem"];
		for (auto valueResultDataReceiversReceiversItem : allReceiversNode)
		{
			Data::ReceiversItem receiversObject;
			if(!valueResultDataReceiversReceiversItem["ReceiverId"].isNull())
				receiversObject.receiverId = valueResultDataReceiversReceiversItem["ReceiverId"].asString();
			if(!valueResultDataReceiversReceiversItem["ReceiverType"].isNull())
				receiversObject.receiverType = std::stoi(valueResultDataReceiversReceiversItem["ReceiverType"].asString());
			resultObject.receivers.push_back(receiversObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListPortalMenuAuthorizationResult::getSuccess()const
{
	return success_;
}

std::vector<ListPortalMenuAuthorizationResult::Data> ListPortalMenuAuthorizationResult::getResult()const
{
	return result_;
}

