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

#include <alibabacloud/lubancloud/model/QueryCutoutTaskResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lubancloud;
using namespace AlibabaCloud::Lubancloud::Model;

QueryCutoutTaskResultResult::QueryCutoutTaskResultResult() :
	ServiceResult()
{}

QueryCutoutTaskResultResult::QueryCutoutTaskResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCutoutTaskResultResult::~QueryCutoutTaskResultResult()
{}

void QueryCutoutTaskResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPicturesNode = value["Pictures"]["Picture"];
	for (auto valuePicturesPicture : allPicturesNode)
	{
		Picture picturesObject;
		if(!valuePicturesPicture["OriginUrl"].isNull())
			picturesObject.originUrl = valuePicturesPicture["OriginUrl"].asString();
		if(!valuePicturesPicture["CutoutUrl"].isNull())
			picturesObject.cutoutUrl = valuePicturesPicture["CutoutUrl"].asString();
		if(!valuePicturesPicture["Width"].isNull())
			picturesObject.width = std::stoi(valuePicturesPicture["Width"].asString());
		if(!valuePicturesPicture["Height"].isNull())
			picturesObject.height = std::stoi(valuePicturesPicture["Height"].asString());
		if(!valuePicturesPicture["Status"].isNull())
			picturesObject.status = std::stoi(valuePicturesPicture["Status"].asString());
		if(!valuePicturesPicture["ErrorCode"].isNull())
			picturesObject.errorCode = valuePicturesPicture["ErrorCode"].asString();
		if(!valuePicturesPicture["ErrorMessage"].isNull())
			picturesObject.errorMessage = valuePicturesPicture["ErrorMessage"].asString();
		pictures_.push_back(picturesObject);
	}
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stoi(value["TotalSize"].asString());
	if(!value["WaitSize"].isNull())
		waitSize_ = std::stoi(value["WaitSize"].asString());
	if(!value["SuccessSize"].isNull())
		successSize_ = std::stoi(value["SuccessSize"].asString());
	if(!value["FailSize"].isNull())
		failSize_ = std::stoi(value["FailSize"].asString());
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());

}

std::vector<QueryCutoutTaskResultResult::Picture> QueryCutoutTaskResultResult::getPictures()const
{
	return pictures_;
}

int QueryCutoutTaskResultResult::getStatus()const
{
	return status_;
}

int QueryCutoutTaskResultResult::getSuccessSize()const
{
	return successSize_;
}

int QueryCutoutTaskResultResult::getFailSize()const
{
	return failSize_;
}

int QueryCutoutTaskResultResult::getTotalSize()const
{
	return totalSize_;
}

int QueryCutoutTaskResultResult::getWaitSize()const
{
	return waitSize_;
}

