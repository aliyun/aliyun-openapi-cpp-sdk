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

#include <alibabacloud/tdsr/model/CreateSceneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tdsr;
using namespace AlibabaCloud::Tdsr::Model;

CreateSceneResult::CreateSceneResult() :
	ServiceResult()
{}

CreateSceneResult::CreateSceneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSceneResult::~CreateSceneResult()
{}

void CreateSceneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SceneId"].isNull())
		sceneId_ = std::stol(value["SceneId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["PreviewToken"].isNull())
		previewToken_ = value["PreviewToken"].asString();

}

long CreateSceneResult::getSceneId()const
{
	return sceneId_;
}

std::string CreateSceneResult::getPreviewToken()const
{
	return previewToken_;
}

std::string CreateSceneResult::getErrMessage()const
{
	return errMessage_;
}

bool CreateSceneResult::getSuccess()const
{
	return success_;
}

