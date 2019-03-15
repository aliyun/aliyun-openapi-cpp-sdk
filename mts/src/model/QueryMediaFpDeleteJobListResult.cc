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
	auto allMediaFpDeleteJobList = value["MediaFpDeleteJobList"]["MediaFpDeleteJob"];
	for (auto value : allMediaFpDeleteJobList)
	{
		MediaFpDeleteJob mediaFpDeleteJobListObject;
		if(!value["Id"].isNull())
			mediaFpDeleteJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			mediaFpDeleteJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			mediaFpDeleteJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			mediaFpDeleteJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			mediaFpDeleteJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			mediaFpDeleteJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			mediaFpDeleteJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["FinishTime"].isNull())
			mediaFpDeleteJobListObject.finishTime = value["FinishTime"].asString();
		if(!value["PrimaryKey"].isNull())
			mediaFpDeleteJobListObject.primaryKey = value["PrimaryKey"].asString();
		if(!value["FpDBId"].isNull())
			mediaFpDeleteJobListObject.fpDBId = value["FpDBId"].asString();
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

