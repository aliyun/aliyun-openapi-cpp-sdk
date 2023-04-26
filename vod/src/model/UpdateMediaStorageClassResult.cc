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

#include <alibabacloud/vod/model/UpdateMediaStorageClassResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

UpdateMediaStorageClassResult::UpdateMediaStorageClassResult() :
	ServiceResult()
{}

UpdateMediaStorageClassResult::UpdateMediaStorageClassResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateMediaStorageClassResult::~UpdateMediaStorageClassResult()
{}

void UpdateMediaStorageClassResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allForbiddenListNode = value["ForbiddenList"]["MediaForbiddenReasonDTO"];
	for (auto valueForbiddenListMediaForbiddenReasonDTO : allForbiddenListNode)
	{
		MediaForbiddenReasonDTO forbiddenListObject;
		if(!valueForbiddenListMediaForbiddenReasonDTO["MediaId"].isNull())
			forbiddenListObject.mediaId = valueForbiddenListMediaForbiddenReasonDTO["MediaId"].asString();
		if(!valueForbiddenListMediaForbiddenReasonDTO["Reason"].isNull())
			forbiddenListObject.reason = valueForbiddenListMediaForbiddenReasonDTO["Reason"].asString();
		forbiddenList_.push_back(forbiddenListObject);
	}
	auto allIgnoredList = value["IgnoredList"]["MediaId"];
	for (const auto &item : allIgnoredList)
		ignoredList_.push_back(item.asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string UpdateMediaStorageClassResult::getStatus()const
{
	return status_;
}

std::vector<std::string> UpdateMediaStorageClassResult::getIgnoredList()const
{
	return ignoredList_;
}

std::vector<UpdateMediaStorageClassResult::MediaForbiddenReasonDTO> UpdateMediaStorageClassResult::getForbiddenList()const
{
	return forbiddenList_;
}

