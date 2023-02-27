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

#include <alibabacloud/ice/model/QueryDNAJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

QueryDNAJobListResult::QueryDNAJobListResult() :
	ServiceResult()
{}

QueryDNAJobListResult::QueryDNAJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDNAJobListResult::~QueryDNAJobListResult()
{}

void QueryDNAJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["DNAJob"];
	for (auto valueJobListDNAJob : allJobListNode)
	{
		DNAJob jobListObject;
		if(!valueJobListDNAJob["DNAResult"].isNull())
			jobListObject.dNAResult = valueJobListDNAJob["DNAResult"].asString();
		if(!valueJobListDNAJob["PrimaryKey"].isNull())
			jobListObject.primaryKey = valueJobListDNAJob["PrimaryKey"].asString();
		if(!valueJobListDNAJob["DBId"].isNull())
			jobListObject.dBId = valueJobListDNAJob["DBId"].asString();
		if(!valueJobListDNAJob["CreationTime"].isNull())
			jobListObject.creationTime = valueJobListDNAJob["CreationTime"].asString();
		if(!valueJobListDNAJob["FinishTime"].isNull())
			jobListObject.finishTime = valueJobListDNAJob["FinishTime"].asString();
		if(!valueJobListDNAJob["Status"].isNull())
			jobListObject.status = valueJobListDNAJob["Status"].asString();
		if(!valueJobListDNAJob["Message"].isNull())
			jobListObject.message = valueJobListDNAJob["Message"].asString();
		if(!valueJobListDNAJob["Config"].isNull())
			jobListObject.config = valueJobListDNAJob["Config"].asString();
		if(!valueJobListDNAJob["UserData"].isNull())
			jobListObject.userData = valueJobListDNAJob["UserData"].asString();
		if(!valueJobListDNAJob["Code"].isNull())
			jobListObject.code = valueJobListDNAJob["Code"].asString();
		if(!valueJobListDNAJob["Id"].isNull())
			jobListObject.id = valueJobListDNAJob["Id"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Type"].isNull())
			jobListObject.input.type = inputNode["Type"].asString();
		if(!inputNode["Media"].isNull())
			jobListObject.input.media = inputNode["Media"].asString();
		jobList_.push_back(jobListObject);
	}
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::string QueryDNAJobListResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<QueryDNAJobListResult::DNAJob> QueryDNAJobListResult::getJobList()const
{
	return jobList_;
}

