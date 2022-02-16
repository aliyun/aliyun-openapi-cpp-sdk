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

#include <alibabacloud/emr/model/ListFlowJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowJobResult::ListFlowJobResult() :
	ServiceResult()
{}

ListFlowJobResult::ListFlowJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowJobResult::~ListFlowJobResult()
{}

void ListFlowJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["Job"];
	for (auto valueJobListJob : allJobListNode)
	{
		Job jobListObject;
		if(!valueJobListJob["Id"].isNull())
			jobListObject.id = valueJobListJob["Id"].asString();
		if(!valueJobListJob["GmtCreate"].isNull())
			jobListObject.gmtCreate = std::stol(valueJobListJob["GmtCreate"].asString());
		if(!valueJobListJob["GmtModified"].isNull())
			jobListObject.gmtModified = std::stol(valueJobListJob["GmtModified"].asString());
		if(!valueJobListJob["Name"].isNull())
			jobListObject.name = valueJobListJob["Name"].asString();
		if(!valueJobListJob["Type"].isNull())
			jobListObject.type = valueJobListJob["Type"].asString();
		if(!valueJobListJob["Description"].isNull())
			jobListObject.description = valueJobListJob["Description"].asString();
		if(!valueJobListJob["FailAct"].isNull())
			jobListObject.failAct = valueJobListJob["FailAct"].asString();
		if(!valueJobListJob["MaxRetry"].isNull())
			jobListObject.maxRetry = std::stoi(valueJobListJob["MaxRetry"].asString());
		if(!valueJobListJob["RetryInterval"].isNull())
			jobListObject.retryInterval = std::stol(valueJobListJob["RetryInterval"].asString());
		if(!valueJobListJob["Params"].isNull())
			jobListObject.params = valueJobListJob["Params"].asString();
		if(!valueJobListJob["ParamConf"].isNull())
			jobListObject.paramConf = valueJobListJob["ParamConf"].asString();
		if(!valueJobListJob["CustomVariables"].isNull())
			jobListObject.customVariables = valueJobListJob["CustomVariables"].asString();
		if(!valueJobListJob["EnvConf"].isNull())
			jobListObject.envConf = valueJobListJob["EnvConf"].asString();
		if(!valueJobListJob["RunConf"].isNull())
			jobListObject.runConf = valueJobListJob["RunConf"].asString();
		if(!valueJobListJob["MonitorConf"].isNull())
			jobListObject.monitorConf = valueJobListJob["MonitorConf"].asString();
		if(!valueJobListJob["CategoryId"].isNull())
			jobListObject.categoryId = valueJobListJob["CategoryId"].asString();
		if(!valueJobListJob["mode"].isNull())
			jobListObject.mode = valueJobListJob["mode"].asString();
		if(!valueJobListJob["Adhoc"].isNull())
			jobListObject.adhoc = valueJobListJob["Adhoc"].asString();
		if(!valueJobListJob["AlertConf"].isNull())
			jobListObject.alertConf = valueJobListJob["AlertConf"].asString();
		if(!valueJobListJob["LastInstanceDetail"].isNull())
			jobListObject.lastInstanceDetail = valueJobListJob["LastInstanceDetail"].asString();
		auto allResourceListNode = valueJobListJob["ResourceList"]["Resource"];
		for (auto valueJobListJobResourceListResource : allResourceListNode)
		{
			Job::Resource resourceListObject;
			if(!valueJobListJobResourceListResource["Path"].isNull())
				resourceListObject.path = valueJobListJobResourceListResource["Path"].asString();
			if(!valueJobListJobResourceListResource["Alias"].isNull())
				resourceListObject.alias = valueJobListJobResourceListResource["Alias"].asString();
			jobListObject.resourceList.push_back(resourceListObject);
		}
		jobList_.push_back(jobListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListFlowJobResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowJobResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowJobResult::getTotal()const
{
	return total_;
}

std::vector<ListFlowJobResult::Job> ListFlowJobResult::getJobList()const
{
	return jobList_;
}

