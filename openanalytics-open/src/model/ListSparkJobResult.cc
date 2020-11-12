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

#include <alibabacloud/openanalytics-open/model/ListSparkJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

ListSparkJobResult::ListSparkJobResult() :
	ServiceResult()
{}

ListSparkJobResult::ListSparkJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSparkJobResult::~ListSparkJobResult()
{}

void ListSparkJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataResultNode = value["DataResult"];
	if(!dataResultNode["PageNumber"].isNull())
		dataResult_.pageNumber = dataResultNode["PageNumber"].asString();
	if(!dataResultNode["PageSize"].isNull())
		dataResult_.pageSize = dataResultNode["PageSize"].asString();
	if(!dataResultNode["TotalCount"].isNull())
		dataResult_.totalCount = dataResultNode["TotalCount"].asString();
	auto allJobListNode = dataResultNode["JobList"]["Data"];
	for (auto dataResultNodeJobListData : allJobListNode)
	{
		DataResult::Data dataObject;
		if(!dataResultNodeJobListData["CreateTime"].isNull())
			dataObject.createTime = dataResultNodeJobListData["CreateTime"].asString();
		if(!dataResultNodeJobListData["CreateTimeValue"].isNull())
			dataObject.createTimeValue = dataResultNodeJobListData["CreateTimeValue"].asString();
		if(!dataResultNodeJobListData["Detail"].isNull())
			dataObject.detail = dataResultNodeJobListData["Detail"].asString();
		if(!dataResultNodeJobListData["DriverResourceSpec"].isNull())
			dataObject.driverResourceSpec = dataResultNodeJobListData["DriverResourceSpec"].asString();
		if(!dataResultNodeJobListData["ExecutorInstances"].isNull())
			dataObject.executorInstances = dataResultNodeJobListData["ExecutorInstances"].asString();
		if(!dataResultNodeJobListData["ExecutorResourceSpec"].isNull())
			dataObject.executorResourceSpec = dataResultNodeJobListData["ExecutorResourceSpec"].asString();
		if(!dataResultNodeJobListData["JobId"].isNull())
			dataObject.jobId = dataResultNodeJobListData["JobId"].asString();
		if(!dataResultNodeJobListData["JobName"].isNull())
			dataObject.jobName = dataResultNodeJobListData["JobName"].asString();
		if(!dataResultNodeJobListData["SparkUI"].isNull())
			dataObject.sparkUI = dataResultNodeJobListData["SparkUI"].asString();
		if(!dataResultNodeJobListData["Status"].isNull())
			dataObject.status = dataResultNodeJobListData["Status"].asString();
		if(!dataResultNodeJobListData["SubmitTime"].isNull())
			dataObject.submitTime = dataResultNodeJobListData["SubmitTime"].asString();
		if(!dataResultNodeJobListData["SubmitTimeValue"].isNull())
			dataObject.submitTimeValue = dataResultNodeJobListData["SubmitTimeValue"].asString();
		if(!dataResultNodeJobListData["UpdateTime"].isNull())
			dataObject.updateTime = dataResultNodeJobListData["UpdateTime"].asString();
		if(!dataResultNodeJobListData["UpdateTimeValue"].isNull())
			dataObject.updateTimeValue = dataResultNodeJobListData["UpdateTimeValue"].asString();
		if(!dataResultNodeJobListData["VcName"].isNull())
			dataObject.vcName = dataResultNodeJobListData["VcName"].asString();
		dataResult_.jobList.push_back(dataObject);
	}

}

ListSparkJobResult::DataResult ListSparkJobResult::getDataResult()const
{
	return dataResult_;
}

