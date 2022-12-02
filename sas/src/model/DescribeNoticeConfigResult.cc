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

#include <alibabacloud/sas/model/DescribeNoticeConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeNoticeConfigResult::DescribeNoticeConfigResult() :
	ServiceResult()
{}

DescribeNoticeConfigResult::DescribeNoticeConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNoticeConfigResult::~DescribeNoticeConfigResult()
{}

void DescribeNoticeConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNoticeConfigListNode = value["NoticeConfigList"]["NoticeConfig"];
	for (auto valueNoticeConfigListNoticeConfig : allNoticeConfigListNode)
	{
		NoticeConfig noticeConfigListObject;
		if(!valueNoticeConfigListNoticeConfig["TimeLimit"].isNull())
			noticeConfigListObject.timeLimit = std::stoi(valueNoticeConfigListNoticeConfig["TimeLimit"].asString());
		if(!valueNoticeConfigListNoticeConfig["AliUid"].isNull())
			noticeConfigListObject.aliUid = std::stol(valueNoticeConfigListNoticeConfig["AliUid"].asString());
		if(!valueNoticeConfigListNoticeConfig["CurrentPage"].isNull())
			noticeConfigListObject.currentPage = std::stoi(valueNoticeConfigListNoticeConfig["CurrentPage"].asString());
		if(!valueNoticeConfigListNoticeConfig["Project"].isNull())
			noticeConfigListObject.project = valueNoticeConfigListNoticeConfig["Project"].asString();
		if(!valueNoticeConfigListNoticeConfig["Route"].isNull())
			noticeConfigListObject.route = std::stoi(valueNoticeConfigListNoticeConfig["Route"].asString());
		if(!valueNoticeConfigListNoticeConfig["AllFocusLevel"].isNull())
			noticeConfigListObject.allFocusLevel = valueNoticeConfigListNoticeConfig["AllFocusLevel"].asString();
		if(!valueNoticeConfigListNoticeConfig["FocusLevel"].isNull())
			noticeConfigListObject.focusLevel = valueNoticeConfigListNoticeConfig["FocusLevel"].asString();
		if(!valueNoticeConfigListNoticeConfig["CustomThreshold"].isNull())
			noticeConfigListObject.customThreshold = std::stoi(valueNoticeConfigListNoticeConfig["CustomThreshold"].asString());
		noticeConfigList_.push_back(noticeConfigListObject);
	}

}

std::vector<DescribeNoticeConfigResult::NoticeConfig> DescribeNoticeConfigResult::getNoticeConfigList()const
{
	return noticeConfigList_;
}

