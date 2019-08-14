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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allJobList = value["JobList"]["Job"];
	for (auto value : allJobList)
	{
		Job jobListObject;
		if(!value["Id"].isNull())
			jobListObject.id = value["Id"].asString();
		if(!value["GmtCreate"].isNull())
			jobListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			jobListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Name"].isNull())
			jobListObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			jobListObject.type = value["Type"].asString();
		if(!value["Description"].isNull())
			jobListObject.description = value["Description"].asString();
		if(!value["FailAct"].isNull())
			jobListObject.failAct = value["FailAct"].asString();
		if(!value["MaxRetry"].isNull())
			jobListObject.maxRetry = std::stoi(value["MaxRetry"].asString());
		if(!value["RetryInterval"].isNull())
			jobListObject.retryInterval = std::stol(value["RetryInterval"].asString());
		if(!value["Params"].isNull())
			jobListObject.params = value["Params"].asString();
		if(!value["ParamConf"].isNull())
			jobListObject.paramConf = value["ParamConf"].asString();
		if(!value["CustomVariables"].isNull())
			jobListObject.customVariables = value["CustomVariables"].asString();
		if(!value["EnvConf"].isNull())
			jobListObject.envConf = value["EnvConf"].asString();
		if(!value["RunConf"].isNull())
			jobListObject.runConf = value["RunConf"].asString();
		if(!value["MonitorConf"].isNull())
			jobListObject.monitorConf = value["MonitorConf"].asString();
		if(!value["CategoryId"].isNull())
			jobListObject.categoryId = value["CategoryId"].asString();
		if(!value["mode"].isNull())
			jobListObject.mode = value["mode"].asString();
		if(!value["Adhoc"].isNull())
			jobListObject.adhoc = value["Adhoc"].asString();
		if(!value["AlertConf"].isNull())
			jobListObject.alertConf = value["AlertConf"].asString();
		if(!value["LastInstanceDetail"].isNull())
			jobListObject.lastInstanceDetail = value["LastInstanceDetail"].asString();
		auto allResourceList = value["ResourceList"]["Resource"];
		for (auto value : allResourceList)
		{
			Job::Resource resourceListObject;
			if(!value["Path"].isNull())
				resourceListObject.path = value["Path"].asString();
			if(!value["Alias"].isNull())
				resourceListObject.alias = value["Alias"].asString();
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

