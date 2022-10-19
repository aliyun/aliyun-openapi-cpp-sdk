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

#include <alibabacloud/resourcemanager/model/GetAccountDeletionStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetAccountDeletionStatusResult::GetAccountDeletionStatusResult() :
	ServiceResult()
{}

GetAccountDeletionStatusResult::GetAccountDeletionStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountDeletionStatusResult::~GetAccountDeletionStatusResult()
{}

void GetAccountDeletionStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto rdAccountDeletionStatusNode = value["RdAccountDeletionStatus"];
	if(!rdAccountDeletionStatusNode["Status"].isNull())
		rdAccountDeletionStatus_.status = rdAccountDeletionStatusNode["Status"].asString();
	if(!rdAccountDeletionStatusNode["AccountId"].isNull())
		rdAccountDeletionStatus_.accountId = rdAccountDeletionStatusNode["AccountId"].asString();
	if(!rdAccountDeletionStatusNode["CreateTime"].isNull())
		rdAccountDeletionStatus_.createTime = rdAccountDeletionStatusNode["CreateTime"].asString();
	if(!rdAccountDeletionStatusNode["DeletionTime"].isNull())
		rdAccountDeletionStatus_.deletionTime = rdAccountDeletionStatusNode["DeletionTime"].asString();
	if(!rdAccountDeletionStatusNode["DeletionType"].isNull())
		rdAccountDeletionStatus_.deletionType = rdAccountDeletionStatusNode["DeletionType"].asString();
	auto allFailReasonListNode = rdAccountDeletionStatusNode["FailReasonList"]["failReasonListItem"];
	for (auto rdAccountDeletionStatusNodeFailReasonListfailReasonListItem : allFailReasonListNode)
	{
		RdAccountDeletionStatus::FailReasonListItem failReasonListItemObject;
		if(!rdAccountDeletionStatusNodeFailReasonListfailReasonListItem["Name"].isNull())
			failReasonListItemObject.name = rdAccountDeletionStatusNodeFailReasonListfailReasonListItem["Name"].asString();
		if(!rdAccountDeletionStatusNodeFailReasonListfailReasonListItem["Description"].isNull())
			failReasonListItemObject.description = rdAccountDeletionStatusNodeFailReasonListfailReasonListItem["Description"].asString();
		rdAccountDeletionStatus_.failReasonList.push_back(failReasonListItemObject);
	}

}

GetAccountDeletionStatusResult::RdAccountDeletionStatus GetAccountDeletionStatusResult::getRdAccountDeletionStatus()const
{
	return rdAccountDeletionStatus_;
}

