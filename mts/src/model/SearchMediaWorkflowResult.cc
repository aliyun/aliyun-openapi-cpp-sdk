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

#include <alibabacloud/mts/model/SearchMediaWorkflowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SearchMediaWorkflowResult::SearchMediaWorkflowResult() :
	ServiceResult()
{}

SearchMediaWorkflowResult::SearchMediaWorkflowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchMediaWorkflowResult::~SearchMediaWorkflowResult()
{}

void SearchMediaWorkflowResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allMediaWorkflowList = value["MediaWorkflowList"]["MediaWorkflow"];
	for (auto value : allMediaWorkflowList)
	{
		MediaWorkflow mediaWorkflowListObject;
		if(!value["MediaWorkflowId"].isNull())
			mediaWorkflowListObject.mediaWorkflowId = value["MediaWorkflowId"].asString();
		if(!value["Name"].isNull())
			mediaWorkflowListObject.name = value["Name"].asString();
		if(!value["Topology"].isNull())
			mediaWorkflowListObject.topology = value["Topology"].asString();
		if(!value["TriggerMode"].isNull())
			mediaWorkflowListObject.triggerMode = value["TriggerMode"].asString();
		if(!value["State"].isNull())
			mediaWorkflowListObject.state = value["State"].asString();
		if(!value["CreationTime"].isNull())
			mediaWorkflowListObject.creationTime = value["CreationTime"].asString();
		mediaWorkflowList_.push_back(mediaWorkflowListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long SearchMediaWorkflowResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<SearchMediaWorkflowResult::MediaWorkflow> SearchMediaWorkflowResult::getMediaWorkflowList()const
{
	return mediaWorkflowList_;
}

long SearchMediaWorkflowResult::getPageSize()const
{
	return pageSize_;
}

long SearchMediaWorkflowResult::getPageNumber()const
{
	return pageNumber_;
}

