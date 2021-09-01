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

#include <alibabacloud/mts/model/QueryFpDBDeleteJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryFpDBDeleteJobListResult::QueryFpDBDeleteJobListResult() :
	ServiceResult()
{}

QueryFpDBDeleteJobListResult::QueryFpDBDeleteJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFpDBDeleteJobListResult::~QueryFpDBDeleteJobListResult()
{}

void QueryFpDBDeleteJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFpDBDeleteJobListNode = value["FpDBDeleteJobList"]["FpDBDeleteJob"];
	for (auto valueFpDBDeleteJobListFpDBDeleteJob : allFpDBDeleteJobListNode)
	{
		FpDBDeleteJob fpDBDeleteJobListObject;
		if(!valueFpDBDeleteJobListFpDBDeleteJob["CreationTime"].isNull())
			fpDBDeleteJobListObject.creationTime = valueFpDBDeleteJobListFpDBDeleteJob["CreationTime"].asString();
		if(!valueFpDBDeleteJobListFpDBDeleteJob["Status"].isNull())
			fpDBDeleteJobListObject.status = valueFpDBDeleteJobListFpDBDeleteJob["Status"].asString();
		if(!valueFpDBDeleteJobListFpDBDeleteJob["FinishTime"].isNull())
			fpDBDeleteJobListObject.finishTime = valueFpDBDeleteJobListFpDBDeleteJob["FinishTime"].asString();
		if(!valueFpDBDeleteJobListFpDBDeleteJob["DelType"].isNull())
			fpDBDeleteJobListObject.delType = valueFpDBDeleteJobListFpDBDeleteJob["DelType"].asString();
		if(!valueFpDBDeleteJobListFpDBDeleteJob["UserData"].isNull())
			fpDBDeleteJobListObject.userData = valueFpDBDeleteJobListFpDBDeleteJob["UserData"].asString();
		if(!valueFpDBDeleteJobListFpDBDeleteJob["Code"].isNull())
			fpDBDeleteJobListObject.code = valueFpDBDeleteJobListFpDBDeleteJob["Code"].asString();
		if(!valueFpDBDeleteJobListFpDBDeleteJob["Message"].isNull())
			fpDBDeleteJobListObject.message = valueFpDBDeleteJobListFpDBDeleteJob["Message"].asString();
		if(!valueFpDBDeleteJobListFpDBDeleteJob["PipelineId"].isNull())
			fpDBDeleteJobListObject.pipelineId = valueFpDBDeleteJobListFpDBDeleteJob["PipelineId"].asString();
		if(!valueFpDBDeleteJobListFpDBDeleteJob["FpDBId"].isNull())
			fpDBDeleteJobListObject.fpDBId = valueFpDBDeleteJobListFpDBDeleteJob["FpDBId"].asString();
		if(!valueFpDBDeleteJobListFpDBDeleteJob["Id"].isNull())
			fpDBDeleteJobListObject.id = valueFpDBDeleteJobListFpDBDeleteJob["Id"].asString();
		fpDBDeleteJobList_.push_back(fpDBDeleteJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryFpDBDeleteJobListResult::FpDBDeleteJob> QueryFpDBDeleteJobListResult::getFpDBDeleteJobList()const
{
	return fpDBDeleteJobList_;
}

std::vector<std::string> QueryFpDBDeleteJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

