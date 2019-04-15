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

#include <alibabacloud/imm/model/FindSimilarFacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

FindSimilarFacesResult::FindSimilarFacesResult() :
	ServiceResult()
{}

FindSimilarFacesResult::FindSimilarFacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindSimilarFacesResult::~FindSimilarFacesResult()
{}

void FindSimilarFacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFaces = value["Faces"]["FacesItem"];
	for (auto value : allFaces)
	{
		FacesItem facesObject;
		if(!value["FaceId"].isNull())
			facesObject.faceId = value["FaceId"].asString();
		if(!value["ImageUri"].isNull())
			facesObject.imageUri = value["ImageUri"].asString();
		if(!value["Similarity"].isNull())
			facesObject.similarity = std::stof(value["Similarity"].asString());
		auto faceAttributesNode = value["FaceAttributes"];
		auto faceBoundaryNode = faceAttributesNode["FaceBoundary"];
		if(!faceBoundaryNode["Left"].isNull())
			facesObject.faceAttributes.faceBoundary.left = std::stoi(faceBoundaryNode["Left"].asString());
		if(!faceBoundaryNode["Top"].isNull())
			facesObject.faceAttributes.faceBoundary.top = std::stoi(faceBoundaryNode["Top"].asString());
		if(!faceBoundaryNode["Width"].isNull())
			facesObject.faceAttributes.faceBoundary.width = std::stoi(faceBoundaryNode["Width"].asString());
		if(!faceBoundaryNode["Height"].isNull())
			facesObject.faceAttributes.faceBoundary.height = std::stoi(faceBoundaryNode["Height"].asString());
		faces_.push_back(facesObject);
	}

}

std::vector<FindSimilarFacesResult::FacesItem> FindSimilarFacesResult::getFaces()const
{
	return faces_;
}

