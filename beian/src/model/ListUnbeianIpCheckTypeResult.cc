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

#include <alibabacloud/beian/model/ListUnbeianIpCheckTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Beian;
using namespace AlibabaCloud::Beian::Model;

ListUnbeianIpCheckTypeResult::ListUnbeianIpCheckTypeResult() :
	ServiceResult()
{}

ListUnbeianIpCheckTypeResult::ListUnbeianIpCheckTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUnbeianIpCheckTypeResult::~ListUnbeianIpCheckTypeResult()
{}

void ListUnbeianIpCheckTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto huntressIpCheckTypeResultDONode = value["HuntressIpCheckTypeResultDO"];
	if(!huntressIpCheckTypeResultDONode["Msg"].isNull())
		huntressIpCheckTypeResultDO_.msg = huntressIpCheckTypeResultDONode["Msg"].asString();
	if(!huntressIpCheckTypeResultDONode["Success"].isNull())
		huntressIpCheckTypeResultDO_.success = huntressIpCheckTypeResultDONode["Success"].asString() == "true";
	auto allListNode = huntressIpCheckTypeResultDONode["List"]["ListItem"];
	for (auto huntressIpCheckTypeResultDONodeListListItem : allListNode)
	{
		HuntressIpCheckTypeResultDO::ListItem listItemObject;
		if(!huntressIpCheckTypeResultDONodeListListItem["Ip"].isNull())
			listItemObject.ip = huntressIpCheckTypeResultDONodeListListItem["Ip"].asString();
		if(!huntressIpCheckTypeResultDONodeListListItem["Aliuid"].isNull())
			listItemObject.aliuid = std::stol(huntressIpCheckTypeResultDONodeListListItem["Aliuid"].asString());
		if(!huntressIpCheckTypeResultDONodeListListItem["CheckType"].isNull())
			listItemObject.checkType = std::stoi(huntressIpCheckTypeResultDONodeListListItem["CheckType"].asString());
		if(!huntressIpCheckTypeResultDONodeListListItem["Caller"].isNull())
			listItemObject.caller = huntressIpCheckTypeResultDONodeListListItem["Caller"].asString();
		if(!huntressIpCheckTypeResultDONodeListListItem["Remark"].isNull())
			listItemObject.remark = huntressIpCheckTypeResultDONodeListListItem["Remark"].asString();
		huntressIpCheckTypeResultDO_.list.push_back(listItemObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());

}

ListUnbeianIpCheckTypeResult::HuntressIpCheckTypeResultDO ListUnbeianIpCheckTypeResult::getHuntressIpCheckTypeResultDO()const
{
	return huntressIpCheckTypeResultDO_;
}

int ListUnbeianIpCheckTypeResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListUnbeianIpCheckTypeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListUnbeianIpCheckTypeResult::getSuccess()const
{
	return success_;
}

