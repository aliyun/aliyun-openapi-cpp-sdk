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

#include <alibabacloud/aegis/model/DescribeLogMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeLogMetaResult::DescribeLogMetaResult() :
	ServiceResult()
{}

DescribeLogMetaResult::DescribeLogMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogMetaResult::~DescribeLogMetaResult()
{}

void DescribeLogMetaResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allLogMetaList = value["LogMetaList"]["LogMeta"];
	for (auto value : allLogMetaList)
	{
		LogMeta logMetaListObject;
		if(!value["Project"].isNull())
			logMetaListObject.project = value["Project"].asString();
		if(!value["UserProject"].isNull())
			logMetaListObject.userProject = value["UserProject"].asString();
		if(!value["LogStore"].isNull())
			logMetaListObject.logStore = value["LogStore"].asString();
		if(!value["LogDesc"].isNull())
			logMetaListObject.logDesc = value["LogDesc"].asString();
		if(!value["Category"].isNull())
			logMetaListObject.category = value["Category"].asString();
		if(!value["Status"].isNull())
			logMetaListObject.status = value["Status"].asString();
		logMetaList_.push_back(logMetaListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeLogMetaResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeLogMetaResult::LogMeta> DescribeLogMetaResult::getLogMetaList()const
{
	return logMetaList_;
}

