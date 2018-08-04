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

#include <alibabacloud/mts/model/QueryFacerecogJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryFacerecogJobListResult::QueryFacerecogJobListResult() :
	ServiceResult()
{}

QueryFacerecogJobListResult::QueryFacerecogJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFacerecogJobListResult::~QueryFacerecogJobListResult()
{}

void QueryFacerecogJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFacerecogJobList = value["FacerecogJobList"]["FacerecogJob"];
	for (auto value : allFacerecogJobList)
	{
		FacerecogJob facerecogJobListObject;
		if(!value["Id"].isNull())
			facerecogJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			facerecogJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			facerecogJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			facerecogJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			facerecogJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			facerecogJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			facerecogJobListObject.creationTime = value["CreationTime"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			facerecogJobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			facerecogJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			facerecogJobListObject.input.object = inputNode["Object"].asString();
		auto videoFacerecogResultNode = value["VideoFacerecogResult"];
		auto allFacerecogs = value["Facerecogs"]["Facerecog"];
		for (auto value : allFacerecogs)
		{
			FacerecogJob::VideoFacerecogResult::Facerecog facerecogObject;
			if(!value["Time"].isNull())
				facerecogObject.time = value["Time"].asString();
			auto allFaces = value["Faces"]["Face"];
			for (auto value : allFaces)
			{
				FacerecogJob::VideoFacerecogResult::Facerecog::Face facesObject;
				if(!value["Name"].isNull())
					facesObject.name = value["Name"].asString();
				if(!value["Score"].isNull())
					facesObject.score = value["Score"].asString();
				if(!value["Target"].isNull())
					facesObject.target = value["Target"].asString();
				facerecogObject.faces.push_back(facesObject);
			}
			facerecogJobListObject.videoFacerecogResult.facerecogs.push_back(facerecogObject);
		}
		facerecogJobList_.push_back(facerecogJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<std::string> QueryFacerecogJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

std::vector<QueryFacerecogJobListResult::FacerecogJob> QueryFacerecogJobListResult::getFacerecogJobList()const
{
	return facerecogJobList_;
}

