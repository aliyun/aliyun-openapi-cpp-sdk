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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnnotationJobListNode = value["AnnotationJobList"]["AnnotationJob"];
	for (auto valueAnnotationJobListAnnotationJob : allAnnotationJobListNode)
	{
		AnnotationJob annotationJobListObject;
		if(!valueAnnotationJobListAnnotationJob["Id"].isNull())
			annotationJobListObject.id = valueAnnotationJobListAnnotationJob["Id"].asString();
		if(!valueAnnotationJobListAnnotationJob["UserData"].isNull())
			annotationJobListObject.userData = valueAnnotationJobListAnnotationJob["UserData"].asString();
		if(!valueAnnotationJobListAnnotationJob["PipelineId"].isNull())
			annotationJobListObject.pipelineId = valueAnnotationJobListAnnotationJob["PipelineId"].asString();
		if(!valueAnnotationJobListAnnotationJob["State"].isNull())
			annotationJobListObject.state = valueAnnotationJobListAnnotationJob["State"].asString();
		if(!valueAnnotationJobListAnnotationJob["Code"].isNull())
			annotationJobListObject.code = valueAnnotationJobListAnnotationJob["Code"].asString();
		if(!valueAnnotationJobListAnnotationJob["Message"].isNull())
			annotationJobListObject.message = valueAnnotationJobListAnnotationJob["Message"].asString();
		if(!valueAnnotationJobListAnnotationJob["CreationTime"].isNull())
			annotationJobListObject.creationTime = valueAnnotationJobListAnnotationJob["CreationTime"].asString();
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
		auto allAnnotationsNode = videoAnnotationResultNode["Annotations"]["Annotation"];
		for (auto videoAnnotationResultNodeAnnotationsAnnotation : allAnnotationsNode)
		{
			AnnotationJob::VideoAnnotationResult::Annotation annotationObject;
			if(!videoAnnotationResultNodeAnnotationsAnnotation["Label"].isNull())
				annotationObject.label = videoAnnotationResultNodeAnnotationsAnnotation["Label"].asString();
			if(!videoAnnotationResultNodeAnnotationsAnnotation["Score"].isNull())
				annotationObject.score = videoAnnotationResultNodeAnnotationsAnnotation["Score"].asString();
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

