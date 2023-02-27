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

#include <alibabacloud/ice/model/ListLiveRecordJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListLiveRecordJobsResult::ListLiveRecordJobsResult() :
	ServiceResult()
{}

ListLiveRecordJobsResult::ListLiveRecordJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveRecordJobsResult::~ListLiveRecordJobsResult()
{}

void ListLiveRecordJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLiveRecordJobsNode = value["LiveRecordJobs"]["recordJob"];
	for (auto valueLiveRecordJobsrecordJob : allLiveRecordJobsNode)
	{
		RecordJob liveRecordJobsObject;
		if(!valueLiveRecordJobsrecordJob["Name"].isNull())
			liveRecordJobsObject.name = valueLiveRecordJobsrecordJob["Name"].asString();
		if(!valueLiveRecordJobsrecordJob["NotifyUrl"].isNull())
			liveRecordJobsObject.notifyUrl = valueLiveRecordJobsrecordJob["NotifyUrl"].asString();
		if(!valueLiveRecordJobsrecordJob["TemplateId"].isNull())
			liveRecordJobsObject.templateId = valueLiveRecordJobsrecordJob["TemplateId"].asString();
		if(!valueLiveRecordJobsrecordJob["CreateTime"].isNull())
			liveRecordJobsObject.createTime = valueLiveRecordJobsrecordJob["CreateTime"].asString();
		if(!valueLiveRecordJobsrecordJob["JobId"].isNull())
			liveRecordJobsObject.jobId = valueLiveRecordJobsrecordJob["JobId"].asString();
		if(!valueLiveRecordJobsrecordJob["Status"].isNull())
			liveRecordJobsObject.status = valueLiveRecordJobsrecordJob["Status"].asString();
		if(!valueLiveRecordJobsrecordJob["TemplateName"].isNull())
			liveRecordJobsObject.templateName = valueLiveRecordJobsrecordJob["TemplateName"].asString();
		auto recordOutputNode = value["RecordOutput"];
		if(!recordOutputNode["Type"].isNull())
			liveRecordJobsObject.recordOutput.type = recordOutputNode["Type"].asString();
		if(!recordOutputNode["Bucket"].isNull())
			liveRecordJobsObject.recordOutput.bucket = recordOutputNode["Bucket"].asString();
		if(!recordOutputNode["Endpoint"].isNull())
			liveRecordJobsObject.recordOutput.endpoint = recordOutputNode["Endpoint"].asString();
		auto streamInputNode = value["StreamInput"];
		if(!streamInputNode["Type"].isNull())
			liveRecordJobsObject.streamInput.type = streamInputNode["Type"].asString();
		if(!streamInputNode["Url"].isNull())
			liveRecordJobsObject.streamInput.url = streamInputNode["Url"].asString();
		liveRecordJobs_.push_back(liveRecordJobsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["SortBy"].isNull())
		sortBy_ = value["SortBy"].asString();

}

long ListLiveRecordJobsResult::getTotalCount()const
{
	return totalCount_;
}

long ListLiveRecordJobsResult::getPageSize()const
{
	return pageSize_;
}

std::string ListLiveRecordJobsResult::getSortBy()const
{
	return sortBy_;
}

long ListLiveRecordJobsResult::getPageNo()const
{
	return pageNo_;
}

std::vector<ListLiveRecordJobsResult::RecordJob> ListLiveRecordJobsResult::getLiveRecordJobs()const
{
	return liveRecordJobs_;
}

