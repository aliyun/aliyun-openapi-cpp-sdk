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

#include <alibabacloud/mts/model/QueryAnnotationJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryAnnotationJobListResult::QueryAnnotationJobListResult() :
	ServiceResult()
{}

QueryAnnotationJobListResult::QueryAnnotationJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAnnotationJobListResult::~QueryAnnotationJobListResult()
{}

void QueryAnnotationJobListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAnnotationJobList = value["AnnotationJobList"]["AnnotationJob"];
	for (auto value : allAnnotationJobList)
	{
		AnnotationJob annotationJobListObject;
		if(!value["Id"].isNull())
			annotationJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			annotationJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			annotationJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			annotationJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			annotationJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			annotationJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			annotationJobListObject.creationTime = value["CreationTime"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			annotationJobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			annotationJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			annotationJobListObject.input.object = inputNode["Object"].asString();
		auto videoAnnotationResultNode = value["VideoAnnotationResult"];
		if(!videoAnnotationResultNode["Details"].isNull())
			annotationJobListObject.videoAnnotationResult.details = videoAnnotationResultNode["Details"].asString();
		auto allAnnotations = value["Annotations"]["Annotation"];
		for (auto value : allAnnotations)
		{
			AnnotationJob::VideoAnnotationResult::Annotation annotationObject;
			if(!value["Label"].isNull())
				annotationObject.label = value["Label"].asString();
			if(!value["Score"].isNull())
				annotationObject.score = value["Score"].asString();
			annotationJobListObject.videoAnnotationResult.annotations.push_back(annotationObject);
		}
		annotationJobList_.push_back(annotationJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryAnnotationJobListResult::AnnotationJob> QueryAnnotationJobListResult::getAnnotationJobList()const
{
	return annotationJobList_;
}

std::vector<std::string> QueryAnnotationJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

