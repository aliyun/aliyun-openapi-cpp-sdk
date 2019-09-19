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

#include <alibabacloud/lubancloud/model/QueryGenerateTaskResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lubancloud;
using namespace AlibabaCloud::Lubancloud::Model;

QueryGenerateTaskResultResult::QueryGenerateTaskResultResult() :
	ServiceResult()
{}

QueryGenerateTaskResultResult::QueryGenerateTaskResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryGenerateTaskResultResult::~QueryGenerateTaskResultResult()
{}

void QueryGenerateTaskResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPicturesNode = value["Pictures"]["Picture"];
	for (auto valuePicturesPicture : allPicturesNode)
	{
		Picture picturesObject;
		if(!valuePicturesPicture["Id"].isNull())
			picturesObject.id = std::stol(valuePicturesPicture["Id"].asString());
		if(!valuePicturesPicture["Name"].isNull())
			picturesObject.name = valuePicturesPicture["Name"].asString();
		if(!valuePicturesPicture["PreviewUrl"].isNull())
			picturesObject.previewUrl = valuePicturesPicture["PreviewUrl"].asString();
		if(!valuePicturesPicture["Width"].isNull())
			picturesObject.width = std::stoi(valuePicturesPicture["Width"].asString());
		if(!valuePicturesPicture["Height"].isNull())
			picturesObject.height = std::stoi(valuePicturesPicture["Height"].asString());
		if(!valuePicturesPicture["Status"].isNull())
			picturesObject.status = std::stoi(valuePicturesPicture["Status"].asString());
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

std::vector<QueryGenerateTaskResultResult::Picture> QueryGenerateTaskResultResult::getPictures()const
{
	return pictures_;
}

int QueryGenerateTaskResultResult::getStatus()const
{
	return status_;
}

int QueryGenerateTaskResultResult::getSuccessSize()const
{
	return successSize_;
}

int QueryGenerateTaskResultResult::getFailSize()const
{
	return failSize_;
}

int QueryGenerateTaskResultResult::getTotalSize()const
{
	return totalSize_;
}

int QueryGenerateTaskResultResult::getWaitSize()const
{
	return waitSize_;
}

