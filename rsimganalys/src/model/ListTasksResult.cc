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

#include <alibabacloud/rsimganalys/model/ListTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rsimganalys;
using namespace AlibabaCloud::Rsimganalys::Model;

ListTasksResult::ListTasksResult() :
	ServiceResult()
{}

ListTasksResult::ListTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTasksResult::~ListTasksResult()
{}

void ListTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Pages"].isNull())
		data_.pages = std::stoi(dataNode["Pages"].asString());
	auto allContentNode = dataNode["Content"]["Contents"];
	for (auto dataNodeContentContents : allContentNode)
	{
		Data::Contents contentsObject;
		if(!dataNodeContentContents["Appkey"].isNull())
			contentsObject.appkey = dataNodeContentContents["Appkey"].asString();
		if(!dataNodeContentContents["CreateTime"].isNull())
			contentsObject.createTime = std::stol(dataNodeContentContents["CreateTime"].asString());
		if(!dataNodeContentContents["EnableZoneIdentification"].isNull())
			contentsObject.enableZoneIdentification = std::stoi(dataNodeContentContents["EnableZoneIdentification"].asString());
		if(!dataNodeContentContents["JobId"].isNull())
			contentsObject.jobId = dataNodeContentContents["JobId"].asString();
		if(!dataNodeContentContents["LastUpdateTime"].isNull())
			contentsObject.lastUpdateTime = std::stol(dataNodeContentContents["LastUpdateTime"].asString());
		if(!dataNodeContentContents["Namespace"].isNull())
			contentsObject._namespace = dataNodeContentContents["Namespace"].asString();
		if(!dataNodeContentContents["Progress"].isNull())
			contentsObject.progress = std::stoi(dataNodeContentContents["Progress"].asString());
		if(!dataNodeContentContents["PublishStatus"].isNull())
			contentsObject.publishStatus = std::stoi(dataNodeContentContents["PublishStatus"].asString());
		if(!dataNodeContentContents["Request"].isNull())
			contentsObject.request = dataNodeContentContents["Request"].asString();
		if(!dataNodeContentContents["Response"].isNull())
			contentsObject.response = dataNodeContentContents["Response"].asString();
		if(!dataNodeContentContents["Status"].isNull())
			contentsObject.status = dataNodeContentContents["Status"].asString();
		if(!dataNodeContentContents["StatusCode"].isNull())
			contentsObject.statusCode = std::stoi(dataNodeContentContents["StatusCode"].asString());
		if(!dataNodeContentContents["StatusMessage"].isNull())
			contentsObject.statusMessage = dataNodeContentContents["StatusMessage"].asString();
		if(!dataNodeContentContents["UserId"].isNull())
			contentsObject.userId = dataNodeContentContents["UserId"].asString();
		if(!dataNodeContentContents["Version"].isNull())
			contentsObject.version = dataNodeContentContents["Version"].asString();
		if(!dataNodeContentContents["JobType"].isNull())
			contentsObject.jobType = dataNodeContentContents["JobType"].asString();
		if(!dataNodeContentContents["JobMessage"].isNull())
			contentsObject.jobMessage = dataNodeContentContents["JobMessage"].asString();
		if(!dataNodeContentContents["JobName"].isNull())
			contentsObject.jobName = dataNodeContentContents["JobName"].asString();
		data_.content.push_back(contentsObject);
	}
	if(!value["ResultCode"].isNull())
		resultCode_ = std::stoi(value["ResultCode"].asString());
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();

}

ListTasksResult::Data ListTasksResult::getData()const
{
	return data_;
}

std::string ListTasksResult::getResultMessage()const
{
	return resultMessage_;
}

int ListTasksResult::getResultCode()const
{
	return resultCode_;
}

