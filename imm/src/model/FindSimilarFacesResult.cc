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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
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
		auto allSimilarFaces = value["SimilarFaces"]["SimilarFacesItem"];
		for (auto value : allSimilarFaces)
		{
			FacesItem::SimilarFacesItem similarFacesObject;
			if(!value["FaceId"].isNull())
				similarFacesObject.faceId = value["FaceId"].asString();
			if(!value["ImageUri"].isNull())
				similarFacesObject.imageUri = value["ImageUri"].asString();
			if(!value["Similarity"].isNull())
				similarFacesObject.similarity = std::stof(value["Similarity"].asString());
			auto faceAttributes1Node = value["FaceAttributes"];
			auto faceBoundaryNode = faceAttributes1Node["FaceBoundary"];
			if(!faceBoundaryNode["Left"].isNull())
				similarFacesObject.faceAttributes1.faceBoundary.left = std::stoi(faceBoundaryNode["Left"].asString());
			if(!faceBoundaryNode["Top"].isNull())
				similarFacesObject.faceAttributes1.faceBoundary.top = std::stoi(faceBoundaryNode["Top"].asString());
			if(!faceBoundaryNode["Width"].isNull())
				similarFacesObject.faceAttributes1.faceBoundary.width = std::stoi(faceBoundaryNode["Width"].asString());
			if(!faceBoundaryNode["Height"].isNull())
				similarFacesObject.faceAttributes1.faceBoundary.height = std::stoi(faceBoundaryNode["Height"].asString());
			facesObject.similarFaces.push_back(similarFacesObject);
		}
		auto faceAttributesNode = value["FaceAttributes"];
		auto faceBoundary2Node = faceAttributesNode["FaceBoundary"];
		if(!faceBoundary2Node["Left"].isNull())
			facesObject.faceAttributes.faceBoundary2.left = std::stoi(faceBoundary2Node["Left"].asString());
		if(!faceBoundary2Node["Top"].isNull())
			facesObject.faceAttributes.faceBoundary2.top = std::stoi(faceBoundary2Node["Top"].asString());
		if(!faceBoundary2Node["Width"].isNull())
			facesObject.faceAttributes.faceBoundary2.width = std::stoi(faceBoundary2Node["Width"].asString());
		if(!faceBoundary2Node["Height"].isNull())
			facesObject.faceAttributes.faceBoundary2.height = std::stoi(faceBoundary2Node["Height"].asString());
		faces_.push_back(facesObject);
	}

}

std::vector<FindSimilarFacesResult::FacesItem> FindSimilarFacesResult::getFaces()const
{
	return faces_;
}

