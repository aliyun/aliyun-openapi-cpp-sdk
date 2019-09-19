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

#include <alibabacloud/chatbot/model/QueryKnowledgesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

QueryKnowledgesResult::QueryKnowledgesResult() :
	ServiceResult()
{}

QueryKnowledgesResult::QueryKnowledgesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryKnowledgesResult::~QueryKnowledgesResult()
{}

void QueryKnowledgesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKnowledgesNode = value["Knowledges"]["Knowledge"];
	for (auto valueKnowledgesKnowledge : allKnowledgesNode)
	{
		Knowledge knowledgesObject;
		if(!valueKnowledgesKnowledge["KnowledgeId"].isNull())
			knowledgesObject.knowledgeId = std::stol(valueKnowledgesKnowledge["KnowledgeId"].asString());
		if(!valueKnowledgesKnowledge["ModifyTime"].isNull())
			knowledgesObject.modifyTime = valueKnowledgesKnowledge["ModifyTime"].asString();
		if(!valueKnowledgesKnowledge["ModifyUserName"].isNull())
			knowledgesObject.modifyUserName = valueKnowledgesKnowledge["ModifyUserName"].asString();
		if(!valueKnowledgesKnowledge["CreateTime"].isNull())
			knowledgesObject.createTime = valueKnowledgesKnowledge["CreateTime"].asString();
		if(!valueKnowledgesKnowledge["CreateUserName"].isNull())
			knowledgesObject.createUserName = valueKnowledgesKnowledge["CreateUserName"].asString();
		if(!valueKnowledgesKnowledge["CategoryId"].isNull())
			knowledgesObject.categoryId = std::stol(valueKnowledgesKnowledge["CategoryId"].asString());
		if(!valueKnowledgesKnowledge["KnowledgeStatus"].isNull())
			knowledgesObject.knowledgeStatus = std::stoi(valueKnowledgesKnowledge["KnowledgeStatus"].asString());
		if(!valueKnowledgesKnowledge["KnowledgeTitle"].isNull())
			knowledgesObject.knowledgeTitle = valueKnowledgesKnowledge["KnowledgeTitle"].asString();
		if(!valueKnowledgesKnowledge["StartDate"].isNull())
			knowledgesObject.startDate = valueKnowledgesKnowledge["StartDate"].asString();
		if(!valueKnowledgesKnowledge["EndDate"].isNull())
			knowledgesObject.endDate = valueKnowledgesKnowledge["EndDate"].asString();
		if(!valueKnowledgesKnowledge["Version"].isNull())
			knowledgesObject.version = valueKnowledgesKnowledge["Version"].asString();
		auto allCoreWords = value["CoreWords"]["CoreWord"];
		for (auto value : allCoreWords)
			knowledgesObject.coreWords.push_back(value.asString());
		knowledges_.push_back(knowledgesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryKnowledgesResult::getTotalCount()const
{
	return totalCount_;
}

int QueryKnowledgesResult::getPageSize()const
{
	return pageSize_;
}

int QueryKnowledgesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<QueryKnowledgesResult::Knowledge> QueryKnowledgesResult::getKnowledges()const
{
	return knowledges_;
}

