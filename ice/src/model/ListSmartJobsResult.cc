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

#include <alibabacloud/ice/model/ListSmartJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListSmartJobsResult::ListSmartJobsResult() :
	ServiceResult()
{}

ListSmartJobsResult::ListSmartJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSmartJobsResult::~ListSmartJobsResult()
{}

void ListSmartJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmartJobListNode = value["SmartJobList"]["SmartJobListItem"];
	for (auto valueSmartJobListSmartJobListItem : allSmartJobListNode)
	{
		SmartJobListItem smartJobListObject;
		if(!valueSmartJobListSmartJobListItem["JobId"].isNull())
			smartJobListObject.jobId = valueSmartJobListSmartJobListItem["JobId"].asString();
		if(!valueSmartJobListSmartJobListItem["Title"].isNull())
			smartJobListObject.title = valueSmartJobListSmartJobListItem["Title"].asString();
		if(!valueSmartJobListSmartJobListItem["Description"].isNull())
			smartJobListObject.description = valueSmartJobListSmartJobListItem["Description"].asString();
		if(!valueSmartJobListSmartJobListItem["UserId"].isNull())
			smartJobListObject.userId = std::stol(valueSmartJobListSmartJobListItem["UserId"].asString());
		if(!valueSmartJobListSmartJobListItem["JobType"].isNull())
			smartJobListObject.jobType = valueSmartJobListSmartJobListItem["JobType"].asString();
		if(!valueSmartJobListSmartJobListItem["EditingConfig"].isNull())
			smartJobListObject.editingConfig = valueSmartJobListSmartJobListItem["EditingConfig"].asString();
		if(!valueSmartJobListSmartJobListItem["UserData"].isNull())
			smartJobListObject.userData = valueSmartJobListSmartJobListItem["UserData"].asString();
		if(!valueSmartJobListSmartJobListItem["JobState"].isNull())
			smartJobListObject.jobState = valueSmartJobListSmartJobListItem["JobState"].asString();
		if(!valueSmartJobListSmartJobListItem["CreateTime"].isNull())
			smartJobListObject.createTime = valueSmartJobListSmartJobListItem["CreateTime"].asString();
		if(!valueSmartJobListSmartJobListItem["ModifiedTime"].isNull())
			smartJobListObject.modifiedTime = valueSmartJobListSmartJobListItem["ModifiedTime"].asString();
		auto inputConfigNode = value["InputConfig"];
		if(!inputConfigNode["InputFile"].isNull())
			smartJobListObject.inputConfig.inputFile = inputConfigNode["InputFile"].asString();
		if(!inputConfigNode["Keyword"].isNull())
			smartJobListObject.inputConfig.keyword = inputConfigNode["Keyword"].asString();
		auto inputMediaInfoNode = inputConfigNode["InputMediaInfo"];
		if(!inputMediaInfoNode["MediaId"].isNull())
			smartJobListObject.inputConfig.inputMediaInfo.mediaId = inputMediaInfoNode["MediaId"].asString();
		if(!inputMediaInfoNode["InputUrl"].isNull())
			smartJobListObject.inputConfig.inputMediaInfo.inputUrl = inputMediaInfoNode["InputUrl"].asString();
		if(!inputMediaInfoNode["MediaType"].isNull())
			smartJobListObject.inputConfig.inputMediaInfo.mediaType = inputMediaInfoNode["MediaType"].asString();
		if(!inputMediaInfoNode["Title"].isNull())
			smartJobListObject.inputConfig.inputMediaInfo.title = inputMediaInfoNode["Title"].asString();
		if(!inputMediaInfoNode["CoverUrl"].isNull())
			smartJobListObject.inputConfig.inputMediaInfo.coverUrl = inputMediaInfoNode["CoverUrl"].asString();
		if(!inputMediaInfoNode["FileUrl"].isNull())
			smartJobListObject.inputConfig.inputMediaInfo.fileUrl = inputMediaInfoNode["FileUrl"].asString();
		if(!inputMediaInfoNode["FileSize"].isNull())
			smartJobListObject.inputConfig.inputMediaInfo.fileSize = inputMediaInfoNode["FileSize"].asString();
		auto inputOssFileInfoNode = inputConfigNode["InputOssFileInfo"];
		if(!inputOssFileInfoNode["OssUrl"].isNull())
			smartJobListObject.inputConfig.inputOssFileInfo.ossUrl = inputOssFileInfoNode["OssUrl"].asString();
		if(!inputOssFileInfoNode["FileSize"].isNull())
			smartJobListObject.inputConfig.inputOssFileInfo.fileSize = inputOssFileInfoNode["FileSize"].asString();
		if(!inputOssFileInfoNode["Duration"].isNull())
			smartJobListObject.inputConfig.inputOssFileInfo.duration = inputOssFileInfoNode["Duration"].asString();
		if(!inputOssFileInfoNode["Title"].isNull())
			smartJobListObject.inputConfig.inputOssFileInfo.title = inputOssFileInfoNode["Title"].asString();
		if(!inputOssFileInfoNode["MediaType"].isNull())
			smartJobListObject.inputConfig.inputOssFileInfo.mediaType = inputOssFileInfoNode["MediaType"].asString();
		auto outputConfigNode = value["OutputConfig"];
		if(!outputConfigNode["Bucket"].isNull())
			smartJobListObject.outputConfig.bucket = outputConfigNode["Bucket"].asString();
		if(!outputConfigNode["Object"].isNull())
			smartJobListObject.outputConfig.object = outputConfigNode["Object"].asString();
		smartJobList_.push_back(smartJobListObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListSmartJobsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListSmartJobsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListSmartJobsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListSmartJobsResult::SmartJobListItem> ListSmartJobsResult::getSmartJobList()const
{
	return smartJobList_;
}

