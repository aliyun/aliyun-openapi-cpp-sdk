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

#include <alibabacloud/emr/model/ListExecutePlanMigrateInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListExecutePlanMigrateInfoResult::ListExecutePlanMigrateInfoResult() :
	ServiceResult()
{}

ListExecutePlanMigrateInfoResult::ListExecutePlanMigrateInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExecutePlanMigrateInfoResult::~ListExecutePlanMigrateInfoResult()
{}

void ListExecutePlanMigrateInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allExecutePlanMigrateInfoList = value["ExecutePlanMigrateInfoList"]["ExecutePlanMigrateInfo"];
	for (auto value : allExecutePlanMigrateInfoList)
	{
		ExecutePlanMigrateInfo executePlanMigrateInfoListObject;
		if(!value["Id"].isNull())
			executePlanMigrateInfoListObject.id = std::stol(value["Id"].asString());
		if(!value["BizId"].isNull())
			executePlanMigrateInfoListObject.bizId = value["BizId"].asString();
		if(!value["CreateTime"].isNull())
			executePlanMigrateInfoListObject.createTime = value["CreateTime"].asString();
		if(!value["Name"].isNull())
			executePlanMigrateInfoListObject.name = value["Name"].asString();
		if(!value["Status"].isNull())
			executePlanMigrateInfoListObject.status = std::stol(value["Status"].asString());
		if(!value["CronExpr"].isNull())
			executePlanMigrateInfoListObject.cronExpr = value["CronExpr"].asString();
		if(!value["StartScheduleTime"].isNull())
			executePlanMigrateInfoListObject.startScheduleTime = value["StartScheduleTime"].asString();
		if(!value["IsCycle"].isNull())
			executePlanMigrateInfoListObject.isCycle = std::stol(value["IsCycle"].asString());
		if(!value["BuildClusterCondition"].isNull())
			executePlanMigrateInfoListObject.buildClusterCondition = value["BuildClusterCondition"].asString();
		auto allJobList = value["JobList"]["JobInfo"];
		for (auto value : allJobList)
		{
			ExecutePlanMigrateInfo::JobInfo jobListObject;
			if(!value["ClusterId"].isNull())
				jobListObject.clusterId = value["ClusterId"].asString();
			if(!value["JobId"].isNull())
				jobListObject.jobId = value["JobId"].asString();
			if(!value["Description"].isNull())
				jobListObject.description = value["Description"].asString();
			if(!value["IndexNO"].isNull())
				jobListObject.indexNO = std::stol(value["IndexNO"].asString());
			if(!value["Status"].isNull())
				jobListObject.status = std::stol(value["Status"].asString());
			executePlanMigrateInfoListObject.jobList.push_back(jobListObject);
		}
		executePlanMigrateInfoList_.push_back(executePlanMigrateInfoListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<ListExecutePlanMigrateInfoResult::ExecutePlanMigrateInfo> ListExecutePlanMigrateInfoResult::getExecutePlanMigrateInfoList()const
{
	return executePlanMigrateInfoList_;
}

long ListExecutePlanMigrateInfoResult::getTotal()const
{
	return total_;
}

