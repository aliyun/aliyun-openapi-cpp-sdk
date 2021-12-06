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

#include <alibabacloud/dataworks-public/model/ListDagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDagsResult::ListDagsResult() :
	ServiceResult()
{}

ListDagsResult::ListDagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDagsResult::~ListDagsResult()
{}

void ListDagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allDagsNode = dataNode["Dags"]["Dag"];
	for (auto dataNodeDagsDag : allDagsNode)
	{
		Data::Dag dagObject;
		if(!dataNodeDagsDag["Type"].isNull())
			dagObject.type = dataNodeDagsDag["Type"].asString();
		if(!dataNodeDagsDag["Status"].isNull())
			dagObject.status = dataNodeDagsDag["Status"].asString();
		if(!dataNodeDagsDag["FinishTime"].isNull())
			dagObject.finishTime = std::stol(dataNodeDagsDag["FinishTime"].asString());
		if(!dataNodeDagsDag["CreateTime"].isNull())
			dagObject.createTime = std::stol(dataNodeDagsDag["CreateTime"].asString());
		if(!dataNodeDagsDag["ProjectId"].isNull())
			dagObject.projectId = std::stol(dataNodeDagsDag["ProjectId"].asString());
		if(!dataNodeDagsDag["DagId"].isNull())
			dagObject.dagId = std::stol(dataNodeDagsDag["DagId"].asString());
		if(!dataNodeDagsDag["Gmtdate"].isNull())
			dagObject.gmtdate = std::stol(dataNodeDagsDag["Gmtdate"].asString());
		if(!dataNodeDagsDag["StartTime"].isNull())
			dagObject.startTime = std::stol(dataNodeDagsDag["StartTime"].asString());
		if(!dataNodeDagsDag["CreateUser"].isNull())
			dagObject.createUser = dataNodeDagsDag["CreateUser"].asString();
		if(!dataNodeDagsDag["Bizdate"].isNull())
			dagObject.bizdate = std::stol(dataNodeDagsDag["Bizdate"].asString());
		if(!dataNodeDagsDag["Name"].isNull())
			dagObject.name = dataNodeDagsDag["Name"].asString();
		if(!dataNodeDagsDag["ModifyTime"].isNull())
			dagObject.modifyTime = std::stol(dataNodeDagsDag["ModifyTime"].asString());
		if(!dataNodeDagsDag["OpSeq"].isNull())
			dagObject.opSeq = std::stol(dataNodeDagsDag["OpSeq"].asString());
		data_.dags.push_back(dagObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListDagsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListDagsResult::Data ListDagsResult::getData()const
{
	return data_;
}

std::string ListDagsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDagsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDagsResult::getSuccess()const
{
	return success_;
}

