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

#include <alibabacloud/ims/model/ListUserBasicInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

ListUserBasicInfosResult::ListUserBasicInfosResult() :
	ServiceResult()
{}

ListUserBasicInfosResult::ListUserBasicInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserBasicInfosResult::~ListUserBasicInfosResult()
{}

void ListUserBasicInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserBasicInfosNode = value["UserBasicInfos"]["UserBasicInfo"];
	for (auto valueUserBasicInfosUserBasicInfo : allUserBasicInfosNode)
	{
		UserBasicInfo userBasicInfosObject;
		if(!valueUserBasicInfosUserBasicInfo["UserPrincipalName"].isNull())
			userBasicInfosObject.userPrincipalName = valueUserBasicInfosUserBasicInfo["UserPrincipalName"].asString();
		if(!valueUserBasicInfosUserBasicInfo["DisplayName"].isNull())
			userBasicInfosObject.displayName = valueUserBasicInfosUserBasicInfo["DisplayName"].asString();
		if(!valueUserBasicInfosUserBasicInfo["UserId"].isNull())
			userBasicInfosObject.userId = valueUserBasicInfosUserBasicInfo["UserId"].asString();
		if(!valueUserBasicInfosUserBasicInfo["Status"].isNull())
			userBasicInfosObject.status = valueUserBasicInfosUserBasicInfo["Status"].asString();
		userBasicInfos_.push_back(userBasicInfosObject);
	}
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["Marker"].isNull())
		marker_ = value["Marker"].asString();

}

std::vector<ListUserBasicInfosResult::UserBasicInfo> ListUserBasicInfosResult::getUserBasicInfos()const
{
	return userBasicInfos_;
}

bool ListUserBasicInfosResult::getIsTruncated()const
{
	return isTruncated_;
}

std::string ListUserBasicInfosResult::getMarker()const
{
	return marker_;
}

