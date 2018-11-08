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

#include <alibabacloud/mts/model/ListCoverPipelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListCoverPipelineResult::ListCoverPipelineResult() :
	ServiceResult()
{}

ListCoverPipelineResult::ListCoverPipelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCoverPipelineResult::~ListCoverPipelineResult()
{}

void ListCoverPipelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPipelineList = value["PipelineList"]["Pipeline"];
	for (auto value : allPipelineList)
	{
		Pipeline pipelineListObject;
		if(!value["UserId"].isNull())
			pipelineListObject.userId = std::stol(value["UserId"].asString());
		if(!value["PipelineId"].isNull())
			pipelineListObject.pipelineId = value["PipelineId"].asString();
		if(!value["Name"].isNull())
			pipelineListObject.name = value["Name"].asString();
		if(!value["State"].isNull())
			pipelineListObject.state = value["State"].asString();
		if(!value["Priority"].isNull())
			pipelineListObject.priority = value["Priority"].asString();
		if(!value["quotaNum"].isNull())
			pipelineListObject.quotaNum = std::stoi(value["quotaNum"].asString());
		if(!value["quotaUsed"].isNull())
			pipelineListObject.quotaUsed = std::stoi(value["quotaUsed"].asString());
		if(!value["NotifyConfig"].isNull())
			pipelineListObject.notifyConfig = value["NotifyConfig"].asString();
		if(!value["Role"].isNull())
			pipelineListObject.role = value["Role"].asString();
		if(!value["ExtendConfig"].isNull())
			pipelineListObject.extendConfig = value["ExtendConfig"].asString();
		pipelineList_.push_back(pipelineListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListCoverPipelineResult::getTotalCount()const
{
	return totalCount_;
}

long ListCoverPipelineResult::getPageSize()const
{
	return pageSize_;
}

long ListCoverPipelineResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCoverPipelineResult::Pipeline> ListCoverPipelineResult::getPipelineList()const
{
	return pipelineList_;
}

