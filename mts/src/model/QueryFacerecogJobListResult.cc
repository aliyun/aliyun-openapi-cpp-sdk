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
	auto allFacerecogJobListNode = value["FacerecogJobList"]["FacerecogJob"];
	for (auto valueFacerecogJobListFacerecogJob : allFacerecogJobListNode)
	{
		FacerecogJob facerecogJobListObject;
		if(!valueFacerecogJobListFacerecogJob["Id"].isNull())
			facerecogJobListObject.id = valueFacerecogJobListFacerecogJob["Id"].asString();
		if(!valueFacerecogJobListFacerecogJob["UserData"].isNull())
			facerecogJobListObject.userData = valueFacerecogJobListFacerecogJob["UserData"].asString();
		if(!valueFacerecogJobListFacerecogJob["PipelineId"].isNull())
			facerecogJobListObject.pipelineId = valueFacerecogJobListFacerecogJob["PipelineId"].asString();
		if(!valueFacerecogJobListFacerecogJob["State"].isNull())
			facerecogJobListObject.state = valueFacerecogJobListFacerecogJob["State"].asString();
		if(!valueFacerecogJobListFacerecogJob["Code"].isNull())
			facerecogJobListObject.code = valueFacerecogJobListFacerecogJob["Code"].asString();
		if(!valueFacerecogJobListFacerecogJob["Message"].isNull())
			facerecogJobListObject.message = valueFacerecogJobListFacerecogJob["Message"].asString();
		if(!valueFacerecogJobListFacerecogJob["CreationTime"].isNull())
			facerecogJobListObject.creationTime = valueFacerecogJobListFacerecogJob["CreationTime"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			facerecogJobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			facerecogJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			facerecogJobListObject.input.object = inputNode["Object"].asString();
		auto videoFacerecogResultNode = value["VideoFacerecogResult"];
		auto allFacerecogsNode = videoFacerecogResultNode["Facerecogs"]["Facerecog"];
		for (auto videoFacerecogResultNodeFacerecogsFacerecog : allFacerecogsNode)
		{
			FacerecogJob::VideoFacerecogResult::Facerecog facerecogObject;
			if(!videoFacerecogResultNodeFacerecogsFacerecog["Time"].isNull())
				facerecogObject.time = videoFacerecogResultNodeFacerecogsFacerecog["Time"].asString();
			auto allFacesNode = allFacerecogsNode["Faces"]["Face"];
			for (auto allFacerecogsNodeFacesFace : allFacesNode)
			{
				FacerecogJob::VideoFacerecogResult::Facerecog::Face facesObject;
				if(!allFacerecogsNodeFacesFace["Name"].isNull())
					facesObject.name = allFacerecogsNodeFacesFace["Name"].asString();
				if(!allFacerecogsNodeFacesFace["Score"].isNull())
					facesObject.score = allFacerecogsNodeFacesFace["Score"].asString();
				if(!allFacerecogsNodeFacesFace["Target"].isNull())
					facesObject.target = allFacerecogsNodeFacesFace["Target"].asString();
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

