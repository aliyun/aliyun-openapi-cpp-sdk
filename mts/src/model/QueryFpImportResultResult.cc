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

#include <alibabacloud/mts/model/QueryFpImportResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryFpImportResultResult::QueryFpImportResultResult() :
	ServiceResult()
{}

QueryFpImportResultResult::QueryFpImportResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFpImportResultResult::~QueryFpImportResultResult()
{}

void QueryFpImportResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFpResultLogInfoList = value["FpResultLogInfoList"]["FpResultLogInfo"];
	for (auto value : allFpResultLogInfoList)
	{
		FpResultLogInfo fpResultLogInfoListObject;
		if(!value["LogPath"].isNull())
			fpResultLogInfoListObject.logPath = value["LogPath"].asString();
		if(!value["LogName"].isNull())
			fpResultLogInfoListObject.logName = value["LogName"].asString();
		if(!value["LogStartTime"].isNull())
			fpResultLogInfoListObject.logStartTime = std::stol(value["LogStartTime"].asString());
		if(!value["LogEndTime"].isNull())
			fpResultLogInfoListObject.logEndTime = std::stol(value["LogEndTime"].asString());
		if(!value["LogSize"].isNull())
			fpResultLogInfoListObject.logSize = std::stol(value["LogSize"].asString());
		if(!value["CreateTime"].isNull())
			fpResultLogInfoListObject.createTime = std::stol(value["CreateTime"].asString());
		fpResultLogInfoList_.push_back(fpResultLogInfoListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["PageIndex"].isNull())
		pageInfo_.pageIndex = std::stol(pageInfoNode["PageIndex"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stol(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["Total"].isNull())
		pageInfo_.total = std::stol(pageInfoNode["Total"].asString());
	if(!value["LogCount"].isNull())
		logCount_ = std::stol(value["LogCount"].asString());

}

QueryFpImportResultResult::PageInfo QueryFpImportResultResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<QueryFpImportResultResult::FpResultLogInfo> QueryFpImportResultResult::getFpResultLogInfoList()const
{
	return fpResultLogInfoList_;
}

long QueryFpImportResultResult::getLogCount()const
{
	return logCount_;
}

