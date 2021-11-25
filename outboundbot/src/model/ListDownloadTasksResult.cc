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

#include <alibabacloud/outboundbot/model/ListDownloadTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListDownloadTasksResult::ListDownloadTasksResult() :
	ServiceResult()
{}

ListDownloadTasksResult::ListDownloadTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDownloadTasksResult::~ListDownloadTasksResult()
{}

void ListDownloadTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto downloadTasksNode = value["DownloadTasks"];
	if(!downloadTasksNode["PageNumber"].isNull())
		downloadTasks_.pageNumber = std::stoi(downloadTasksNode["PageNumber"].asString());
	if(!downloadTasksNode["PageSize"].isNull())
		downloadTasks_.pageSize = std::stoi(downloadTasksNode["PageSize"].asString());
	if(!downloadTasksNode["TotalCount"].isNull())
		downloadTasks_.totalCount = std::stoi(downloadTasksNode["TotalCount"].asString());
	auto allListNode = downloadTasksNode["List"]["DownloadTask"];
	for (auto downloadTasksNodeListDownloadTask : allListNode)
	{
		DownloadTasks::DownloadTask downloadTaskObject;
		if(!downloadTasksNodeListDownloadTask["Status"].isNull())
			downloadTaskObject.status = downloadTasksNodeListDownloadTask["Status"].asString();
		if(!downloadTasksNodeListDownloadTask["Title"].isNull())
			downloadTaskObject.title = downloadTasksNodeListDownloadTask["Title"].asString();
		if(!downloadTasksNodeListDownloadTask["ExpireTime"].isNull())
			downloadTaskObject.expireTime = std::stol(downloadTasksNodeListDownloadTask["ExpireTime"].asString());
		if(!downloadTasksNodeListDownloadTask["TaskId"].isNull())
			downloadTaskObject.taskId = downloadTasksNodeListDownloadTask["TaskId"].asString();
		auto allDownloadTaskFilesNode = downloadTasksNodeListDownloadTask["DownloadTaskFiles"]["DownloadTaskFile0"];
		for (auto downloadTasksNodeListDownloadTaskDownloadTaskFilesDownloadTaskFile0 : allDownloadTaskFilesNode)
		{
			DownloadTasks::DownloadTask::DownloadTaskFile0 downloadTaskFilesObject;
			if(!downloadTasksNodeListDownloadTaskDownloadTaskFilesDownloadTaskFile0["Status"].isNull())
				downloadTaskFilesObject.status = downloadTasksNodeListDownloadTaskDownloadTaskFilesDownloadTaskFile0["Status"].asString();
			if(!downloadTasksNodeListDownloadTaskDownloadTaskFilesDownloadTaskFile0["Title"].isNull())
				downloadTaskFilesObject.title = downloadTasksNodeListDownloadTaskDownloadTaskFilesDownloadTaskFile0["Title"].asString();
			if(!downloadTasksNodeListDownloadTaskDownloadTaskFilesDownloadTaskFile0["Progress"].isNull())
				downloadTaskFilesObject.progress = std::stoi(downloadTasksNodeListDownloadTaskDownloadTaskFilesDownloadTaskFile0["Progress"].asString());
			if(!downloadTasksNodeListDownloadTaskDownloadTaskFilesDownloadTaskFile0["FileId"].isNull())
				downloadTaskFilesObject.fileId = downloadTasksNodeListDownloadTaskDownloadTaskFilesDownloadTaskFile0["FileId"].asString();
			downloadTaskObject.downloadTaskFiles.push_back(downloadTaskFilesObject);
		}
		downloadTasks_.list.push_back(downloadTaskObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListDownloadTasksResult::DownloadTasks ListDownloadTasksResult::getDownloadTasks()const
{
	return downloadTasks_;
}

std::string ListDownloadTasksResult::getMessage()const
{
	return message_;
}

int ListDownloadTasksResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListDownloadTasksResult::getCode()const
{
	return code_;
}

bool ListDownloadTasksResult::getSuccess()const
{
	return success_;
}

