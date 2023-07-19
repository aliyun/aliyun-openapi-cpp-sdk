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

#include <alibabacloud/dts/model/DescribeCheckJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeCheckJobsResult::DescribeCheckJobsResult() :
	ServiceResult()
{}

DescribeCheckJobsResult::DescribeCheckJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCheckJobsResult::~DescribeCheckJobsResult()
{}

void DescribeCheckJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCheckJobsNode = value["CheckJobs"]["checkJobsItem"];
	for (auto valueCheckJobscheckJobsItem : allCheckJobsNode)
	{
		CheckJobsItem checkJobsObject;
		if(!valueCheckJobscheckJobsItem["DtsJobId"].isNull())
			checkJobsObject.dtsJobId = valueCheckJobscheckJobsItem["DtsJobId"].asString();
		if(!valueCheckJobscheckJobsItem["JobStepId"].isNull())
			checkJobsObject.jobStepId = valueCheckJobscheckJobsItem["JobStepId"].asString();
		if(!valueCheckJobscheckJobsItem["JobName"].isNull())
			checkJobsObject.jobName = valueCheckJobscheckJobsItem["JobName"].asString();
		if(!valueCheckJobscheckJobsItem["Status"].isNull())
			checkJobsObject.status = std::stoi(valueCheckJobscheckJobsItem["Status"].asString());
		if(!valueCheckJobscheckJobsItem["CheckType"].isNull())
			checkJobsObject.checkType = std::stoi(valueCheckJobscheckJobsItem["CheckType"].asString());
		if(!valueCheckJobscheckJobsItem["InstanceClass"].isNull())
			checkJobsObject.instanceClass = valueCheckJobscheckJobsItem["InstanceClass"].asString();
		if(!valueCheckJobscheckJobsItem["CheckPoint"].isNull())
			checkJobsObject.checkPoint = std::stol(valueCheckJobscheckJobsItem["CheckPoint"].asString());
		if(!valueCheckJobscheckJobsItem["TotalCount"].isNull())
			checkJobsObject.totalCount = std::stol(valueCheckJobscheckJobsItem["TotalCount"].asString());
		if(!valueCheckJobscheckJobsItem["DiffCount"].isNull())
			checkJobsObject.diffCount = std::stol(valueCheckJobscheckJobsItem["DiffCount"].asString());
		if(!valueCheckJobscheckJobsItem["DiffSum"].isNull())
			checkJobsObject.diffSum = std::stol(valueCheckJobscheckJobsItem["DiffSum"].asString());
		if(!valueCheckJobscheckJobsItem["FinishCount"].isNull())
			checkJobsObject.finishCount = std::stol(valueCheckJobscheckJobsItem["FinishCount"].asString());
		if(!valueCheckJobscheckJobsItem["GroupId"].isNull())
			checkJobsObject.groupId = valueCheckJobscheckJobsItem["GroupId"].asString();
		if(!valueCheckJobscheckJobsItem["DtsInstanceID"].isNull())
			checkJobsObject.dtsInstanceID = valueCheckJobscheckJobsItem["DtsInstanceID"].asString();
		if(!valueCheckJobscheckJobsItem["ChargeType"].isNull())
			checkJobsObject.chargeType = valueCheckJobscheckJobsItem["ChargeType"].asString();
		if(!valueCheckJobscheckJobsItem["ParentJobType"].isNull())
			checkJobsObject.parentJobType = valueCheckJobscheckJobsItem["ParentJobType"].asString();
		if(!valueCheckJobscheckJobsItem["RegionId"].isNull())
			checkJobsObject.regionId = valueCheckJobscheckJobsItem["RegionId"].asString();
		checkJobs_.push_back(checkJobsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stol(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long DescribeCheckJobsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeCheckJobsResult::CheckJobsItem> DescribeCheckJobsResult::getCheckJobs()const
{
	return checkJobs_;
}

long DescribeCheckJobsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeCheckJobsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeCheckJobsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeCheckJobsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeCheckJobsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeCheckJobsResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeCheckJobsResult::getSuccess()const
{
	return success_;
}

std::string DescribeCheckJobsResult::getErrCode()const
{
	return errCode_;
}

