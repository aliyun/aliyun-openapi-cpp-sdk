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

#include <alibabacloud/foas/model/GetJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

GetJobResult::GetJobResult() :
	ServiceResult()
{}

GetJobResult::GetJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobResult::~GetJobResult()
{}

void GetJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobNode = value["Job"];
	if(!jobNode["JobName"].isNull())
		job_.jobName = jobNode["JobName"].asString();
	if(!jobNode["ProjectName"].isNull())
		job_.projectName = jobNode["ProjectName"].asString();
	if(!jobNode["JobType"].isNull())
		job_.jobType = jobNode["JobType"].asString();
	if(!jobNode["ApiType"].isNull())
		job_.apiType = jobNode["ApiType"].asString();
	if(!jobNode["Code"].isNull())
		job_.code = jobNode["Code"].asString();
	if(!jobNode["PlanJson"].isNull())
		job_.planJson = jobNode["PlanJson"].asString();
	if(!jobNode["Properties"].isNull())
		job_.properties = jobNode["Properties"].asString();
	if(!jobNode["Packages"].isNull())
		job_.packages = jobNode["Packages"].asString();
	if(!jobNode["IsCommitted"].isNull())
		job_.isCommitted = jobNode["IsCommitted"].asString() == "true";
	if(!jobNode["Creator"].isNull())
		job_.creator = jobNode["Creator"].asString();
	if(!jobNode["CreateTime"].isNull())
		job_.createTime = std::stol(jobNode["CreateTime"].asString());
	if(!jobNode["Modifier"].isNull())
		job_.modifier = jobNode["Modifier"].asString();
	if(!jobNode["ModifyTime"].isNull())
		job_.modifyTime = std::stol(jobNode["ModifyTime"].asString());
	if(!jobNode["Description"].isNull())
		job_.description = jobNode["Description"].asString();
	if(!jobNode["EngineVersion"].isNull())
		job_.engineVersion = jobNode["EngineVersion"].asString();
	if(!jobNode["ClusterId"].isNull())
		job_.clusterId = jobNode["ClusterId"].asString();
	if(!jobNode["QueueName"].isNull())
		job_.queueName = jobNode["QueueName"].asString();
	if(!jobNode["FolderId"].isNull())
		job_.folderId = std::stol(jobNode["FolderId"].asString());
	if(!jobNode["JobId"].isNull())
		job_.jobId = jobNode["JobId"].asString();
	if(!jobNode["FileId"].isNull())
		job_.fileId = jobNode["FileId"].asString();

}

GetJobResult::Job GetJobResult::getJob()const
{
	return job_;
}

