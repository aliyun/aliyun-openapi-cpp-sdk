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

#include <alibabacloud/mts/model/QueryMediaFpDeleteJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMediaFpDeleteJobListResult::QueryMediaFpDeleteJobListResult() :
	ServiceResult()
{}

QueryMediaFpDeleteJobListResult::QueryMediaFpDeleteJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMediaFpDeleteJobListResult::~QueryMediaFpDeleteJobListResult()
{}

void QueryMediaFpDeleteJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaFpDeleteJobListNode = value["MediaFpDeleteJobList"]["MediaFpDeleteJob"];
	for (auto valueMediaFpDeleteJobListMediaFpDeleteJob : allMediaFpDeleteJobListNode)
	{
		MediaFpDeleteJob mediaFpDeleteJobListObject;
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["CreationTime"].isNull())
			mediaFpDeleteJobListObject.creationTime = valueMediaFpDeleteJobListMediaFpDeleteJob["CreationTime"].asString();
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["FinishTime"].isNull())
			mediaFpDeleteJobListObject.finishTime = valueMediaFpDeleteJobListMediaFpDeleteJob["FinishTime"].asString();
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["PrimaryKey"].isNull())
			mediaFpDeleteJobListObject.primaryKey = valueMediaFpDeleteJobListMediaFpDeleteJob["PrimaryKey"].asString();
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["State"].isNull())
			mediaFpDeleteJobListObject.state = valueMediaFpDeleteJobListMediaFpDeleteJob["State"].asString();
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["UserData"].isNull())
			mediaFpDeleteJobListObject.userData = valueMediaFpDeleteJobListMediaFpDeleteJob["UserData"].asString();
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["Code"].isNull())
			mediaFpDeleteJobListObject.code = valueMediaFpDeleteJobListMediaFpDeleteJob["Code"].asString();
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["Message"].isNull())
			mediaFpDeleteJobListObject.message = valueMediaFpDeleteJobListMediaFpDeleteJob["Message"].asString();
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["PipelineId"].isNull())
			mediaFpDeleteJobListObject.pipelineId = valueMediaFpDeleteJobListMediaFpDeleteJob["PipelineId"].asString();
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["FpDBId"].isNull())
			mediaFpDeleteJobListObject.fpDBId = valueMediaFpDeleteJobListMediaFpDeleteJob["FpDBId"].asString();
		if(!valueMediaFpDeleteJobListMediaFpDeleteJob["Id"].isNull())
			mediaFpDeleteJobListObject.id = valueMediaFpDeleteJobListMediaFpDeleteJob["Id"].asString();
		mediaFpDeleteJobList_.push_back(mediaFpDeleteJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<std::string> QueryMediaFpDeleteJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

std::vector<QueryMediaFpDeleteJobListResult::MediaFpDeleteJob> QueryMediaFpDeleteJobListResult::getMediaFpDeleteJobList()const
{
	return mediaFpDeleteJobList_;
}

