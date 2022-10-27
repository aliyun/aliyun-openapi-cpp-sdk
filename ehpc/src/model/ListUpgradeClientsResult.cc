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

#include <alibabacloud/ehpc/model/ListUpgradeClientsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListUpgradeClientsResult::ListUpgradeClientsResult() :
	ServiceResult()
{}

ListUpgradeClientsResult::ListUpgradeClientsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUpgradeClientsResult::~ListUpgradeClientsResult()
{}

void ListUpgradeClientsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClientRecordsNode = value["ClientRecords"]["ClientRecordsItem"];
	for (auto valueClientRecordsClientRecordsItem : allClientRecordsNode)
	{
		ClientRecordsItem clientRecordsObject;
		if(!valueClientRecordsClientRecordsItem["SubUid"].isNull())
			clientRecordsObject.subUid = valueClientRecordsClientRecordsItem["SubUid"].asString();
		if(!valueClientRecordsClientRecordsItem["OldVersion"].isNull())
			clientRecordsObject.oldVersion = valueClientRecordsClientRecordsItem["OldVersion"].asString();
		if(!valueClientRecordsClientRecordsItem["NewVersion"].isNull())
			clientRecordsObject.newVersion = valueClientRecordsClientRecordsItem["NewVersion"].asString();
		if(!valueClientRecordsClientRecordsItem["UpdateTime"].isNull())
			clientRecordsObject.updateTime = valueClientRecordsClientRecordsItem["UpdateTime"].asString();
		clientRecords_.push_back(clientRecordsObject);
	}
	if(!value["LatestVersion"].isNull())
		latestVersion_ = value["LatestVersion"].asString();
	if(!value["CurrentVersion"].isNull())
		currentVersion_ = value["CurrentVersion"].asString();

}

std::vector<ListUpgradeClientsResult::ClientRecordsItem> ListUpgradeClientsResult::getClientRecords()const
{
	return clientRecords_;
}

std::string ListUpgradeClientsResult::getLatestVersion()const
{
	return latestVersion_;
}

std::string ListUpgradeClientsResult::getCurrentVersion()const
{
	return currentVersion_;
}

