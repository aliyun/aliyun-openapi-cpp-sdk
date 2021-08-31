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

#include <alibabacloud/edas/model/ListSlbResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListSlbResult::ListSlbResult() :
	ServiceResult()
{}

ListSlbResult::ListSlbResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSlbResult::~ListSlbResult()
{}

void ListSlbResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlbListNode = value["SlbList"]["SlbEntity"];
	for (auto valueSlbListSlbEntity : allSlbListNode)
	{
		SlbEntity slbListObject;
		if(!valueSlbListSlbEntity["SlbId"].isNull())
			slbListObject.slbId = valueSlbListSlbEntity["SlbId"].asString();
		if(!valueSlbListSlbEntity["SlbName"].isNull())
			slbListObject.slbName = valueSlbListSlbEntity["SlbName"].asString();
		if(!valueSlbListSlbEntity["RegionId"].isNull())
			slbListObject.regionId = valueSlbListSlbEntity["RegionId"].asString();
		if(!valueSlbListSlbEntity["UserId"].isNull())
			slbListObject.userId = valueSlbListSlbEntity["UserId"].asString();
		if(!valueSlbListSlbEntity["Address"].isNull())
			slbListObject.address = valueSlbListSlbEntity["Address"].asString();
		if(!valueSlbListSlbEntity["SlbStatus"].isNull())
			slbListObject.slbStatus = valueSlbListSlbEntity["SlbStatus"].asString();
		if(!valueSlbListSlbEntity["AddressType"].isNull())
			slbListObject.addressType = valueSlbListSlbEntity["AddressType"].asString();
		if(!valueSlbListSlbEntity["VswitchId"].isNull())
			slbListObject.vswitchId = valueSlbListSlbEntity["VswitchId"].asString();
		if(!valueSlbListSlbEntity["VpcId"].isNull())
			slbListObject.vpcId = valueSlbListSlbEntity["VpcId"].asString();
		if(!valueSlbListSlbEntity["NetworkType"].isNull())
			slbListObject.networkType = valueSlbListSlbEntity["NetworkType"].asString();
		if(!valueSlbListSlbEntity["GroupId"].isNull())
			slbListObject.groupId = std::stoi(valueSlbListSlbEntity["GroupId"].asString());
		if(!valueSlbListSlbEntity["Expired"].isNull())
			slbListObject.expired = valueSlbListSlbEntity["Expired"].asString() == "true";
		slbList_.push_back(slbListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSlbResult::getMessage()const
{
	return message_;
}

int ListSlbResult::getCode()const
{
	return code_;
}

std::vector<ListSlbResult::SlbEntity> ListSlbResult::getSlbList()const
{
	return slbList_;
}

