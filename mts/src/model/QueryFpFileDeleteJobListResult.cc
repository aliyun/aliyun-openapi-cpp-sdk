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

#include <alibabacloud/mts/model/QueryFpFileDeleteJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryFpFileDeleteJobListResult::QueryFpFileDeleteJobListResult() :
	ServiceResult()
{}

QueryFpFileDeleteJobListResult::QueryFpFileDeleteJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFpFileDeleteJobListResult::~QueryFpFileDeleteJobListResult()
{}

void QueryFpFileDeleteJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFpFileDeleteJobListNode = value["FpFileDeleteJobList"]["FpFileDeleteJob"];
	for (auto valueFpFileDeleteJobListFpFileDeleteJob : allFpFileDeleteJobListNode)
	{
		FpFileDeleteJob fpFileDeleteJobListObject;
		if(!valueFpFileDeleteJobListFpFileDeleteJob["CreationTime"].isNull())
			fpFileDeleteJobListObject.creationTime = valueFpFileDeleteJobListFpFileDeleteJob["CreationTime"].asString();
		if(!valueFpFileDeleteJobListFpFileDeleteJob["Status"].isNull())
			fpFileDeleteJobListObject.status = valueFpFileDeleteJobListFpFileDeleteJob["Status"].asString();
		if(!valueFpFileDeleteJobListFpFileDeleteJob["FinishTime"].isNull())
			fpFileDeleteJobListObject.finishTime = valueFpFileDeleteJobListFpFileDeleteJob["FinishTime"].asString();
		if(!valueFpFileDeleteJobListFpFileDeleteJob["UserData"].isNull())
			fpFileDeleteJobListObject.userData = valueFpFileDeleteJobListFpFileDeleteJob["UserData"].asString();
		if(!valueFpFileDeleteJobListFpFileDeleteJob["Code"].isNull())
			fpFileDeleteJobListObject.code = valueFpFileDeleteJobListFpFileDeleteJob["Code"].asString();
		if(!valueFpFileDeleteJobListFpFileDeleteJob["Message"].isNull())
			fpFileDeleteJobListObject.message = valueFpFileDeleteJobListFpFileDeleteJob["Message"].asString();
		if(!valueFpFileDeleteJobListFpFileDeleteJob["PipelineId"].isNull())
			fpFileDeleteJobListObject.pipelineId = valueFpFileDeleteJobListFpFileDeleteJob["PipelineId"].asString();
		if(!valueFpFileDeleteJobListFpFileDeleteJob["FpDBId"].isNull())
			fpFileDeleteJobListObject.fpDBId = valueFpFileDeleteJobListFpFileDeleteJob["FpDBId"].asString();
		if(!valueFpFileDeleteJobListFpFileDeleteJob["Id"].isNull())
			fpFileDeleteJobListObject.id = valueFpFileDeleteJobListFpFileDeleteJob["Id"].asString();
		if(!valueFpFileDeleteJobListFpFileDeleteJob["FileIds"].isNull())
			fpFileDeleteJobListObject.fileIds = valueFpFileDeleteJobListFpFileDeleteJob["FileIds"].asString();
		fpFileDeleteJobList_.push_back(fpFileDeleteJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryFpFileDeleteJobListResult::FpFileDeleteJob> QueryFpFileDeleteJobListResult::getFpFileDeleteJobList()const
{
	return fpFileDeleteJobList_;
}

std::vector<std::string> QueryFpFileDeleteJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

